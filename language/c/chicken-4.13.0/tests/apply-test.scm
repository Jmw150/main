(require-extension srfi-1)

;; Non-manyarg CHICKENs are no longer made
(assert (feature? 'manyargs))

(define (foo . args)
  (when (pair? args)
    (assert (= (length args) (last args)))))

(printf "testing 'apply' with 0..~A...\n" 2000)
(do ((i 0 (add1 i)))
    ((>= i 2000))
  (apply foo (iota i 1)))

(print "testing 'apply' with 10000...")
(apply foo (list-tabulate 10000 add1))

(let-syntax
    ((invoke-directly
      (ir-macro-transformer
       (lambda (e r c)
	 (let ((proc (cadr e))
	       (count (caddr e))
	       (end (cadddr e))
	       (message (car (cddddr e))))
	   `(begin
	      (printf "invoking directly with ~A..~A (~A)...\n"
		,(- end count) ,end ,message)
	      ,@(list-tabulate
		 count
		 (lambda (i)
		   `(,proc ,@(list-tabulate (- end i) add1))))))))))
  (invoke-directly foo 50 50 "Lower edge case")
  (invoke-directly foo 50 2000 "Higher edge case"))
