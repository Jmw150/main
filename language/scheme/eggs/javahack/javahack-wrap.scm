;;;; javahack-wrap.scm

(import "java.lang.*")
(import "java.util.*")

(define *id-table* (Hashtable.))
(define *id-count* 1)

(define (release id)
  (.remove *id-table* id)
  #t)

(define (callback id)
  (lambda args 
    (write `(call ,id ,@args))
    (newline)
    (read) ) )

(define (void) #null)

(let loop ()
  (tryCatch 
   (let ((x (read)))
     (if (not x)
	 (System.exit 0)
	 (begin
	   (write
	    (let ((x (eval x)))
	      (cond ((or (pair? x) (string? x) (number? x) (boolean? x) (vector? x) (char? x)) 
		     `(val ,x) )
		    ((eq? #null x) '(null))
		    ((procedure? x)
		     (let ((id *id-count*))
		       (set! *id-count* (+ *id-count* 1))
		       (.put *id-table* id x)
		       `(proc ,id) ) )
		    (else
		     (let ((id *id-count*))
		       (set! *id-count* (+ *id-count* 1))
		       (.put *id-table* id x)
		       `(ref ,id) ) ) ) ) )
	   (newline) ) ) )
   (lambda (e)
     (display "(err #<<EOF\n")
     (display e)
     (display "\nEOF\n)\n") ) )
  (loop) )
