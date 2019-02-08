;;;; javahack.scm


(module javahack (java-run
		  java-stop
		  java-send
		  java-object?
		  java
		  java-ref
		  java-import
		  java-memoize)

  (import scheme chicken)
  (use utils posix srfi-18 srfi-69 matchable extras data-structures files)

(define-for-syntax java:*cache-enabled* #t)

(define-syntax (java-enable-cache x r c)
  (let ((flag (cadr x)))
    (set! java:*cache-enabled* (c flag 'on)) 
    `(,(r 'void))))

(define-syntax (java x r c)
  (let* ((x (cadr x))
	 (x (if (string? x) (string->symbol x) x)))
    (if (and java:*cache-enabled* 
	     (let ((str (symbol->string (strip-syntax x))))
	       (not (char=? #\$ (string-ref str (sub1 (string-length str))))) ) )
	`(,(r 'java-memoize) ',(gensym) (,(r 'lambda) () (,(r 'java-send) ',x)))
	`(,(r 'java-send) ,(list (r 'quasiquote) x)) ) ) )

(define-constant +java-executable+ "java")

(define *scheme-jar-location* (make-pathname (repository-path) "jscheme.jar"))

(define *in* #f)
(define *out* #f)
(define *debug* #f)
(define *pid* #f)
(define *lock* (make-mutex))
(define *callback-table* (make-hash-table eq?))
(define *callback-count* 0)
(define *finalized* '())

(define (java-run #!key (java +java-executable+) (jar *scheme-jar-location*) (debug #f) (options '()) classpath)
  (set! *debug* debug)
  (set!-values 
   (*in* *out* *pid*)
   (let ((cmd (conc java
		    " "
		    (if (string? options) options (string-intersperse options))
		    " -classpath " (if classpath (conc jar ":" classpath) jar)
		    " jsint.Scheme " (make-pathname (repository-path) "javahack-wrap.scm") ) ) )
     (when debug (printf "[java: running ~s]~%" cmd))
     (process cmd) ) ) )

(define (java-stop)
  (cond (*pid*
	 (display "#f\n" *out*)
	 (flush-output *out*)
	 (close-output-port *out*)
	 (close-input-port *in*)
	 (set! *pid* #f) )
	(else 
	 (warning 'java-stop "no java process active") ) ) )

(implicit-exit-handler
 (let ((old (implicit-exit-handler)))
   (lambda ()
     (when *pid* (java-stop))
     (old) ) ) )

(define (java-send expr)
  (unless *pid* (java-run))
  (dynamic-wind
      (cut mutex-lock! *lock*)
      (lambda ()
        (when (pair? *finalized*)
          (set! expr `(begin ,@(map (lambda (id) `(release ,id)) *finalized*) ,expr))
          (set! *finalized* '()) )
	(when *debug* 
	  (printf "[java: sending: ~s ~!" expr) )
	(write expr *out*)
	(newline *out*)
	(flush-output *out*)
	(let loop ()
	  (let ((x (read *in*)))
	    (when *debug*
	      (printf "--> ~s]~%" x) )
	    (match x
	      (('ref id) (id->java-object id))
	      (('val x) x)
	      (('null) (void))
	      (('proc id) (id->java-procedure id))
	      (('call id . args) 
	       (when *debug*
		 (printf "[java: callback (~a) ~!" id) )
	       (let ((x (apply (hash-table-ref *callback-table* id) args)))
		 (when *debug* (printf "--> ~s]~%" x))
		 (write x *out*)
		 (newline *out*) 
		 (flush-output *out*)
		 (loop) ) )
	      (('err str) 
	       (signal 
		(make-composite-condition
		 (make-property-condition 'exn 'message str 'location 'java-send)
		 (make-property-condition 'java 'expression expr) ) ) )
	      (_ (error 'java-send "invalid result returned by wrapper" x)) ) ) ) )
      (cut mutex-unlock! *lock*) ) )

(define-record java-object id)

(define-record-printer (java-object x p)
  (fprintf p "#<java-object ~a>" (java-object-id x)) )

(define (java-object-finalizer x)
  (when *debug*
    (fprintf (current-error-port) "[java: finalizing ~s]~%" x) )
  (set! *finalized* (cons (java-object-id x) *finalized*)) )

(define (id->java-object id)
  (let ((o (make-java-object id)))
    (set-finalizer! o java-object-finalizer) ) )

(define (java-argument x)
  (cond ((java-object? x) `(.get *id-table* ',(java-object-id x)))
	((procedure? x) 
	 (let ((id *callback-count*))
	   (set! *callback-count* (fx+ id 1))
	   (hash-table-set! *callback-table* id x)
	   `(callback ,id) ) )
	((eq? (void) x) '(void))
	(else x) ) )

(define ((id->java-procedure id) . args)
  (java-send `((.get *id-table* ',id) ,@(map java-argument args))) )

(define (name->symbol x)
  (cond ((symbol? x) x)
	((string? x) (string->symbol x))
	(else (error 'java-ref "invalid name" x))))

(define java-ref
  (getter-with-setter
   (lambda (s) (java-send (name->symbol s)))
   (lambda (s x)
     (java-send `(set! ,(name->symbol s) ,(java-argument x)) ) ) ) )

(define (java-import . xs)
  (java-send `(begin ,@(map (lambda (x) `(import ,(->string x))) xs))) )

(define (java-memoize sym thunk)
  (if (##sys#symbol-has-toplevel-binding? sym)
      (##sys#slot sym 0)
      (let ((x (thunk)))
	(##sys#setslot sym 0 x)
	x) ) )

)
