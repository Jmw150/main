;; -*- mode: Scheme; -*-
;;
;; This file is part of SRFI-99 for CHICKEN
;; Copyright (c) 2011 by Thomas Chust.  All rights reserved.
;;
;; Permission is hereby granted, free of charge, to any person
;; obtaining a copy of this software and associated documentation
;; files (the Software), to deal in the Software without restriction,
;; including without limitation the rights to use, copy, modify,
;; merge, publish, distribute, sublicense, and/or sell copies of the
;; Software, and to permit persons to whom the Software is furnished
;; to do so, subject to the following conditions:
;; 
;; The above copyright notice and this permission notice shall be
;; included in all copies or substantial portions of the Software.
;; 
;; THE SOFTWARE IS PROVIDED ASIS, WITHOUT WARRANTY OF ANY KIND,
;; EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
;; MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
;; NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
;; BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
;; ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
;; CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
;; SOFTWARE.

(require-library
 srfi-1 srfi-69
 data-structures lolevel)

(module srfi-99-primitives
  (%make-rtd %get-rtd rtd? record?
   %rtd-name %rtd-uid %rtd-child-uids %rtd-fields %rtd-parent %rtd-properties
   %rtd-child-uid?
   %rtd-count-fields %rtd-count-all-fields
   %rtd-field-ref %rtd-field-find)
  (import
   scheme chicken
   srfi-69)

(define-values (%make-rtd %get-rtd)
  (letrec ((%link!
	    (lambda (rtd)
	      (do ((rtd rtd (%rtd-parent rtd)) (uid (%rtd-uid rtd))) ((not rtd))
		(cond
		 ((%rtd-child-uids rtd) => (cut hash-table-set! <> uid #t))))))
	   (%unlink!
	    (lambda (rtd)
	      (do ((rtd rtd (%rtd-parent rtd)) (uid (%rtd-uid rtd))) ((not rtd))
		(cond
		 ((%rtd-child-uids rtd) => (cut hash-table-delete! <> uid))))))
	   (%make-rtd
	    (lambda (name uid fields parent sealed? opaque?)
	      (let ((rtd (##sys#make-structure
			  'rtd
			  name uid
			  (and (not sealed?)
			       (make-hash-table #:test eq? #:hash eq?-hash))
			  fields parent
			  (make-hash-table #:test eq? #:hash eq?-hash))))
		(set-finalizer! rtd %unlink!)
		(%link! rtd)
		(unless opaque? (put! uid 'rtd rtd))
		rtd)))
	   (%get-rtd
	    (lambda (uid)
	      (get uid 'rtd #f))))
    (values %make-rtd %get-rtd)))
  
(define (rtd? v) (##sys#structure? v 'rtd))

(define (record? v)
  (and (not (##sys#immediate? v))
       (##sys#generic-structure? v)))

(define (%rtd-name rtd) (##sys#slot rtd 1))
(define (%rtd-uid rtd) (##sys#slot rtd 2))
(define (%rtd-child-uids rtd) (##sys#slot rtd 3))
(define (%rtd-fields rtd) (##sys#slot rtd 4))
(define (%rtd-parent rtd) (##sys#slot rtd 5))
(define (%rtd-properties rtd) (##sys#slot rtd 6))

(define (%rtd-child-uid? rtd uid)
  (cond
   ((%rtd-child-uids rtd) => (cut hash-table-ref/default <> uid #f))
   (else (eq? uid (%rtd-uid rtd)))))

(define (%rtd-count-fields rtd)
  (vector-length (%rtd-fields rtd)))

(define (%rtd-count-all-fields rtd)
  (let loop ((rtd rtd) (n 0))
    (if rtd
	(loop (%rtd-parent rtd) (+ n (%rtd-count-fields rtd)))
	n)))

(define (%rtd-field-ref rtd i)
  (let ((base (- (%rtd-count-all-fields rtd) (%rtd-count-fields rtd))))
    (if (>= i base)
	(vector-ref (%rtd-fields rtd) (- i base))
	(%rtd-field-ref (%rtd-parent rtd) i))))

(define (%rtd-field-find rtd name)
  (let ((n (%rtd-count-all-fields rtd)))
    (let loop ((i (fx- n 1)))
      (if (negative? i)
	  (error "no such field in record" name (%rtd-name rtd))
	  (let ((field (%rtd-field-ref rtd i)))
	    (if (eq? (cadr field) name)
		(apply values i field)
		(loop (fx- i 1))))))))

)

(module srfi-99-records-procedural
  (make-rtd rtd?
   rtd-constructor rtd-predicate rtd-accessor rtd-mutator)
  (import
   scheme chicken
   srfi-1 srfi-69 srfi-99-primitives data-structures)

(define (make-rtd name fields . args)
  (let-values (((fields)
		(list->vector
		 (map
		  (lambda (field)
		    (cond
		     ((symbol? field)
		      (list 'immutable field))
		     ((and (pair? field) (symbol? (car field))
			   (null? (cdr field)))
		      (cons 'mutable field))
		     ((and (pair? field) (memq (car field) '(mutable immutable))
			   (pair? (cdr field)) (symbol? (cadr field))
			   (null? (cddr field)))
		      field)
		     (else
		      (error 'make-rtd "bad field specification" field))))
		  (vector->list fields))))
	       ((parent uid sealed? opaque? properties)
		(let next ((args args)
			   (parent #f) (uid #f) (sealed? #f) (opaque? #f)
			   (properties '()))
		  (if (null? args)
		      (values parent uid sealed? opaque? properties)
		      (let-values (((arg0 args) (car+cdr args)))
			(case arg0
			  ((#:parent)
			   (next (cdr args)
				 (car args) uid sealed? opaque? properties))
			  ((#:uid)
			   (next (cdr args)
				 parent (car args) sealed? opaque? properties))
			  ((#:sealed)
			   (next (cdr args)
				 parent uid (car args) opaque? properties))
			  ((#:opaque)
			   (next (cdr args)
				 parent uid sealed? (car args) properties))
			  ((#:property)
			   (next (cddr args)
				 parent uid sealed? opaque?
				 (cons (cons (car args) (cadr args))
				       properties)))
			  (else
			   (next args
				 arg0 uid sealed? opaque? properties))))))))
    (##sys#check-symbol name 'make-rtd)
    (##sys#check-vector fields 'make-rtd)
    (when parent
      (##sys#check-structure parent 'rtd)
      (ensure %rtd-child-uids parent
	      'make-rtd "expected unsealed parent" parent))
    (when uid
      (##sys#check-symbol uid 'make-rtd))
    (let ((rtd (%make-rtd name (or uid (gensym name)) fields
			  parent sealed? opaque?)))
      (for-each
       (lambda (rtp+accessor)
	 (let-values (((rtp accessor) (car+cdr rtp+accessor)))
	   (hash-table-set!
	    (%rtd-properties rtd) rtp
	    (cond
	     ((procedure? accessor)
	      accessor)
	     ((symbol? accessor)
	      (rtd-accessor rtd accessor))
	     (else
	      (constantly accessor))))))
       properties)
      rtd)))

(define (rtd-constructor rtd #!optional fields)
  (##sys#check-structure rtd 'rtd 'rtd-constructor)
  (let* ((n (%rtd-count-all-fields rtd))
	 (is (if fields
		 (map
		  (lambda (name)
		    (let-values (((i access field) (%rtd-field-find rtd name)))
		      (fx+ i 1)))
		  (vector->list fields))
		 (iota n 1))))
    (lambda vs
      (unless (= (length vs) (length is))
	(##sys#signal-hook
	 #:arity-error
	 (string-append
	  "bad argument count - received " (number->string (length vs))
	  " but expected " (number->string (length is)))))
      (let ((r (##sys#allocate-vector (fx+ n 1) #f (void) #f)))
	(##sys#setslot r 0 (%rtd-uid rtd))
	(##core#inline "C_vector_to_structure" r)
	(for-each (cut ##sys#setslot r <> <>) is vs)
	r))))

(define (%rtd-predicate rtd)
  (lambda (v)
    (and (record? v)
	 (%rtd-child-uid? rtd (##sys#slot v 0)))))

(define (rtd-predicate rtd)
  (##sys#check-structure rtd 'rtd 'rtd-predicate)
  (%rtd-predicate rtd))

(define (rtd-accessor rtd name)
  (##sys#check-structure rtd 'rtd 'rtd-accessor)
  (let-values (((instance?) (%rtd-predicate rtd))
	       ((i access field) (%rtd-field-find rtd name)))
    (set! i (fx+ i 1))
    ((if (eq? access 'mutable)
	 (cut getter-with-setter <>
	      (lambda (r v)
		(ensure instance? r)
		(##sys#setslot r i v)))
	 identity)
     (lambda (r)
       (ensure instance? r)
       (##sys#slot r i)))))

(define (rtd-mutator rtd name)
  (##sys#check-structure rtd 'rtd 'rtd-accessor)
  (##sys#check-structure rtd 'rtd 'rtd-accessor)
  (let-values (((instance?) (%rtd-predicate rtd))
	       ((i access field) (%rtd-field-find rtd name)))
    (set! i (fx+ i 1))
    (and (eq? access 'mutable)
	 (lambda (r v)
	   (ensure instance? r)
	   (##sys#setslot r i v)))))

)

(module srfi-99-records-inspection
  (record? record-rtd
   rtd-name rtd-uid rtd-sealed? rtd-opaque? rtd-parent
   rtd-field-names rtd-all-field-names rtd-field-mutable?
   make-rtp rtd-properties rtd-all-properties)
  (import
   scheme chicken
   srfi-1 srfi-69 srfi-99-primitives srfi-99-records-procedural data-structures)

(define (record-rtd v)
  (and (record? v)
       (%get-rtd (##sys#slot v 0))))

(define (rtd-name rtd)
  (##sys#check-structure rtd 'rtd 'rtd-name)
  (%rtd-name rtd))

(define (rtd-uid rtd)
  (##sys#check-structure rtd 'rtd 'rtd-uid)
  (%rtd-uid rtd))

(define (rtd-sealed? rtd)
  (##sys#check-structure rtd 'rtd 'rtd-sealed?)
  (not (%rtd-child-uids rtd)))

(define (rtd-opaque? rtd)
  (##sys#check-structure rtd 'rtd 'rtd-opaque?)
  (not (eq? (%get-rtd (%rtd-uid rtd)) rtd)))

(define (rtd-parent rtd)
  (##sys#check-structure rtd 'rtd 'rtd-parent)
  (%rtd-parent rtd))

(define (rtd-field-names rtd)
  (##sys#check-structure rtd 'rtd 'rtd-field-names)
  (let* ((n (%rtd-count-fields rtd))
	 (n-all (%rtd-count-all-fields rtd))
	 (base (- n-all n)))
    (do ((names (make-vector n)) (i base (fx+ i 1))) ((>= i n-all) names)
      (vector-set! names (- i base) (cadr (%rtd-field-ref rtd i))))))

(define (rtd-all-field-names rtd)
  (##sys#check-structure rtd 'rtd 'rtd-all-field-names)
  (let ((n (%rtd-count-fields rtd))
	(n-all (%rtd-count-all-fields rtd)))
    (do ((names (make-vector n-all)) (i 0 (fx+ i 1))) ((>= i n-all) names)
      (vector-set! names i (cadr (%rtd-field-ref rtd i))))))

(define (rtd-field-mutable? rtd name)
  (##sys#check-structure rtd 'rtd 'rtd-field-mutable?)
  (let-values (((i access field) (%rtd-field-find rtd name)))
    (eq? access 'mutable)))

(define (%rtp-accessor rtd rtp default)
  (let next ((rtd (and (##sys#structure? rtd 'rtd) rtd)))
    (if rtd
	(hash-table-ref (%rtd-properties rtd) rtp
			(cut next (%rtd-parent rtd)))
	default)))

(define (make-rtp #!optional default)
  (unless (procedure? default)
    (set! default (constantly default)))
  (letrec ((rtp-get
            (lambda (v rtd)
             ((%rtp-accessor rtd rtp default) v)))
           (rtp-set!
            (lambda (v pv rtd)
             ((setter (%rtp-accessor rtd rtp default)) v pv)))
	   (rtp
	    (getter-with-setter
	     (case-lambda
	       ((v) (rtp-get v (record-rtd v)))
	       ((v rtd) (rtp-get v rtd)))
	     (case-lambda
	       ((v pv) (rtp-set! v pv (record-rtd v)))
	       ((v rtd pv) (rtp-set! v pv rtd))))))
    rtp))

(define (rtd-properties rtd)
  (if (##sys#structure? rtd 'rtd)
      (hash-table-keys (%rtd-properties rtd))
      '()))

(define (rtd-all-properties rtd)
  (let ((rtps (make-hash-table #:test eq? #:hash eq?-hash)))
    (let next ((rtd (and (##sys#structure? rtd 'rtd) rtd)))
      (if rtd
	  (begin
	    (hash-table-walk
	     (%rtd-properties rtd)
	     (lambda (rtp accessor) (hash-table-set! rtps rtp #t)))
	    (next (%rtd-parent rtd)))
	  (hash-table-keys rtps)))))

)

(module srfi-99-records-syntactic
  (define-record-type
   define-record-constructor
   %define-record-constructor/default
   define-record-predicate
   %define-record-predicate/default
   define-record-field
   %define-record-field/mutable-default %define-record-field/immutable-default
   define-record-property
   define-record-printer)
  (import
   scheme (except chicken define-record-type define-record-printer)
   srfi-99-records-procedural)

(define-syntax %define-record-constructor/default
  (ir-macro-transformer
   (lambda (stx inject id=)
     (let* ((rtd (cadr stx))
	    (name (symbol-append 'make- (strip-syntax rtd))))
       `(define-record-constructor ,rtd ,(inject name))))))

(define-syntax define-record-constructor
  (syntax-rules ()
    ((define-record-constructor rtd #f)
     (begin))
    ((define-record-constructor rtd #t)
     (%define-record-constructor/default rtd))
    ((define-record-constructor rtd (name field ...))
     (define name
       (rtd-constructor rtd (vector 'field ...))))
    ((define-record-constructor rtd name)
     (define name
       (rtd-constructor rtd)))))

(define-syntax %define-record-predicate/default
  (ir-macro-transformer
   (lambda (stx inject id=)
     (let* ((rtd (cadr stx))
	    (name (symbol-append (strip-syntax rtd) '?)))
       `(define-record-predicate ,rtd ,(inject name))))))

(define-syntax define-record-predicate
  (syntax-rules ()
    ((define-record-predicate rtd #f)
     (begin))
    ((define-record-predicate rtd #t)
     (%define-record-predicate/default rtd))
    ((define-record-predicate rtd name)
     (define name
       (rtd-predicate rtd)))))

(define-syntax %define-record-field/mutable-default
  (ir-macro-transformer
   (lambda (stx inject id=)
     (let* ((rtd (cadr stx))
	    (name (caddr stx))
	    (accessor (symbol-append (strip-syntax rtd) '- (strip-syntax name)))
	    (mutator (symbol-append accessor '-set!)))
       `(define-record-field ,rtd (,name ,(inject accessor) ,(inject mutator)))))))

(define-syntax %define-record-field/immutable-default
  (ir-macro-transformer
   (lambda (stx inject id=)
     (let* ((rtd (cadr stx))
	    (name (caddr stx))
	    (accessor (symbol-append (strip-syntax rtd) '- (strip-syntax name))))
       `(define-record-field ,rtd (,name ,(inject accessor)))))))

(define-syntax define-record-field
  (syntax-rules ()
    ((define-record-field rtd (name accessor mutator))
     (begin
       (define accessor
	 (rtd-accessor rtd 'name))
       (define mutator
	 (rtd-mutator rtd 'name))))
    ((define-record-field rtd (name accessor))
     (define accessor
       (rtd-accessor rtd 'name)))
    ((define-record-field rtd (name))
     (%define-record-field/mutable-default rtd name))
    ((define-record-field rtd name)
     (%define-record-field/immutable-default rtd name))))

(define-syntax define-record-type
  (syntax-rules ()
    ((define-record-type (rtd option ...)
       constructor-spec
       predicate-spec
       field-spec ...)
     (begin
       (define rtd
	 (make-rtd
	  'rtd
	  (let-syntax ((%record-field-spec
			(syntax-rules ()
			  ((record-field-spec (name accessor mutator))
			   '(mutable name))
			  ((record-field-spec (name accessor))
			   '(immutable name))
			  ((record-field-spec (name))
			   '(mutable name))
			  ((record-field-spec name)
			   '(immutable name)))))
	    (vector (%record-field-spec field-spec) ...))
	  option ...))
       (define-record-constructor rtd constructor-spec)
       (define-record-predicate rtd predicate-spec)
       (define-record-field rtd field-spec) ...))
    ((define-record-type rtd
       constructor-spec
       predicate-spec
       field-spec ...)
     (define-record-type (rtd #f)
       constructor-spec
       predicate-spec
       field-spec ...))))

(define-syntax define-record-property
  (syntax-rules ()
    ((define-record-property rtp option ...)
     (define rtp
       (make-rtp option ...)))))

(define-syntax define-record-printer
  (syntax-rules ()
    ((define-record-printer (rtd . args) . body)
     (define-record-printer rtd (lambda args . body)))
    ((define-record-printer rtd expr)
     (##sys#register-record-printer (rtd-uid rtd) expr))))

)

(module srfi-99-records
  ()
  (import
   scheme chicken)
  (reexport
   srfi-99-records-procedural srfi-99-records-inspection
   srfi-99-records-syntactic)

)

(module srfi-99-variants
  (define-variant-type
   define-variant-constructor
   variant-case)
  (import
   scheme (except chicken define-record-type)
   srfi-99-records lolevel)

(define-syntax define-variant-type
  (syntax-rules ()
    ((define-variant-type (rtd option ...) predicate
       (variant field ...)
       ...)
     (begin
       (define-record-type (rtd option ...)
	 #f predicate)
       (define-variant-constructor rtd (variant field ...))
       ...))
    ((define-variant-type rtd predicate
       (variant field ...)
       ...)
     (define-variant-type (rtd #f) predicate
       (variant field ...)
       ...))))

(define-syntax define-variant-constructor
  (syntax-rules ()
    ((define-variant-constructor rtd (variant field ...))
     (define variant
       (let* ((variant-rtd (make-rtd
			    'variant
			    (vector '(immutable field) ...) rtd
			    #:uid (symbol-append (rtd-uid rtd) '- 'variant)
			    #:opaque (rtd-opaque? rtd)
			    #:sealed #t))
	      (make-variant (rtd-constructor variant-rtd)))
	 (extend-procedure
	  (if (zero? (vector-length (rtd-all-field-names variant-rtd)))
	      (constantly (make-variant))
	      make-variant)
	  variant-rtd))))))

(define-syntax variant-case
  (syntax-rules (else)
    ((variant-case rtd expr
       ((variant field ...)
	variant-body ...)
       ...
       (else
	else-body ...))
     (let ((v expr))
       (ensure (rtd-predicate rtd) v)
       (select (##sys#slot v 0)
	 (((rtd-uid (procedure-data variant)))
	  (let ((field ((rtd-accessor (procedure-data variant) 'field) v))
		...)
	    variant-body ...))
	 ...
	 (else
	  else-body ...))))
    ((variant-case rtd expr
       ((variant field ...)
	variant-body ...)
       ...)
     (variant-case rtd expr
       ((variant field ...)
	variant-body ...)
       ...
       (else
	(error "no matching variant"))))))

)

(module srfi-99
  ()
  (import
   scheme chicken)
  (reexport
   srfi-99-records srfi-99-variants)

)
