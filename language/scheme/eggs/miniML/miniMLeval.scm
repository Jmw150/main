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

(module miniMLeval

	(
	 Value_def Type_def Module_def modval?
	 core-eval-cbv eval-cbv-initialize mod-eval-cbv
	 eval-env-entry->sxml eval-env->sxml MLvalue->sxml
	 )

	(import scheme chicken)

	(require-extension datatype)
	(require-library static-modules miniML miniMLsyntax miniMLvalue)
	(import (only data-structures compose)
		(only srfi-1 fold filter member delete-duplicates every)
		(only extras pp fprintf)
		(only static-modules make-mod-env make-mod-eval
		      st-empty st-enter-type st-enter-value
		      ident? ident-create ident-add ident-equal? ident-name)
		(only miniMLsyntax moddef? Value_def Type_def Module_def)
		(only miniMLvalue MLvalue? Const_v Closure_v Tuple_v Prim_v Record_v)
		(only miniML constant? term? core-syntax const->sxml term->sxml modterm->sxml moddef->sxml )
		)


(define (freevars t bnds ax)
  (cases term t 
	 (Const (c) ax)

	 (Longid (p) 
		 (cases path p
			(Pident (s) (if (not (member s bnds ident-equal?)) (cons s ax) ax))
			(Pdot (p s) (let recur ((p p) (ax ax))
				      (cases path p
					     (Pident (s)  (if (not (member s bnds ident-equal?)) (cons s ax) ax))
					     (Pdot (p s)  (recur p ax)))))))
	 (Function (i t) 
		   (let ((bnds1 (cons i bnds)))
		     (freevars t bnds1 ax)))

	 (Apply (t1 t2)    
		(freevars t1 bnds (freevars t2 bnds ax)))


	 (Let0 (i v b)
	  (let ((bnds1 (cons i bnds)))
	    (freevars b bnds1 (freevars v bnds ax))))


	 (Rcon (fs)
	       (fold (lambda (f ax) (freevars (cdr f) bnds ax)) fs))


	 (Rproj (s t) (freevars t bnds ax))

	 ))




(define-inline (constval c)
  (cases MLvalue c
	 (Const_v (c) (cadr c))
	 (else (error 'constval "invalid constant" c))))


(define-values ( env-binding? env-empty env-add-signature env-add-module env-add-type env-add-spec env-add-value
	         env-find-value env-find-type env-find-module env-find)
  (make-mod-env core-syntax))



(define init-scope (make-parameter st-empty))
(define init-env   (make-parameter env-empty))



(define (enter-typedecl id decl)
  (init-scope (st-enter-type id (init-scope)))
  (init-env   (env-add-type id decl (init-env))))

(define (enter-valtype name ty)
  (let ((id (ident-create name)))
    (init-scope (st-enter-value id (init-scope)))
    (init-env   (env-add-value id ty (init-env)))))

(define (enter-val* name val env)
  (let ((id (or (and (ident? name) name) (ident-create name))))
    (ident-add id val env)))


(define (ident= x y)
  (equal? (ident-name x) (ident-name y)))

(define (core-eval-cbv t env)

  (define (eval t env)
    (cases term t
	   (Const (c) (Const_v c))

	   (Longid (p) 
		   (let ((vp (path-find-val p env)))
		     (or vp (error 'ML-core-eval "unknown id" p))))

	   (Function (_ _)  
		     (let* ((fv (delete-duplicates (freevars t '() '()) ident=))
			    (env1 (filter (lambda (x) (member (car x) fv ident=)) env)))
		       (let ((v (Closure_v t env1)))
			 v)))

	   (Apply (funct arg) 
		  (let ((fv (eval funct env)))
		    (cases MLvalue fv
			   
			   (Closure_v (body env1)
				      (cases term body 
					     (Function (param body)
						       (let ((env2 (enter-val* param (eval arg env) env1)))
							 (eval body env2)))
					     
					     (else
					      (error 'ML-core-eval "function expected in application" t))))

			   (Prim_v (proc)  (proc env arg))
			   
			   (else
			    (error 'ML-core-eval "function expected in application" t fv)))))

	   (Let0 (id arg body)
		 (let ((env1 (enter-val* id (eval arg env) env)))
		   (eval body env1)))

	   (Rcon (fs)
		 (let ((fvs (map (lambda (f) (cons (string->symbol (ident-name (car f))) 
						   (eval (cdr f) env))) fs)))
		   (Record_v fvs)))

	   (Rproj (s t)
		 (let ((rv (eval t env)))
		   (cases MLvalue rv 
			  (Record_v (fv) (cdr (assoc s fv)))
			  (else (error 'ML-core-eval "invalid field in record" s t)))))

	   (else
	    (error 'ML-core-eval "invalid term" t))

	   ))
  (eval t env))


(define (prim-binop-cbv eval-closure name op)
  (Prim_v (lambda (xenv x)
	    (let ((x (eval-closure (Closure_v x xenv))))
	      (Prim_v (lambda (yenv y) 
			(let ((y (eval-closure (Closure_v y yenv))))
			  (op x y))))
	      ))
	  ))


(define (eval-cbv-initialize enter-val)
   	
   	  (define eval core-eval-cbv)
   	
   	  (define (eval-closure name)
	    (lambda (x)
	      (cases MLvalue x
		     (Closure_v (x xenv) (eval x xenv))
		     (else (error name "closure expected" x)))))
   	 
   	  (begin

	    (enter-val "false"  (Const_v `(bool #f) ))
            (enter-val "true"   (Const_v `(bool #t) ))
            (enter-val "empty"  (Tuple_v '()) )
            (enter-val "null"   (Tuple_v '()) )
   	
   	    (for-each
   	     (lambda (name op) 
   	       (enter-val
   	        name
   	        (prim-binop-cbv (eval-closure name) name 
   	         (lambda (x y) 
   	           (let ((xv (constval x))
   	                 (yv (constval y)))
   	             (Const_v `(nat ,(op xv yv))))))))
   	     '("add" "sub" "mul" "div" 
   	       "==" "<>" "<" "<=" ">" ">=")
   	     (list + - * / 
   	           = (compose not =) < <= > >=))
   	
   	    (enter-val
   	     "cond" 
   	     (Prim_v 
   	      (lambda (cenv c) 
   	        (Prim_v 
   	         (lambda (tenv t) 
   	           (Prim_v 
   	            (lambda (fenv f) 
   	              (let ((cv (constval (eval cenv c))))
   	                (or (and cv ((eval-closure 'cond) (Closure_v t tenv)))
   	                    ((eval-closure 'cond) (Closure_v f fenv)))))))))))
   	
   	    (enter-val 
   	     "pair" 
   	     (prim-binop-cbv (eval-closure 'pair)
   	      'pair (lambda (x y) (Tuple_v (cons x y)))))
   	
   	    (enter-val
   	     "fst" 
   	     (Prim_v
   	      (lambda (env x) 
		(cases MLvalue (eval x env)
		       (Tuple_v (p) (if (pair? p) (car p)
				       (error 'fst "empty data element" x)))
		       (else
			(error 'fst "invalid data element" x))))))
   	
   	    (enter-val
   	     "snd" 
   	     (Prim_v
   	      (lambda (env x) 
		(cases MLvalue (eval x env)
		       (Tuple_v (p) (if (pair? p) (cadr p)
					(error 'snd "empty data element" x)))
		       (else
			(error 'snd "invalid data element" x))))))
	    
   	    (enter-val 
   	     "cons" 
   	     (prim-binop-cbv (eval-closure 'cons)
   	      'cons (lambda (x y) 
		      (Tuple_v (cons x y)))))
   	
   	    (enter-val
   	     "head" 
   	     (Prim_v
   	      (lambda (env x) 
		(cases MLvalue (eval x env)
		       (Tuple_v (p) (if (pair? p) (car p)
				       (error 'head "empty data element" x)))
		       (else
			(error 'head "invalid data element" x))))))


   	    (enter-val
   	     "tail" 
   	     (Prim_v
   	      (lambda (env x) 
		(cases MLvalue (eval x env)
		       (Tuple_v (p) 
				(if (pair? p) (cdr p)
				    (error 'tail "empty data element" x)))
		       (else
			(error 'tail "invalid data element" x))))))
	    
	    
   	    ))

(define-values ( modval? Structure_v Mclosure_v path-find-val find-module-val mod-eval-cbv )
  (make-mod-eval core-syntax core-eval-cbv enter-val*))


(define (MLvalue->sxml v)

      (cases MLvalue v
	     (Const_v     (c)       `(Const ,(const->sxml c)))
	     
	     (Prim_v      (proc)    `(Prim))
	     
	     (Tuple_v      (slots)   (begin
                                       (if (null? slots) `(null)
					`(Tuple (left ,(MLvalue->sxml (car slots)))
						(right ,(MLvalue->sxml (cdr slots)))))))
	     
	     (Record_v      (fields)   `(Record . ,(map (lambda (f) `(field (@ (name ,(car f))) 
									    ,(MLvalue->sxml (cdr f)))) 
							fields)))
	     
	     (Closure_v   (body env)
			    `(Closure (body ,(term->sxml body))
				      (env  ,@(eval-env->sxml env))))
	     ))


(define (modval->sxml name v)
  (cases modval v
	 (Structure_v (env) 
		      `(Component (@ (name ,name)) . ,(eval-env->sxml env)))
	 (Mclosure_v  (body env) 
		      `(Modclosure  (@ (name ,name))
				    (body ,(modterm->sxml body))
				    (env ,@(eval-env->sxml env))))))


(define (eval-env-entry->sxml x)
  (let ((id (car x))
	(v  (cdr x)))
    (cond ((MLvalue? v)
	   `(Val (@ (name ,(ident-name id))) ,(MLvalue->sxml v)))
	  ((moddef? v)
	   (moddef->sxml v))
	  ((modval? v)
	   (modval->sxml (ident-name id) v))
	  (else (error 'eval-env-entry->sxml "invalid entry" x)))))
      

(define (eval-env->sxml env) (map eval-env-entry->sxml env))

  

)
