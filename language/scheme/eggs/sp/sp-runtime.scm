;;;; sp-runtime.scm


(module sp-runtime

    (make-result
     result-value 
     result-state
     result?
     make-state
     state-buffer
     state-position
     state-line
     state-column
     state-source
     state?
     at-end?
     combine
     apply-action
     apply-test
     skip-whitespace
     mtoken
     ltoken
     success
     fail
     @
     $
     return-to
     current-line
     current-column
     current-position
     current-source
     current-state
     whitespace
     line-filter
     default-action
     result-value-ref-action
     constant-result-action
     with-cached-result
     with-cached-result/trace
     with-counters
     process-input)

  (import scheme chicken)
  (use srfi-1 srfi-13 extras utils irregex typed-records)
  (import miscmacros matchable)

  (define-record state
    (buffer : string)
    (position : fixnum)
    (line : fixnum)
    (column : fixnum)
    (source : string))

  (define-record-printer (state s port)
    (fprintf port "#<state ~a:~a:~a (~a)>"
      (state-source s)
      (state-line s)
      (state-column s)
      (state-position s)))

  (define-record result 
    (value : *)
    (state : (struct state)))

  (define *skip-whitespace* #t)
  (define *current-rule* #f)
  (define *current-result* '())
  (define *current-state* #f)
  (define *counters* #f)

  (define (*return-to-continuation* . _)
    (error "call to `return-to' in invalid context"))

  (define whitespace (make-parameter #f))
  (define line-filter (make-parameter #f))

  (define (at-end? state) 
    (fx>= (state-position state) (string-length (state-buffer state))))

  (define (combine p1 p2)
    (and p2
	 (make-result (append (result-value p1) (result-value p2)) (result-state p2))))

  (define (success input)
    (make-result '() input))

  (define (fail input msg)
    (flush-output)
    (fprintf (current-error-port) "~a: ~a:~%~a~%" 
      (source-string input)
      msg
      (let* ((input (skip-whitespace input))
	     (str (state-buffer input))
	     (pos (state-position input)))
	(substring 
	 str
	 pos
	 (or (string-index str #\newline pos)
	     (string-length str)))))
    (reset))

  (define (with-counters mode thunk)
    (fluid-let ((*counters* mode)) (thunk)))

  (define (current-state) *current-state*)
  (define (current-line) (state-line *current-state*))
  (define (current-position) (state-position *current-state*))
  (define (current-source) (state-source *current-state*))
  (define (current-column) (state-column *current-state*))

  (: apply-action (symbol (-> *) (struct result) -> (struct result)))
  (define (apply-action name thunk result)
    (call/cc
     (lambda (return)
       (let ((state (result-state result)))
	 (fluid-let ((*return-to-continuation*
		      (lambda (input val)
			(return (make-result (list val) input))))
		     (*current-rule* name)
		     (*current-result* result)
		     (*current-state* state))
	   (make-result (list (thunk)) state))))))

  (: apply-test ((struct state) (-> *) -> (or boolean (struct result))))
  (define (apply-test state thunk)
    (fluid-let ((*current-state* state)) 
      (and (thunk) (success state))))

  (: with-cached-result 
     ((vector-of (or boolean (pair fixnum (or boolean (struct result)))))
      symbol (struct state) * (-> (or boolean (struct result)))
      -> (or boolean (struct result))))
  (define (with-cached-result c name state show thunk)
    (let* ((p (state-position state))
	   (csize (vector-length c))
	   (im (fxmod p csize)))
      (define (update i)
	(let ((r (thunk)))
	  (vector-set! (the vector c) i (cons p r))
	  r))
      (define (hit r)
	(if show
	    (let ((indent (make-string (min 10 *trace-level*) #\space)))
	      (fprintf (current-error-port) "~a(~a) ~a: cache hit -> ~a~%"
		indent *trace-level* name r)
	      r)
	    r))
      (match (vector-ref c im)
	((p2 . r)
	 (if (fx= p p2)
	     (hit r)
	     (let ((im2 (fxmod (fx+ p (fxxor (fxshr p 8) p)) csize)))
	       (match (vector-ref c im2)
		 ((p4 . r)
		  (if (fx= p p4) 
		      (hit r)
		      (update im2)))
		 (_ (update im2))))))
	(_ (update im)))))

  (define (default-action)
    (let ((s *current-state*))
      (cons* *current-rule* (source-string s) (result-value *current-result*))))

  (define (source-string state)
    (string-append
     (state-source state)
     (case *counters*
       ((none) "")
       ((line) (string-append ":" (number->string (state-line state))))
       ((column) (string-append ":" (number->string (state-column state))))
       (else
	(string-append 
	 ":" (number->string (state-line state))
	 ":" (number->string (state-column state)))))))

  (define (@) (source-string *current-state*))

  (define ($) (result-value *current-result*))

  (define (constant-result-action str result)
    (make-result (list str) (result-state result)))

  (define (result-value-ref-action num result)
    (make-result (list (list-ref (result-value result) num)) (result-state result)))

  (define (return-to input val)
    (*return-to-continuation* input val))

  (: skip-whitespace ((struct state) -> (struct state)))
  (define (skip-whitespace input)
    (if *skip-whitespace*
	(let* ((str (state-buffer input))
	       (pos0 (state-position input))
	       (line (state-line input))
	       (col (state-column input))
	       (slen (string-length str))
	       (src (state-source input))
	       (lf (line-filter)))
	  (let loop ((pos pos0))
	    (cond ((>= pos slen)
		   (if (eq? pos pos0)
		       input
		       (make-state str pos line col src)))
		  ((whitespace) =>
		   (lambda (ws)
		     (cond ((irregex-search ws str pos) => 
			    (lambda (m)
			      (let* ((s (irregex-match-substring m))
				     (ll (string-count s #\newline))
				     (slen (string-length s)))
				(inc! line ll)
				(if (positive? ll)
				    (set! col (- slen (string-index-right s #\newline)))
				    (inc! col slen))
				(loop (+ pos slen)))))
			   (else
			    (make-state str pos line col src)))))
		  ((char=? #\newline (string-ref str pos))
		   (inc! line)
		   (set! col 0)
		   (inc! pos)
		   (cond ((and lf (lf (make-state str pos line col src))) =>
			  (lambda (s)
			    (set! line (state-line s))
			    (set! col (state-column s))
			    (set! src (state-source s))
			    (loop (state-position s))))
			 (else (loop pos))))
		  ((char-whitespace? (string-ref str pos))
		   (inc! col)
		   (loop (add1 pos)))
		  ((eq? pos pos0) input)
		  (else (make-state str pos line col src)))))
	input))

  (define (id/num-char? c)
    (or (char=? c #\_) 
	(char-numeric? c)
	(char-alphabetic? c)))

  (define (mtoken rx input)
    (let* ((state (skip-whitespace input))
	   (str (state-buffer state))
	   (pos (state-position state))
	   (col (state-column state))
	   (src (state-source state))
	   (line (state-line state)))
      (and-let* ((m (irregex-search rx str pos)))
	(let* ((s (irregex-match-substring m))
	       (lns (string-count s #\newline))
	       (slen (string-length s)))
	  (make-result (list s)
		       (make-state str 
				   (irregex-match-end-index m)
				   (fx+ lns line)
				   (if (positive? lns)
				       (fx- slen (string-index-right s #\newline))
				       (fx+ col slen))
				   src))))))

  (define (ltoken lstr notlst input)
    (let* ((lslen (string-length lstr))
	   (state (skip-whitespace input))
	   (str (state-buffer state))
	   (slen (string-length str))
	   (pos (state-position state))
	   (line (state-line state))
	   (col (state-column state))
	   (src (state-source state))
	   (pos2 (fx+ pos lslen)))
      (and (fx<= pos2 slen)
	   (string=? lstr (substring str pos pos2))
	   (not (any (lambda (lstr2)
		       (let* ((ln (string-length lstr2))
			      (p2 (fx+ pos ln)))
			 (and (fx<= p2 slen)
			      (string=? lstr2 (substring str pos p2)))))
		     notlst))
	   ;; if literal ends with alphanumeric character (or "_"), the following one
	   ;; must be non-alphanumeric (and not "_")
	   (or (not (id/num-char? (string-ref lstr (sub1 lslen))))
	       (fx= pos2 slen)
	       (not (id/num-char? (string-ref str pos2))))
	   (let ((lns (string-count lstr #\newline)))
	     (make-result (list lstr)
			  (make-state str pos2 
				      (fx+ lns line)
				      (if (positive? lns)
					  (string-index-right lstr #\newline)
					  (fx+ col lslen))
				      src))))))
  
  (define *trace-level* 0)

  (: with-cached-result/trace
     ((vector-of (or boolean (pair fixnum (or boolean (struct result)))))
      symbol (struct state) * (-> (or boolean (struct result)))
      -> (or boolean (struct result))))
  (define (with-cached-result/trace c name input show thunk)
    (let* ((indent (make-string (min 10 *trace-level*) #\space))
	   (str (state-buffer input))
	   (pos (state-position input))
	   (line (state-line input))
	   (col (state-column input))
	   (src (state-source input))
	   (slen (string-length str)))
      (dynamic-wind
	  (lambda () 
	    (fprintf (current-error-port) "~a(~a) ~a: ~a:~a:~a (~a) ~s...~%"
	      indent *trace-level* name src line col pos
	      (substring str pos (min (+ pos 20) slen)))
	    (inc! *trace-level*))
	  (lambda () 
	    (let ((r (with-cached-result c name input show thunk)))
	      (if r
		  (fprintf (current-error-port) "~a(~a) ~a -> ~s~%"
		    indent (sub1 *trace-level*) name 
		    (result-value r))
		  (fprintf (current-error-port) "~a(~a) ~a: failed.~%"
		    indent (sub1 *trace-level*) name))
	      r))
	  (lambda ()
	    (dec! *trace-level*)))))

  (define (process-input start src
			 #!key (processor print) repeat (skipws *skip-whitespace*)
			 (counters 'both) (source "<input>"))
    (fluid-let ((*skip-whitespace* skipws)
		(*counters* counters))
      (let ((ln 1))
	(define (done vs)
	  (when processor
	    (for-each processor vs)))
	(define (fail1 state)
	  (fail state "syntax error"))
	(let ((state (make-state (src) 0 1 0 source)))
	  ;; make sure 1st line is seen by line-filter
	  (and-let* ((lf (line-filter)))
	    (cond ((lf (make-state (state-buffer state) 0 1 0 (state-source state))) =>
		   (lambda (s) (set! state s)))))
	  (let loop ((state (skip-whitespace state)) (rep #f))
	    (let ((r (start state)))
	      (cond ((not r) (fail1 state))
		    ((at-end? (result-state r)) (done (result-value r)))
		    (else
		     (let ((in (skip-whitespace (result-state r))))
		       (cond ((at-end? in) (done (result-value r)))
			     (repeat
			      (cond ((equal? rep in) (fail1 state))
				    (else
				     (done (result-value r))
				     (loop in in))))
			     (else (fail1 state))))))))))))
  
)
