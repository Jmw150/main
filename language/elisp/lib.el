#!/usr/bin/env emacs --script
(dolist (arg command-line-args-left) (message arg))

;; Write this code in a file: a+b.el
;; Put input.txt in the same directory than a+b.el
;; Open a+b.el in emacs and run the program with: M-x eval-buffer
(defun solve (xs) (mapcar (lambda (ys) (apply '+ ys)) xs))
 
(with-temp-buffer
  (insert-file-contents "input.txt")
  (setq content (split-string (buffer-string) "\n" t))
  (setq xs (mapcar (lambda (zs) (mapcar #'string-to-number (split-string zs))) content))
  (delete-other-windows)
  (find-file-other-window "output.txt")
  (erase-buffer)
  (insert (mapconcat (lambda (x) (format "%d" x)) (solve xs) "\n"))
  (save-buffer))


; concat vectors
(vconcat '[1 2 3] '[4 5] '[6 7 8 9])

; vector length
(length ["apple" "orange"])

; shell stuff
(shell-command "touch output.txt & mkdir docs")
(cd "~/")
(shell-command "touch output.txt & mkdir docs")

; math functions built in for emacs lisp
(setq x '[2 4 4 4 5 5 7 9])
(string-to-number (calc-eval (format "sqrt(vpvar(%s))" x)))

(defun dot-product (v1 v2)
  (setq res 0)
  (dotimes (i (length v1))
    (setq res (+ (* (elt v1 i) (elt v2 i) ) res) ))
  res)
 
(progn
  (insert (format "%d\n" (dot-product [1 2 3] [1 2 3]) ))    ; 14
  (insert (format "%d\n" (dot-product '(1 2 3) '(1 2 3) )))) ; 14


(defun odd (n)
  (if (oddp n) (format "%d is odd\n" n)
    (format "%d is even\n" n)))
 
(defun even (n)
  (if (evenp n) (format "%d is even\n" n)
    (format "%d is odd\n" n)))
 
(progn
  (insert (even 3) )
  (insert (odd 2) )))

; print length of a file
(message "sizes are %s and %s"
         (nth 7 (file-attributes "input.txt"))
         (nth 7 (file-attributes "/input.txt")))

; flatten list
(defun flatten (mylist)
  (cond
   ((null mylist) nil)
   ((atom mylist) (list mylist))
   (t
    (append (flatten (car mylist)) (flatten (cdr mylist))))))

; compose two functions
(defun compose (f g)
  `(lambda (x) (,f (,g x))))

; (max 1 2 3) => 3
(defun max (first-arg &rest more-args)
  (if more-args
      (let ((max-rest (apply 'max more-args)))
	(if (> first-arg max-rest)
	    first-arg
	  max-rest))
    first-arg))

; string to number lol
(string-to-number "12345")


(defun my-join (str1 str2 sep)
"Emacs opens a *scratch* buffer by default. This buffer is in Lisp Interaction mode; C-j evaluates the Lisp expression before point, and prints the result.

Switch to the buffer (C-x b *scratch*, or use the Buffers menu), type some Lisp expressions, and press C-j after each expression."
  (concat str1 sep sep str2))
my-join
(my-join "Rosetta" "Code" ":")
"Rosetta::Code"


(defun match (word str)
   (setq pos (string-match word str) )
  (if pos
      (progn
	(insert (format "%s found at position %d in: %s\n" word pos str) )
	(setq regex (format "^.+%s" word) )
	(setq str (replace-regexp-in-string regex (format "left %s" word) str) )
	(setq regex (format "%s.+$" word) )
	(setq str (replace-regexp-in-string regex (format "%s right" word) str) )
	(insert (format "result: %s\n"  str) ))
    (insert (format "%s not found in: %s\n" word str) ))) 
 
(setq str1 "before center after" str2 "before centre after")
 
(progn
  (match "center" str1)
  (insert "\n")
  (match "center" str2) )


; sending mail
"Variable send-mail-function holds a function for sending a message from the current buffer. The user or sysadmin is expected to set that variable to a preferred method (sendmail, SMTP, etc). The default queries the user for initial setup.

The buffer filling here pays no attention to charset or possible special characters in the fields or text.

(For user-level interactive mailing, compose-mail creates and pre-fills a message buffer ready for the user to edit and send, or not send.)


"
(defun my-send-email (from to cc subject text)
  (with-temp-buffer
    (insert "From: " from "\n"
            "To: " to "\n"
            "Cc: " cc "\n"
            "Subject: " subject "\n"
            mail-header-separator "\n"
            text)
    (funcall send-mail-function)))
 
;(my-send-email "from@example.com" "to@example.com" "" "very important" "body\ntext\n")

;An &rest in the formal parameters gives all further arguments in a list, which the code can then act on in usual list ways. Fixed arguments can precede the &rest if desired.

(defun my-print-args (&rest arg-list)
  (message "there are %d argument(s)" (length arg-list))
  (dolist (arg arg-list)
    (message "arg is %S" arg)))
 
(my-print-args 1 2 3)
