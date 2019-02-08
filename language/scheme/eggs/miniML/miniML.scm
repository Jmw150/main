;;
;;  A type checker and interpreter for a simple ML-like language.
;;
;;  Based on the code and paper by Xavier Leroy (2000): A modular
;;  module system. Journal of Functional Programming, 10, pp 269-303
;;  doi:10.1017/S0956796800003683
;;
;;
;; Copyright 2010-2012 Ivan Raikov and the Okinawa Institute of
;; Science and Technology.
;;
;; This program is free software: you can redistribute it and/or
;; modify it under the terms of the GNU General Public License as
;; published by the Free Software Foundation, either version 3 of the
;; License, or (at your option) any later version.
;;
;; This program is distributed in the hope that it will be useful, but
;; WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
;; General Public License for more details.
;;
;; A full copy of the GPL license can be found at
;; <http://www.gnu.org/licenses/>.
;;

(module miniML

	(constant? term?
	 
	 Const Longid Function Apply Let0 Rcon Rproj
	 Trec Tpath Tcon Tvar 

	 core-syntax
	 core-typing
	 core-scoping
	 core-initialize

	 core-utils

	 term->sxml modtype->sxml modspec->sxml modterm->sxml moddef->sxml const->sxml
	 )

	(import scheme chicken 
		(only srfi-1 fold filter combine every zip drop-right last)
		(only extras pp fprintf)
		(only data-structures alist-ref ->string identity sort))
	(require-extension extras datatype static-modules)

(define (list-of pred) (lambda (x) (and (list? x) (every pred x))))

(define (constant? c)
  (and (pair? c) 
       (let ((t (car c)) (v (cadr c)))
	 (case t ((real) (real? v))
	       ((nat)    (integer? v))
	       ((label)  (symbol? v))
	       ((bool)   (boolean? v))
	       ((string) (string? v))
	       (else #f)))))

(define (fieldval? v) 
  (and (pair? v) (ident? (car v)) (term? (cdr v))))

(define-datatype term term?
  (Const     (c constant?)) 
  (Longid    (p path?)) ;; id or mod.mod...id 
  (Function  (i ident?) (t term?))
  (Apply     (t1 term?) (t2 term?))
  (Let0      (i ident?) (v term?) (b term?))
  (Rcon      (fs (list-of fieldval?)))
  (Rproj     (s symbol?) (t term?))
  )


(define-record-printer (term x out)
  (fprintf out "~S"
	   (cases term x
		  (Const (c)      `(Const ,c))
		  (Longid (p)      p)
		  (Function (i t)  `(Function ,i ,t))
		  (Apply (t1 t2)   `(Apply ,t1 ,t2))
		  (Let0 (i v b)    `(Let0 (,i = ,v) ,b))
		  (Rcon (fs)       `(Rcon ,fs))
		  (Rproj (s t)     `(Rproj ,s ,t))
		  )))

(define-record-type tyvar
  (make-tyvar repres level imperative)
  tyvar?
  (repres tyvar-repres tyvar-repres-set!) ;; representative, for union-find 
  (level  tyvar-level tyvar-level-set!) ;; binding level, for generalization
  (imperative tyvar-imperative) ;; imperative type variables must not be generalized 
                                ;; for use w/ref and side effects
  )

(define (list-of pred) (lambda (x) (and (list? x) (every pred x))))
	
(define-datatype simple-type simple-type?
  (Tvar  (tv tyvar?))
  (Tcon  (con tycon?) (ts (lambda (x) (every simple-type? x))))
  )

(define-datatype tycon tycon?
  (Tpath (p path?))
  (Trec  (labels (list-of symbol?)))
  )
  


(define-record-printer (tycon x out)
  (fprintf out "#<tycon  ~S>"
	   (cases tycon x
		  (Tpath (p) `(Tpath ,p))
		  (Trec (fs) `(Trec . ,fs))
                  (else x)
		  )))
	   

(define-record-type valtype
  (make-valtype0 quantif body)
  valtype?
  (quantif valtype-quantif) ;; quantified variables
  (body    valtype-body) ;; body of type scheme
  )

(define (make-valtype q b)
  (if (not (list? q)) (error 'make-valtype "invalid quantified variables list" q))
  (if (not (simple-type? b)) (error 'make-valtype "invalid type body" b ))
  (make-valtype0 q b))
  

(define-record-printer (valtype x out)
  (fprintf out "#<valtype  quantif: ~S body: ~S>"
	   (valtype-quantif x)
	   (valtype-body x)))
	   


(define-record-type deftype
  (make-deftype params defbody)
  deftype?
  (params   deftype-params) ;; list of parameters
  (defbody  deftype-body) ;; body of type definition
  )


(define-record-type kind
  (make-kind arity)
  kind?
  (arity   kind-arity) 
  )


(define (subst-type ty subst)
  (cond ((simple-type? ty)
	 (cases simple-type ty
		(Tvar (tv) 
		      (or (and (tyvar-repres tv) (subst-type (tyvar-repres tv) subst)) ty))
		(Tcon (con ts)  
		      (cases tycon con
			     (Tpath (p)
				    (Tcon (Tpath (subst-path p subst)) 
					  (map (lambda (x) (subst-type x subst)) ts)))
			     (Trec (fs)
				   (Tcon (Trec fs)  
					 (map (lambda (x) (subst-type x subst)) ts)))
			     ))
	 (else (error 'subst-type "invalid type" ty))
	 ))
	))

(define (subst-valtype vty subst)
  (make-valtype (valtype-quantif vty)
		(subst-type (valtype-body vty) subst)))

(define (subst-deftype def subst)
  (make-deftype (deftype-params def)
		(subst-type (deftype-body def) subst)))

(define (subst-kind kind subst) kind)


(define core-syntax
  (make-core-syntax term? valtype? deftype? kind? make-valtype make-deftype subst-valtype subst-deftype subst-kind))

(define-values ( env-binding? env-empty env-add-signature env-add-module env-add-type env-add-spec env-add-value
	         env-find-value env-find-type env-find-module env-find)
  (make-mod-env core-syntax))


;; The type-checker for mini-ML (Hindley-Milner type inference) 


(define (typerepr ty)
  (assert (simple-type? ty))
  (cases simple-type ty
	 (Tvar (tv)
	       (or (and (tyvar-repres tv) 
			(let ((r (typerepr (tyvar-repres tv))))
			  (tyvar-repres-set! tv r)
			  r))
		    ty))
	 (else ty)))


(define current-level (make-parameter 0))
(define (begin-def) (current-level (+ 1 (current-level))))
(define (end-def)   (current-level (- (current-level) 1)))
(define (newvar . rest)    (make-tyvar #f (current-level) 
				       (if (null? rest) #f (car rest))))
(define (unknown)   (Tvar (newvar)))

(define (subst-vars ty subst)
  (let ((tyvar (typerepr ty)))
    (assert (simple-type? tyvar))
    (cases simple-type tyvar
	   (Tvar (var) (let ((v (assq var subst)))
			 (or (and v (cadr v)) tyvar) ))
	   (Tcon (con ts)
		 (let ((ts1 (map (lambda (t) (subst-vars t subst)) ts)))
		   (Tcon con ts1)))
	   )))


(define (cannot-expand path)
  (make-property-condition 'Cannot_expand 'message path))
(define cannot-expand?
  (condition-predicate 'Cannot_expand))


(define (expand-manifest env path args)
  (let ((td (env-find-type path env)))
    (let ((m (typedecl-manifest td)))
      (if (not m) 
	  (signal (cannot-expand path))
	  (subst-vars (deftype-body m)
		      (zip (deftype-params m) args ) 
		      )))))


;; Expand abbreviations in ty1 and ty2 until their top constructor match 
(define (scrape-types env ty1 ty2)

  (assert (simple-type? ty1))
  (assert (simple-type? ty2))

  (let ((repr1 (typerepr ty1))
	(repr2 (typerepr ty2)))

    (cases simple-type repr1 
	   (Tcon (con1 args1)

		 (cases tycon con1
			(Tpath (path1)
			       (cases simple-type repr2
				      (Tcon (con2 args2)
					    (cases tycon con2
						   (Tpath (path2)
							  (if (path-equal? path1 path2)
							      (list repr1 repr2)
							      (handle-exceptions 
							       exn
							       (begin
								 (cond ((cannot-expand? exn)
									(handle-exceptions 
									 exn
									 (cond ((cannot-expand? exn)
										(list repr1 repr2))
									       (else (abort exn)))
									 (let ((m2 (expand-manifest env path2 args2)))
									   (scrape-types env repr1 m2))))
								       (else (abort exn)))
								 )
							       (let ((m1 (expand-manifest env path1 args1)))
								 (scrape-types env m1 repr2)))
							      ))

						   (Trec (_)
							 (let ((m1 (expand-manifest env path1 args1)))
							   (scrape-types env m1 repr2)))

						   (else (error 'scrape-types "incompatible types" ty1 ty2))
						   ))
				      (else
				       (handle-exceptions
					exn
					(begin
					  (cond ((cannot-expand? exn)
						 (list repr1 repr2))
						(else (abort exn))))
					(begin
					  (let ((m1 (expand-manifest env path1 args1)))
					    (scrape-types env m1 repr2)))
					))
				      ))

			(Trec (fs1)
			      (cases  simple-type repr2

				      (Tcon (con2 args2)
					    (cases tycon con2
						   (Trec (fs2)
							 (if (equal? fs1 fs2)
							     (list repr1 repr2)
							     (error 'scrape-types "incompatible types" ty1 ty2)
							     ))

						   (Tpath (path2)
							  (let ((m2 (expand-manifest env path2 args2)))
							    (scrape-types env repr1 m2)))

						   (else (error 'scrape-types "incompatible types" ty1 ty2))
						   ))

				      (else (error 'scrape-types "incompatible types" ty1 ty2))
				      ))

			(else (error 'scrape-types "incompatible types" ty1 ty2))
			))
	   (else
	    (cases simple-type repr2

	       (Tcon (con args)
		     (cases tycon con
			    (Tpath (path)
				   (handle-exceptions  
				    exn
				    (begin
				      (cond ((cannot-expand? exn)
					     (list repr1 repr2))
					    (else (abort exn))))
				    (let ((m2 (expand-manifest env path args)))
				      (scrape-types env repr1 m2))))
			    
			    (else (list repr1 repr2))))
		      
	       (else
		(list repr1 repr2)))))
    ))


(define (occur-check var ty)
 (cases simple-type (typerepr ty)
	(Tvar (var1) (if (eq? var var1) (error 'occur-check "cycle in unification")))
	(Tcon (con tl) (for-each (lambda (t) (occur-check var t)) tl))
	))


(define (update-levels level-max ty)
  (cases simple-type (typerepr ty)
	 (Tvar (v)    (if (< level-max (tyvar-level v)) 
			  (tyvar-level-set! v level-max)))
	 (Tcon (con tl) (for-each (lambda (t) (update-levels level-max t)) tl))
	 ))

(define (field-sort fs)
  (sort fs (lambda (x y) (string<? (->string (car x)) (->string (car y )))) ))

(define (unify env t1 t2 x1 x2)

  (let* ((rs (scrape-types env t1 t2))
	 (r1 (car rs))
	 (r2 (cadr rs)))

    (assert (simple-type? r1))
    (assert (simple-type? r2))
    (if (equal? r1 r2) '()
	(cases simple-type r1
	  (Tvar (v)
	     (begin
	       (occur-check v r2)
	       (update-levels (tyvar-level v) r2)
	       (tyvar-repres-set! v r2)))
	  (else
	   (cases simple-type r2
		  (Tvar (v)
			(begin
			  (occur-check v r1)
			  (update-levels (tyvar-level v) r1)
			  (tyvar-repres-set! v r1)))
		  (else
		   (let-values (((con1 args1)
				 (cases simple-type r1
					(Tcon (con1 args1) (values con1 args1))
					(else (error 'unify "type constructor mismatch in unification" x1 t1 x2 t2))))
				((con2 args2)
				 (cases simple-type r2
					(Tcon (con2 args2) (values con2 args2))
					(else (error 'unify "type constructor mismatch in unification" x1 t1 x2 t2)))))

		     (cases tycon con1
			    (Tpath (path1)
				   (cases tycon con2 
					  (Tpath (path2)
						 (if (path-equal? path1 path2)
						     (for-each (lambda (t1 t2) (unify env t1 t2 x1 x2)) args1 args2)
						     (error 'unify "type constructor mismatch in unification" x1 t1 x2 t2)))
					  (else (error 'unify "type constructor mismatch in unification" x1 t1 x2 t2))))
			    (Trec (fs1)
				   (cases tycon con2 
					  (Trec (fs2)
						(if (equal? fs1 fs2)
						     (for-each (lambda (t1 t2) (unify env t1 t2 x1 x2)) args1 args2)
						     (error 'unify "type constructor mismatch in unification" x1 t1 x2 t2)))
					  (else (error 'unify "type constructor mismatch in unification" x1 t1 x2 t2)))))
		     ))
		  ))
	  ))))

(define (generalize ty)

  (define (genvars ty vars)
    (cases simple-type (typerepr ty)
	   (Tvar (v)
	     (if (and (< (current-level) (tyvar-level v))
		      (not (tyvar-imperative v))
		      (not (member v vars)))
		 (cons v vars)
		 vars))
	   (Tcon (con tl)
		 (fold genvars vars tl))
	   ))

  (make-valtype (genvars ty '()) ty))



(define (trivial-scheme ty)
  (make-valtype '() ty))

(define (instance vty)
  (let ((vars (valtype-quantif vty)))
    (if (null? vars) 
	(valtype-body vty)
	(subst-vars (valtype-body vty) 
		    (map (lambda (v) (list v (unknown))) vars) ))))

(define ident-arrow  (ident-create "->"))
(define path-arrow   (Pident ident-arrow))
(define (arrow-type t1 t2) (Tcon (Tpath path-arrow) (list t1 t2)))

(define ident-star   (ident-create "*"))
(define path-star    (Pident ident-star))
(define (star-type  t1 t2)   (Tcon (Tpath path-star) (list t1 t2)))

(define ident-list     (ident-create "list"))
(define path-list      (Pident ident-list))
(define (list-type t)  (Tcon (Tpath path-list) (list t)))

(define ident-nat    (ident-create "nat"))
(define path-nat     (Pident ident-nat))
(define nat-type     (Tcon (Tpath path-nat) '()))

(define ident-real   (ident-create "real"))
(define path-real    (Pident ident-real))
(define real-type    (Tcon (Tpath path-real) '()))

(define ident-bool   (ident-create "bool"))
(define path-bool    (Pident ident-bool))
(define bool-type    (Tcon (Tpath path-bool) '()))

(define ident-label   (ident-create "label"))
(define path-label    (Pident ident-label))
(define label-type    (Tcon (Tpath path-label) '()))

(define ident-string   (ident-create "string"))
(define path-string    (Pident ident-string))
(define string-type    (Tcon (Tpath path-string) '()))

(define ident-bot   (ident-create "bot"))
(define path-bot    (Pident ident-bot))
(define bot-type    (Tcon (Tpath path-bot) '()))


(define (const-type c)
  (if (constant? c)
      (case (car c)
	((nat)     (Tcon (Tpath path-nat)   '()))
	((real)    (Tcon (Tpath path-real)  '()))
	((label)   (Tcon (Tpath path-label) '()))
	((bool)    (Tcon (Tpath path-bool) '()))
	((string)  (Tcon (Tpath path-string) '()))
        (else (error 'const-type "invalid constant" c)))))


(define (infer-type env t)
  (cases term t
    (Const (n)    (const-type n))
    (Longid (p)   (instance (env-find-value p env)))
    (Function (param body)
	      (let* ((type-param (unknown))
		     (type-body (infer-type (env-add-value param (trivial-scheme type-param) env) 
					    body)))
		(arrow-type type-param type-body)))

    (Apply (funct arg)
	   (let ((type-funct (infer-type env funct))
		 (type-arg   (infer-type env arg))
		 (type-res   (unknown)))
	     (unify env type-funct (arrow-type type-arg type-res) funct arg)
	     type-res))

    (Let0 (ident arg body)
	  (begin-def)
	  (let ((type-arg (infer-type env arg)))
	    (end-def)
	    (infer-type (env-add-value ident (generalize type-arg) env) body)))

    (Rcon (fs)
	  (let ((fs1 (sort fs (lambda (x y) (string<? (ident-name (car x)) (ident-name (car y)))))))
	    (let ((ts (map (lambda (f) (infer-type env (cdr f))) fs1)))
	      (Tcon (Trec (map (lambda (f) (string->symbol (ident-name (car f)))) fs1)) ts))))
	  
    (Rproj (field arg)
	   (let ((type-arg (infer-type env arg)))
	     (cases simple-type type-arg
		    (Tcon (con args) 
			  (cases tycon con
				 (Trec (fs)
				       (cond ((assoc field (zip fs args)) => (lambda (f) (cadr f)))
					     (else (error 'infer-type "field not found in record" field type-arg))))
				 (else (error 'infer-type "field selector is not given a record argument" field arg))))
		    (else (error 'infer-type "field selector is not given a record argument" field arg)))))
    ))

(define (check-simple-type env params ty)
  (cases simple-type (typerepr ty)
	 (Tvar (v)
	       (if (not (member v params)) 
		   (error 'check-simple-type "free type variable" ty)))
	 (Tcon (con tl)
	       (let ((arity 
		      (cases tycon con
			     (Tpath (path)
				    (kind-arity (typedecl-kind (env-find-type path env))))
			     (Trec (fs) (length fs)))))
		 (if (not (= (length tl) arity))
		     (error 'check-simple-type "arity mismatch" con tl)
		     (for-each (lambda (t) (check-simple-type env params t)) tl))))
	 ))
		 

(define (kind-deftype env def)
  (check-simple-type env (deftype-params def) (deftype-body def))
  (make-kind (length (deftype-params def))))

(define (check-valtype env vty)
  (check-simple-type env (valtype-quantif vty) (valtype-body vty)))

(define (check-kind env kind) (begin))


(define (type-term env term)
  (begin-def)
  (let ((ty (infer-type env term)))
    (end-def)
    (generalize ty)))


(define (valtype-match env vty1 vty2)

  (define (tyfilter ty1 ty2)
    (assert (simple-type? ty1))
    (assert (simple-type? ty2))
    (let* ((rs (scrape-types env ty1 ty2))
	   (r1 (car rs))
	   (r2 (cadr rs)))

      (cases simple-type r1
	     (Tvar (v)
		   (if (member v (valtype-quantif vty2)) #f
		       (begin
			 (tyvar-repres-set! v r2)
			 #t)))

	     (Tcon (con1 tl1)
		   (cases tycon con1

			  (Tpath (path1)
				 (cases simple-type r2
					(Tcon (con2 tl2)
					      (cases tycon con2
						     (Tpath (path2)
							    (and (equal? path1 path2)
								 (every tyfilter tl1 tl2)))
						     (else #f)))
					(else #f)))

			  (Trec (fs1)
				(cases simple-type r2
				       (Tcon (con2 tl2)
					     (cases tycon con2
						    (Trec (fs2)
							  (and (equal? fs1 fs2)
							       (every tyfilter tl1 tl2)))
						    (else #f)))

				       (else #f)))
			  ))
	     )))

  (tyfilter (instance vty1) (valtype-body vty2)))


(define (deftype-equiv env kind def1 def2)
  (define (equiv ty1 ty2)
    (let* ((rs (scrape-types env ty1 ty2))
	   (r1 (car rs))
	   (r2 (cadr rs)))

      (cases simple-type r1
	     (Tvar (v1)
		   (cases simple-type r2
			  (Tvar (v2) (equal? v1 v2))
			  (else #f)))


	     (Tcon (con1 tl1)
		   (cases tycon con1

			  (Tpath (path1)
				 (cases simple-type r2
					(Tcon (con2 tl2)
					      (cases tycon con2
						     (Tpath (path2)
							    (and (equal? path1 path2)
								 (every equiv tl1 tl2)))
						     (else #f)))
					(else #f)))

			  (Trec (fs1)
				(cases simple-type r2
				       (Tcon (con2 tl2)
					     (cases tycon con2
						    (Trec (fs2)
							  (and (equal? fs1 fs2)
							       (every equiv tl1 tl2)))
						    (else #f)))
				       (else #f)))
			  ))

	     )))


  (let ((subst (map (lambda (v1 v2) (list v2 (Tvar v1))) 
		    (deftype-params def1)  (deftype-params def2))))

    (equiv (deftype-body def1)
	   (subst-vars (deftype-body def2) subst ))))


(define (kind-match env kind1 kind2)
  (equal? (kind-arity kind1) (kind-arity kind2)))


(define (deftype-of-path path kind)
  (define (make-params n)
    (if (<= n 0) '() (cons (newvar) (make-params (- n 1)))))
  (let ((params (make-params (kind-arity kind))))
    (make-deftype params
		  (Tcon (Tpath path) (map (lambda (v) (Tvar v)) params)))))



;; Elimination of dependencies on a given module identifier by
;; repeated expansion of type paths rooted at that identifier.  Those
;; functions are used only with the relaxed typing rule for functor
;; applications described in section 5.5 and implemented in the file
;; modules.ml.extended

(define (is-rooted-at id p)
  (cases path p
	 (Pident (id1) (ident-equal? id id1))
	 (Pdot (p s)   (is-rooted-at id p))
	 ))


(define nondep-type
  (letrec ((nondep-type 
	    (lambda (nondep-type env id)
	      (lambda (ty)
		(cases simple-type (typerepr ty)
		       
		       (Tvar (v) (Tvar v))
		       
		       (Tcon (con args)
			     (cases tycon con
				    (Tpath (path)
					   (if (is-rooted-at id path)
					       (handle-exceptions 
						exn
						(cond ((cannot-expand? exn)
						       (error 'nondep-type "path not found" path)))
						(nondep-type env id (expand-manifest env path args)))
					       (Tcon (Tpath path) (map (nondep-type env id) args))))
				    
				    (else (Tcon con (map (nondep-type env id) args)))
				    ))
		       ))
		     )))
    nondep-type))


(define (nondep-valtype env id vty)
  (make-valtype (valtype-quantif vty)
		(nondep-type env id (valtype-body vty))))


(define (nondep-deftype env id vty)
  (make-deftype (deftype-params vty)
		(nondep-type env id (deftype-body vty))))


(define (nondep-kind env id kind)
  kind)


(define (scope-term sc t)
  (cases term t
	 (Const (n)             (Const n))
	 (Longid (path)         (Longid (st-value-path path sc)))
	 (Function (id body)    (Function id (scope-term (st-enter-value id sc) body)))
	 (Apply (t1 t2)         (Apply (scope-term sc t1) (scope-term sc t2)))
	 (Let0 (id t1 t2)       (Let0 id (scope-term sc t1) 
				      (scope-term (st-enter-value id sc) t2)))
	 (Rcon (fs)             (Rcon (map (lambda (f) (cons (car f) (scope-term sc (cdr f)))) fs)))
	 (Rproj (s t)           (Rproj s (scope-term sc t)))
	 ))

(define (scope-simple-type  sc ty)
  (cases simple-type ty
	 (Tvar (v) (Tvar v))
	 (Tcon (con args)
	       (cases tycon con 
		      (Tpath (path)
			     (Tcon (Tpath (st-type-path path sc))
				   (map (lambda (ty) (scope-simple-type sc ty)) args)))
		      (else (Tcon con (map (lambda (ty) (scope-simple-type sc ty)) args)))))
	 ))
	 
(define (scope-valtype sc vty)
  (make-valtype (valtype-quantif vty)
		(scope-simple-type sc (valtype-body vty))))

(define (scope-deftype sc def)
  (make-deftype (deftype-params def)
		(scope-simple-type sc (deftype-body def))))


(define (scope-kind sc kind)
  kind)


(define core-typing
  (make-core-typing type-term kind-deftype check-valtype check-kind
                    valtype-match deftype-equiv kind-match deftype-of-path))
  
(define core-scoping
  (make-core-scoping scope-term scope-valtype scope-deftype scope-kind))


(define (core-initialize enter-type enter-val)
  (enter-type ident-arrow (make-typedecl (make-kind 2) #f))
  (enter-type ident-star  (make-typedecl (make-kind 2) #f))
  (enter-type ident-list  (make-typedecl (make-kind 1) #f))
  (enter-type ident-real  (make-typedecl (make-kind 0) #f))
  (enter-type ident-bool  (make-typedecl (make-kind 0) #f))
  (enter-type ident-label (make-typedecl (make-kind 0) #f))
  (enter-type ident-string (make-typedecl (make-kind 0) #f))
  (enter-type ident-bot   (make-typedecl (make-kind 0) #f))
  (enter-type ident-nat   (make-typedecl (make-kind 0) #f))

  (enter-val "false" (make-valtype '() bool-type))
  (enter-val "true"  (make-valtype '() bool-type))
  (enter-val "empty" (make-valtype '() bot-type))

  (for-each
   (lambda (name)
     (enter-val name (make-valtype '() (arrow-type nat-type 
						   (arrow-type  nat-type
							        nat-type)))))
   '("add" "sub" "mul" "div" ))

  (for-each
   (lambda (name)
     (enter-val name (make-valtype '() (arrow-type nat-type 
						   (arrow-type nat-type
							       bool-type)))))
   '("==" "<>" "<" "<=" ">" ">="))

  (let* ((alpha (newvar)) (beta (newvar)) 
	 (alpha_i (make-tyvar (tyvar-repres alpha) (tyvar-level alpha) #t))
	 (talpha (Tvar alpha)) (tbeta (Tvar beta)) (talpha_i (Tvar alpha_i)))

    (enter-val "pair" 
	       (make-valtype `(,alpha ,beta)
			     (arrow-type talpha 
					 (arrow-type tbeta
						     (Tcon (Tpath path-star) `(,talpha ,tbeta))))))
    (enter-val "fst"
	       (make-valtype `(,alpha ,beta)
			     (arrow-type (Tcon (Tpath path-star) `(,talpha ,tbeta)) talpha)))

    (enter-val "snd"
	       (make-valtype `(,alpha ,beta)
			     (arrow-type (Tcon (Tpath path-star) `(,talpha ,tbeta)) tbeta)))

    (enter-val "null" (make-valtype `(,alpha) (Tcon (Tpath path-list) `(,talpha))))

    (enter-val "cons" 
	       (make-valtype `(,alpha)
			     (arrow-type talpha 
					 (arrow-type (Tcon (Tpath path-list) `(,talpha))
						     (Tcon (Tpath path-list) `(,talpha))))))
    (enter-val "head" 
	       (make-valtype `(,alpha)
			     (arrow-type (Tcon (Tpath path-list) `(,talpha))
					 talpha)))
    (enter-val "tail" 
	       (make-valtype `(,alpha)
			     (arrow-type (Tcon (Tpath path-list) `(,talpha))
					 (Tcon (Tpath path-list) `(,talpha)))))


    (enter-val "cond"
	       (make-valtype `(,alpha)
			     (arrow-type bool-type
					 (arrow-type talpha (arrow-type talpha talpha)))))

    )
  )

(define type-variables (make-parameter '()))

(define (reset-type-variables) (type-variables '()))

(define (find-type-variable name)
  (or (assoc name (type-variables))
      (let ((v (newvar)))
	(type-variables (cons (cons name v) (type-variables)))
	v)))

(define (binop op arg1 arg2)
  (Apply (Apply (Longid (Pident (ident-create op))) arg1) arg2))

(define (ternop op arg1 arg2 arg3)
  (Apply (Apply (Apply (Longid (Pident (ident-create op))) arg1) arg2) arg3))

(define (core-utils) 
  (values type-variables reset-type-variables
	  find-type-variable instance typerepr
	  begin-def end-def newvar generalize
	  make-deftype make-valtype make-kind
	  binop ternop path-star path-list path-arrow
	  star-type list-type arrow-type label-type string-type bot-type
	  ))

(define variable-names (make-parameter '()))
(define (reset-names)  (variable-names '()))

(define-record-printer (simple-type ty out)
  (cases simple-type (typerepr ty)

	 (Tvar (v) (let* ((name (or (assq v (variable-names))))
			  (name (if (not name)
				    (let* ((n  (+ 1 (length (variable-names))))
					   (s  (string-append "t" (number->string n))))
				      (variable-names (cons (list n s) (variable-names)))
				      s))))
		     (fprintf out "'~A" name)))
				 
	 (Tcon (con args)
	       (cases tycon con
		      (Tpath (p)
			     (cond
			       ((null? args)
				(fprintf out "~S" p))
			       ((and (path-equal? p path-arrow) 
				     (pair? args) (pair? (cdr args)) (null? (cddr args)))
				(fprintf out "~S -> ~S" (car args) (cadr args)))
			       ((and (path-equal? p path-star) 
				     (pair? args) (pair? (cdr args)) (null? (cddr args)))
				(fprintf out "~S * ~S" (car args) (cadr args)))
			       
			      (else
			       (begin
				 (fprintf out "(~S" (car args))
				 (for-each (lambda (t) (fprintf out ", ~S" t)) (cdr args))
				 (fprintf out ") ~S" p)))
			      ))

		      	 (Trec (fs) 
			       (begin (fprintf out "{")
				      (if (null? (cdr fs))
					  (fprintf out "~A: ~A" (car fs) (car args))
					  (begin
					    (for-each (lambda (fn ft) (fprintf out "~A: ~A, " fn ft)) (drop-right fs 1) args)
					    (fprintf out "~A: ~A" (last fs) (last args))))
				      (fprintf out "}")))

			 ))
	 ))
			     
(define-record-printer (valtype vty out)
  (begin
    (reset-names)
    (fprintf out "~S" (valtype-body vty))))

(define-record-printer (modtype mty out)
  (cases modtype mty
	 (Signature (sg)  
		    (pp `(sig . ,sg) out))
	 (Functorty (param pty body)
		    (pp `(functor (,param : ,pty) 
				  ,body) out))
	 ))


(define-record-printer (modspec item out)
  (cases modspec item
	 (Value_sig (id vty)
		    (pp `(val ,id : ,vty) out))
	 (Type_sig (id decl)
		   (pp `(type ,id = ,decl) out))
	 (Module_sig (id mty)
		     (pp `(module ,id : ,mty) out))))


(define-record-printer (modval x out)
  (cases modval x
	 (Structure_v (env)  (pp `(Structure . ,env) out))
	 (Mclosure_v (body env) (pp  `(Mclosure ,env ,body) out))))


(define (const->sxml c)
  (if (constant? c) 
      (list (car c)
	    (let ((v (cadr c)))
	      (cond ((boolean? v) (if v "true" "false"))
		    (else (->string v)))))
      (else (error 'const->sxml "invalid constant" c))))


(define (path->sxml p)
  (cases path p
	 (Pident (id) `(Pident ,(ident-name id)))
	 (Pdot (p s)  `(Pdot (@ (name ,s)) (path ,(path->sxml p))))))


(define (kind->sxml k)
  `(kind (arity ,(->string (kind-arity k)))))


(define (term->sxml t)
  (cases term t
	 (Const     (c)     `(Const  ,(const->sxml c)))
	 (Longid    (p)     `(Longid ,(path->sxml p)))
	 (Function  (i t)   `(Function (@ (formal ,(ident-name i))) ,(term->sxml t)))
	 (Apply     (t1 t2) `(Apply (left ,(term->sxml t1)) (right ,(term->sxml t2))))
	 (Let0      (i v b) `(Let0  (@ (name ,(ident-name i))) 
				    (value ,(term->sxml v)) 
				    (body ,(term->sxml b))))
	 ))

(define (tyvar->sxml tv)
  (let ((repres (tyvar-repres tv))
	(level  (tyvar-level tv))
	(imp    (tyvar-imperative tv)))
  `( 
    ,(and repres `(repres ,(simple-type->sxml repres)))
    (level ,level)
    ,(and imp `(imperative)))))


(define (simple-type->sxml ty)
  (cases simple-type ty
	 (Tvar  (tv)  `(Tvar ,@(filter identity (tyvar->sxml tv))))

	 (Tcon (con ts) (cases tycon con
			       (Tpath (p)
				      `(Tcon (path ,(path->sxml p)) 
					     ,@(map (lambda (x) `(t ,(simple-type->sxml x))) ts)))
			       (Trec (fs)
				     `(Tcon (fields . ,fs) 
					    ,@(map (lambda (x) `(t ,(simple-type->sxml x))) ts)))
			       ))
	 ))


(define (valtype->sxml x)
  `(Valtype ,@(map (lambda (q) `(qvar ,q)) (valtype-quantif x))
	    (body ,(simple-type->sxml (valtype-body x)))))


(define (typedecl->sxml decl)
  (let ((manifest (typedecl-manifest decl)))
    `(Typedecl ,(kind->sxml (typedecl-kind decl))
	       ,@(if manifest `((manifest ,(deftype->sxml manifest)))  `()))))


(define (deftype->sxml x)
  `(Deftype ,@(map (lambda (p) `(param ,p)) (deftype-params x))
	    (body ,(simple-type->sxml (deftype-body x)))))


(define (modspec->sxml x)
  (cases modspec x
	 (Value_sig  (id valtype) `(Value_sig (@ (name ,(ident-name id)))
					      ,(valtype->sxml valtype)))
	 (Type_sig   (id decl)    `(Type_sig (@ (name ,(ident-name id)))
					     ,(typedecl->sxml decl)))
	 (Module_sig (id ty)      `(Module_sig (@ (name ,(ident-name id)))
					       ,(modtype->sxml ty)))
	 ))


(define (moddef->sxml d)
  (cases moddef d
    (Value_def  (id term)        `(Value_def (@ (name ,(ident-name id)) )
					     (term ,(term->sxml term))))

    (Type_def   (id kind defty)  `(Type_def (@ (name ,(ident-name id)) )
					    ,(kind->sxml kind)
					    ,(deftype->sxml defty)))

    (Module_def (id modterm)     `(Component_def (@ (name ,(ident-name id)) )
						 (term ,(modterm->sxml modterm))))
    ))


(define (modtype->sxml mt)
  (cases modtype mt
	 (Signature (s) `(Signature ,@(map modspec->sxml s)))
	 (Functorty (id arg body) 
		    `(Functorty (@ (name ,(ident-name id)))
				(arg ,(modtype->sxml arg))
				(body ,(modtype->sxml body))))))


(define (modterm->sxml t)
  (cases modterm t
	 (Modid      (p)        `(Modid ,(path->sxml p)))
	 (Structure  (s)        `(Structure ,@(map (lambda (x) `(def ,(moddef->sxml x))) s)))
	 (Functor    (id mty m) `(Functor (@ (name ,(ident-name id))) 
					  (type ,(modtype->sxml mty))
					  (body ,(modterm->sxml m))))
	 (Mapply     (m1 m2) `(Modapply (left ,(modterm->sxml m1)) 
					(right ,(modterm->sxml m2))))
	 (Constraint (m mty) `(Constraint (body ,(modterm->sxml m)) 
					  (type ,(modtype->sxml mty))))
	 ))

)

