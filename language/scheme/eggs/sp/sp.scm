;;;; sp.scm


(module sp

    (parse-syntax
     evaluate-runtime-initialization
     process-files
     +default-rule-cache-size+)

(import scheme chicken)
(use big-chicken honu matchable miscmacros sp-runtime)


(define +default-rule-cache-size+ 10)

(define (parse-syntax input #!key (source "<input>") trace default-action debug cache-size)
  (let ((tokens '())
	(rules '())
	(*vars* '())
	(*here* #f)
	(code '())
	(refd '()))
    (define (top in)
      (match in
	(() (done))
	(((? symbol? id) ':= (? string? rx) . more)
	 (when (assq id tokens)
	   (warning (conc "redefinition of token `" id "'")))
	 (push! (cons id (string-append "^" rx)) tokens)
	 (top more))
	(((? symbol? id) '-> . more)
	 (top (def id more)))
	(((? string? fn) . more)
	 (push! `(include ,fn) code)
	 (top more))
	(((? pair? exp) . more)
	 (push! exp code)
	 (top more))
	(_ (error "unexpected token" source in))))
    (define (sequence in)
      (let loop ((in in) (seq '()))
	(match in
	  (() (values (reverse seq) in))
	  (('|:| exp . more)
	   (loop more (cons `(<action> ,exp) seq)))
	  (('|\|| . more)
	   (loop more (cons '<alt> seq)))
	  ((('#%parens stuff ...) . more)
	   (loop more (cons (alternatives (sequence stuff)) seq)))
	  ((('#%brackets stuff ...) . more)
	   (loop more (cons `(<opt> ,(alternatives (sequence stuff))) seq)))
	  ((('#%braces stuff ...) '+ . more)
	   (let ((s (alternatives (sequence stuff))))
	     (loop more (cons `(<many1> ,s) seq))))
	  ((('#%braces stuff ...) . more)
	   (let ((s (alternatives (sequence stuff))))
	     (loop more (cons `(<many> ,s) seq))))
	  (((? (cut eq? '... <>)) . more)
	   (loop more (cons `(<many> ,(car seq)) (cdr seq))))
	  (('_ (? string? msg) . more)
	   (loop more (cons `(<fail> ,msg) seq)))
	  (('_ . more)
	   (loop more (cons '(<fail> #f) seq)))
	  (('! . more)
	   (loop more (cons '<mark> seq)))
	  (('~ . more)
	   (loop more (cons '<abort> seq)))
	  (((? string? s) ('#%parens '~ strs ...) . more)
	   (loop more (cons `(<lit> ,s ,strs) seq)))
	  (((? string? s) . more)
	   (loop more (cons `(<lit> ,s) seq)))
	  (((? char? c) . more)
	   (loop more (cons `(<lit> ,(string c)) seq)))
	  (((? symbol? var) '= . more)
	   (loop more (cons `(<bind> ,var) seq)))
	  (((? symbol?) (or ':= '->) . more)
	   (values (reverse seq) in))
	  (((? symbol? tid) . more)
	   (push! (cons tid *here*) refd)
	   (loop more (cons tid seq)))
	  (((? pair? t) . more)
	   (loop more (cons `(<test> ,t) seq)))
	  (_ (error "unexpected token" source (fragment in))))))
    (define (fragment in)
      (if (> (length in) 10)
	  (append (take in 10) '(...))
	  in))
    (define (def id in)
      (fluid-let ((*vars* '())
		  (*here* id))
	(let-values (((seq in) (sequence in)))
	  (let ((seq (alternatives seq #t))
		(vars (delete-duplicates *vars* eq?)))
	    (when (lr? seq id)
	      (error (conc "left-recursion detected in rule `" id "'")))
	    (defrule id vars seq)
	    in))))
    (define (defrule id vars rule)
      (when debug (pp (list id vars rule) (current-error-port)))
      (when (assq id rules)
	(warning (conc "redefinition of rule `" id "'")))
      (push! (list id vars rule) rules))
    (define (lr? rule id)
      (let rec ((rule rule))
	(match rule
	  (('<seq> x1 . _) (rec x1))
	  (('<action> _ x) (rec x))
	  (('<many> x) (rec x))
	  (('<many1> x) (rec x))
	  (('<bind> _ x) (rec x))
	  (('<or> xs ...) (any rec xs))
	  (('<opt> x) (rec x))
	  ((? symbol? x1) (eq? x1 id))
	  (_ #f))))
    (define (bind lst)
      (let loop ((lst lst))
	(match lst
	  (() '())
	  ((('<bind> var))
	   (push! var *vars*)
	   `((<bind> ,var <success>)))
	  ((('<bind> var) exp . more)
	   (push! var *vars*)
	   (cons `(<bind> ,var ,exp) (loop more)))
	  ((x . more) (cons x (loop more))))))
    (define (arm lst act)		; assumes lst is reversed
      (match lst
	((('<action> exp) . lst)
	 `((<action> ,exp (<seq> ,@(bind (reverse lst))))))
	(_ 
	 ;; if arm has only a single match that is not a token, we don't generate def. action
	 (cond ((and (= 1 (length lst))
		     (or (not (symbol? (car lst)))
			 (not (assq (car lst) tokens))))
		(bind lst))
	       ((and act default-action)
		 `((<action> (default-action) (<seq> ,@(bind (reverse lst))))))
	       (else (bind (reverse lst)))))))
    (define (alternatives rule #!optional def)
      (let loop ((rule rule) (as '()) (part '()))
	(match rule
	  (() 
	   (let ((p (if (null? part) '<success> `(<seq> ,@(arm part def)))))
	     (if (null? as)
		 p
		 `(<or> ,@(reverse (cons p as))))))
	  (('<alt> . more)
	   (loop more (cons `(<seq> ,@(arm part def)) as) '()))
	  ((x . more)
	   (loop more as (cons x part))))))
    (define (done)
      (for-each
       (match-lambda
	 ((id . loc)
	  (unless (or (assq id rules) (assq id tokens))
	    (warning (conc loc ": reference to undefined identifier `" id "'")))))
       refd)
      (unless (assq 'start rules)
	(warning "missing `start' rule"))
      `(begin
	 ,@(reverse code)
	 ,@(map (match-lambda
		  (('whitespace . rx)
		   `(whitespace (irregex ,rx 's 'fast)))
		  ((id . rx)
		   `(define ,(symbol-append id '$) (irregex ,rx 's 'fast))))
		(reverse tokens))
	 ,@(map (match-lambda
		  ((id vars rule)
		   (translate id vars rule rules trace default-action)))
		(reverse rules))
	 ,(if (or (not cache-size) (positive? cache-size))
	      `(set! start&
		 (let ((old start&))
		   (lambda (state)
		     (fluid-let ,(map (lambda (rule)
					(list (symbol-append (car rule) '&&)
					      `(make-vector
						,(or cache-size +default-rule-cache-size+) 
						#f)))
				      rules)
		       ,(if debug
			    `(let ((r (old state)))
			       ,@(map (lambda (rule) 
					`(pp (cons ',(car rule)
						   (vector->list ,(symbol-append (car rule) '&&)))))
				      rules)
			       r)
			    '(old state))))))
	      '(void))))
    (top input)))

(define (translate name vars rule rules trace defaction)
  (let ((%input (gensym 'input))
	(%abort (gensym 'abort))
	(name& (symbol-append name '&))
	(name&& (symbol-append name '&&)))
    `(begin
       (: ,name&& (vector-of (or boolean (pair fixnum (or boolean (struct result))))))
       (define ,name&&)
       (: ,name& ((struct state) -> (or boolean (struct result))))
       (define (,name& ,%input)
	 (call/cc
	  (lambda (,%abort)
	    (,(if trace 'with-cached-result/trace 'with-cached-result)
	     ,name&& ',name ,%input ',trace
	     (lambda ()
	       (assume 
		((,%input (struct state)))
		(let ,(map (cut list <> ''()) vars)
		  ,(let walk ((rule rule) (in %input))
		     (match rule
		       (('<fail> msg)
			`(fail ,in ,(or msg (sprintf "syntax error (~a)" ',name))))
		       ((or '<success> '(<seq>))
			`(success ,in))
		       ('<mark>
			`(make-result ,in ,in))
		       ('<abort> `(,%abort #f))
		       (('<or> alts ...)
			`(or ,@(map (cut walk <> in) alts)))
		       (('<action> exp x)
			(let ((%p1 (gensym 'p)))
			  `(and-let* ((,%p1 ,(walk x in)))
			     (assume ((,%p1 (struct result)))
				     ,(cond ((string? exp)
					     `(constant-result-action ,exp ,%p1))
					    ((equal? exp "*")
					     '(default-action))
					    ((integer? exp)
					     `(result-value-ref-action ,(sub1 exp) ,%p1))
					    (else `(apply-action ',name (lambda () ,exp) ,%p1)))))))
		       (('<test> exp) 
			`(apply-test ,in (lambda () ,exp)))
		       (('<bind> var x)
			(let ((%p1 (gensym 'p)))
			  `(and-let* ((,%p1 ,(walk x in)))
			     (assume ((,%p1 (struct result)))
				     (set! ,var (result-value ,%p1))
				     ,%p1))))
		       (('<seq> x)
			(walk x in))
		       (('<seq> x1 xs ...)
			(let ((%p1 (gensym 'p))
			      (%in1 (gensym 'in1)))
			  `(and-let* ((,%p1 ,(walk x1 in)))
			     (assume ((,%p1 (struct result)))
				     (let ((,%in1 (result-state ,%p1)))
				       (combine ,%p1 ,(walk `(<seq> ,@xs) %in1)))))))
		       (('<lit> str notlst)
			`(ltoken ,str ',notlst ,in))
		       (('<lit> str)
			`(ltoken ,str '() ,in))
		       (('<opt> x)
			(let ((%p1 (gensym 'p))
			      (%in1 (gensym 'in)))
			  `(let* ((,%in1 ,in)
				  (,%p1 ,(walk x %in1)))
			     (if ,%p1
				 ,(if defaction
				      `(make-result
					(list (result-value ,%p1))
					(result-state ,%p1))
				      %p1)
				 (make-result
				  ',(if defaction '(#f) '())
				  ,%in1)))))
		       (('<many> x)
			(let ((%loop (gensym 'loop))
			      (%i1 (gensym 'in))
			      (%p1 (gensym 'p))
			      (%rs (gensym 'rs)))
			  `(let ,%loop ((,%i1 ,in) (,%rs '()))
				(let ((,%p1 ,(walk x %i1)))
				  (if ,%p1
				      (,%loop (result-state ,%p1) (cons (result-value ,%p1) ,%rs))
				      (make-result
				       ,(if defaction
					    `(list (concatenate (reverse ,%rs)))
					    `(concatenate (reverse ,%rs)))
				       ,%i1))))))
		       (('<many1> x)
			(let ((%loop (gensym 'loop))
			      (%i1 (gensym 'in))
			      (%p1 (gensym 'p))
			      (%rs (gensym 'rs))
			      (%p0 (gensym 'p)))
			  `(and-let* ((,%p0 ,(walk x in)))
			     (let ,%loop ((,%i1 (result-state ,%p0)) 
					  (,%rs (list (result-value ,%p0))))
				  (let ((,%p1 ,(walk x %i1)))
				    (if ,%p1
					(,%loop (result-state ,%p1) (cons (result-value ,%p1) ,%rs))
					(make-result
					 ,(if defaction
					      `(list (concatenate (reverse ,%rs)))
					      `(concatenate (reverse ,%rs)))
					 ,%i1)))))))
		       (t (if (assq t rules)
			      `(,(symbol-append t '&) ,in)
			      `(mtoken ,(symbol-append t '$) ,in)))))))))))))))

(define (read-grammar fn)
  (read-file fn read-honu))

(define +runtime-initialization+
  '(begin
     (require-extension irregex srfi-1 srfi-13 extras utils)
     (import sp-runtime)))

(define (evaluate-runtime-initialization)
  (eval '(require 'chicken-syntax))	; for "and-let*"
  (eval +runtime-initialization+))

(define (process-files grs getsrc
		       #!key compile (processor void) (output #f) repeat trace (counters 'both)
		       (skip-whitespace #t) line-input default-action debug cache-size)
  (let ((outp (if output
		  (open-output-file output)
		  (current-output-port))))
    (when compile
      (fprintf outp ";;; GENERATED BY \"sp\"~%~%")
      (pp +runtime-initialization+ outp))
    (for-each
     (lambda (gr)
       (let ((prg (parse-syntax
		   (read-grammar gr) source: gr trace: trace debug: debug
		   cache-size: cache-size
		   default-action: default-action)))
	 (cond (compile
		(fprintf outp "~%;; ~a~%" gr)
		(pp prg outp)
		(newline outp))
	       (else
		(eval prg)))))
     grs)
    (cond (compile (fprintf outp "~%;;; END OF FILE~%"))
	  (else (process-input
		 (eval 'start&)
		 getsrc
		 counters: counters
		 processor: processor
		 repeat: repeat trace: trace 
		 skipws: skip-whitespace line-input: line-input)))))

)
