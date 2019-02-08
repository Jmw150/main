;;;; chicken-parse.scm


(use big-chicken honu matchable miscmacros sp)


;;; initialize runtime

(evaluate-runtime-initialization)
(eval '(require-extension sp-runtime))


;;; command line processing

(define +default-grammar+ ".syntax")
(define +short-options+ '(#\h #\c #\o #\p #\r #\t #\P #\w #\d #\x #\q #\s #\C))

(import-for-syntax utils)

(define-syntax get-file
  (er-macro-transformer
   (lambda (x r c)
     (read-all (cadr x)))))

(define (show-syntax)
  (print (get-file "SYNTAX")))

(define (usage code)
  (print 
   "usage: chicken-parse OPTION|FILENAME ...\n"
   "\n"
   "  -h            show this text\n"
   "  -c            compile syntax to Scheme code\n"
   "  -p            print results after parsing\n"
   "  -P            pretty-print results after parsing\n"
   "  -r            run parser in a loop\n"
   "  -t            run parser in trace mode\n"
   "  -w            do not skip whitespace\n"
   "  -d            show internal representation\n"
   "  -x            enable default action\n"
   "  -q            disable warnings and diagnostic output\n"
   "  -s INTEGER    specify cache size (default: " +default-rule-cache-size+ "\n"
   "  -C MODE       select counters, MODE can be `line', `column', `none' or `both' (default)\n"
   "  -o FILENAME   specifies output file (may only be specified once)\n"
   "  -syntax       print description of grammar syntax\n")
  (exit code))

(define (option? str)
  (and (> (string-length str) 1)
       (char=? #\- (string-ref str 0))))

(define (quit fstr . args)
  (fprintf (current-error-port) "Error: ~?~%" fstr args)
  (exit 1))

(define (main args)
  (let ((grammars '())
	(rep #f)
	(trace #f)
	(compile #f)
	(presult void)
	(skipws #t)
	(defact #f)
	(csize #f)
	(debug #f)
	(counters 'both)
	(output #f))
    (when (file-exists? ".syntax")
      (push! ".syntax" grammars))
    (let loop ((args args))
      (match args
	(() 
	 (cond ((null? grammars)
		(quit "no grammar given"))
	       (else
		(process-files
		 (reverse grammars)
		 read-all
		 output: output
		 compile: compile
		 processor: presult
		 repeat: rep
		 trace: trace
		 skip-whitespace: skipws
		 debug: debug
		 counters: counters
		 cache-size: csize
		 default-action: defact))))
	(((or "-h" "-help" "--help") . _) (usage 0))
	(("-syntax" . _)
	 (show-syntax)
	 (exit))
	(("-d" . more)
	 (set! debug #t)
	 (loop more))
	(("-C" mode . more)
	 (set! counters (string->symbol mode))
	 (loop more))
	(("-q" . more)
	 (enable-warnings #f)
	 (loop more))
	(("-x" . more)
	 (set! defact #t)
	 (loop more))
	(("-r" . more)
	 (set! rep #t)
	 (loop more))
	(("-P" . more)
	 (set! presult pp)
	 (loop more))
	(("-w" . more)
	 (set! skipws #f)
	 (loop more))
	(("-t" . more)
	 (set! trace #t)
	 (loop more))
	(("-c" . more)
	 (set! compile #t)
	 (loop more))
	(("-s" n . more)
	 (set! csize (or (string->number n) (usage 1)))
	 (loop more))
	(("-p" . more)
	 (set! presult print)
	 (loop more))
	(("-o" fn . more)
	 (if output
	     (quit "`-o' option given more than once")
	     (set! output fn))
	 (loop more))
	(((? option? str) . more)
	 (let ((lst (string->list (substring str 1))))
	   (if (every (cut memq <> +short-options+) lst)
	       (loop (append (map (cut string #\- <>) lst) more))
	       (usage 1))))
	((fn . more)
	 (push! fn grammars)
	 (loop more))))))

#+(or chicken-script compiling)
(main (command-line-arguments))
