
; common repository called MELPA 
(require 'package)
(add-to-list 'package-archives '("melpa" . "http://melpa.org/packages/"))
(package-initialize)


;; annoying things emacs does
; on the terminal there is a bell, this makes it a flash instead
(setq visible-bell 1)
; adding number to line on emacs
; will slow down loading large 10k line pages
(global-linum-mode t)
; set tab to 4 spaces, tab still auto alines 
(setq default-tab-width 4)
; remove indent guessing in c programs
(require 'cc-mode)
    (add-to-list 'c-mode-common-hook
      (lambda () (setq c-syntactic-indentation nil)))
; turn off auto indent
(when (fboundp 'electric-indent-mode) (electric-indent-mode -1))

; evil mode for emacs, which is vim in emacs
(require 'evil)
(evil-mode 1)

; org mode for .org files (great for organizing)
(require 'org)



;; The following are emacs evil macros, to make:
;; M-x name-last-kbd-macro, M-x insert-kbd-macro
;; rename (evil-set-register key macro)

; bash comment mapped to b in emacs evil
(evil-set-register ?p [?0 ?i ?# escape ?j ?0])

; remove the first column of a line of text in emacs evil
; helpful for removing python block comment
(evil-set-register ?n
   "0xj0")

(custom-set-variables
 ;; custom-set-variables was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(inhibit-startup-screen t)
 '(package-selected-packages
   (quote
    (x86-lookup nasm-mode rust-mode d-mode mips-mode exwm haskell-mode kotlin-mode ein markdown-mode tuareg merlin caml dumb-jump proof-general hy-mode evil auctex))))
(custom-set-faces
 ;; custom-set-faces was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 )


; compiles a preview of a .tex file
(fset 'compile-latex
   "\C-c\C-p\C-s")

; lisp comment mapped to l in emacs evil
(evil-set-register ?l
   [?0 ?i ?\; escape ?j ?0])

; latex comment mapped to t in emacs evil
(evil-set-register ?t
   [?0 ?i ?% escape ?j ?0])

;; there is likely a smarter way to do this
; org indent mapped to o in emacs evil
;(evil-set-register ?o [?0 ?i ?* escape ?j ?0])

; remove the first column of a line of text in emacs evil
; helpful for removing python block comment
(evil-set-register ?n
   "0xj0")

; add 4 spaces at beggining of line, useful for group indenting
(evil-set-register ?i   
    [?0 ?i ?  ?  ?  ?  escape ?j ?0])

; german used symbols
; äéöüß„“€
; input methods: M-x input, latex command, emacs evil macro keys
(fset 'german-a "ä")
(fset 'german-a-latex "\\\"{a}")
(evil-set-register ?a [?a ?ä escape])
(fset 'german-e "é")
(fset 'german-e-latex "\\\'{e}")
(evil-set-register ?e [?a ?é escape])
(fset 'german-o "ö")
(fset 'german-o-latex "\\\"{o}")
(evil-set-register ?o [?a ?ö escape])
(fset 'german-u "ü")
(fset 'german-u-latex "\\\"{u}")
(evil-set-register ?u [?a ?ü escape]) 
(fset 'german-b "ß")
(fset 'german-b-latex "{\\ss}")       ; close enough?
(evil-set-register ?b [?a ?ß escape]) 
(fset 'german-quote "„“")
(fset 'euro "€")

;; Here is a list of M-x macros. Text ones should be changed for use

;; Commonly used math symbols
;(fset 'member-of "∈")
;(fset 'conjunction "∧")
;(fset 'disjunction "v")
;(fset 'conditional "→")
;(fset 'biconditional "↔")
;(fset 'congruent "≡")
;(fset 'there-exists "∃")
;(fset 'for-all "∀")
;(fset 'inverse-logic-op "¬")
;(fset 'subset "⊆")
;(fset 'empty-set "∅")
;(fset 'union "∪")
;(fset 'intersection "∩")
;(fset 'composition "◦" )
;(fset 'real-numbers "ℝ")
;(fset 'integers "ℤ")
;(fset 'del-operator "∇") ;\nabla

;; for latex files
(fset '\\n "\\newline ")
(fset 'infinity "\\infty ")
(fset 'partial-derivative "\\partial ")
(fset 'integral "\\int ")
(fset 'integral-line "\\oint ")
(fset 'sum "\\sum ")
(fset 'product "\\prod ")
(fset 'times "\\cdot ")
(fset 'multiply "\\cdot ")
(fset 'member-of "\\in ")
(fset 'conjunction "\\wedge ")
(fset 'disjunction "\\vee ")
(fset 'conditional "\\rightarrow ")
(fset 'biconditional "\\leftrightarrow ")
(fset 'congruent "\\equiv ")
(fset 'there-exists "\\exists ")
(fset 'for-all "\\forall ")
(fset 'inverse-logic-op "\\neg ")
(fset 'subset "\\subseteq ")
(fset 'strict-subset "\\subset ")
(fset 'empty-set "\\emptyset ")
(fset 'union "\\cup ")
(fset 'intersection "\\cap ")
(fset 'composition "\\circ ")
(fset 'complement "\\overline{")
(fset 'real-numbers "\\mathbb{R} ") 
(fset 'integers "\\mathbb{Z} ") 
(fset 'del-operator "\\nabla ")
(fset 'plus-minus "\\pm ")
(fset 'minus-plus "\\mp ")
(fset 'less-than-or-equal "\\leq ")
(fset 'greater-than-or-equal "\\geq ")
(fset 'cross-product "\\times ")
(fset 'approximately "\\approx ")
(fset 'squareroot "\\sqrt{ } ")
(fset 'hat "\\hat{ } ")
(fset 'bar "\\bar{ } ")
(fset 'limit "\\lim\\limits_{ ")
(fset 'vector-hat "\\vec{ } ")
; for writing math in case you forget
(fset 'math-block "$    $")
; for writing inside comment blocks
(fset 'latex-block "\\fi \n\n\n\\iffalse")
(fset 'laplace "\\mathcal{L} ") ; uses \usepackage[mathscr]{euscript} 
(fset '\\ "\\backslash ")
(fset '~ "$~$") ; exit math mode, enter ~, renter math mode
(fset 'perpendicular "\\perp")
(fset 'fancy-e "\\xi")
(fset 'map "\\mapsto")
(fset 'prime "\\prime")
; not the best
(fset 'piece-wise-function "\\[  f(x) \= \\begin{cases} \\end{cases} \\] ")
(fset 'equation-block "\\begin{eqnarray*} \n & = & \\\\ & = & \n \\end{eqnarray*}")
(fset 'over-relation "\\stackrel{*}{=}")
(fset 'stack-relation "\\stackrel{*}{=}")

; for setting default lisp
; set M-x run-lisp to run gcl /usr/bin/gcl
; gcl is libre
; sbcl is ansi compliant
; clisp is on ubuntu
(setq inferior-lisp-program "/usr/bin/clisp")

; set M-x run-scheme to run guile instead of Chez
; Chez is more up to date
; guile integrates with C.
(setq scheme-program-name "guile")

;; Teacher's preference
; use spaces instead of tabs
(setq-default indent-tabs-mode nil)
; use 4 spaces in the indentation
(setq default-tab-width 4)
(setq tab-width 4)
(setq c-default-style "linux")
(setq c-basic-offset 4)
(c-set-offset 'comment-intro 0)

; keep hard links on updated files
(setq backup-by-copying t)

; eval some e-lisp 
(defun repl-this () 
  (interactive) 
  (let ((value (eval (preceding-sexp)))) 
    (kill-sexp -1) 
    (insert (format "%S" value))))




; loading the new hy language for python
(add-to-list 'auto-mode-alist '("\\.hy\\'" . hy-mode))

; default to mips assembly language
(add-to-list 'auto-mode-alist '("\\.s\\'" . mips-mode)) ; mips assembler is most common atm

;; Open .v files with Proof General's Coq mode
;; now considered obsolete (uses version 24.3)
;(load "~/.emacs.d/lisp/PG/generic/proof-site")

;; Load company-coq when opening Coq files
;;(add-hook 'coq-mode-hook #'company-coq-mode)

;(setenv "PATH" (concat (getenv "PATH") ":/usr/local/bin"))
;(setq exec-path (append exec-path '("/usr/local/bin")))


; (when (executable-find "ipython3") (setq python-shell-interpreter "ipython3"))

;; useful but breaks vim keys
;(defun shell () (interactive "") (term "/usr/bin/ipython3")) 

;; if you want to use exclusively emacs
;(require 'exwm)
;(require 'exwm-config)
;(exwm-config-default)
;; no idea how to return to regular windowing system after this though


; M-x ielm is the elisp repl
(defun elisp () 
  (interactive) 
  (ielm))
; M-x term is what you need to run a shell...
(defun true-shell () 
  (interactive) 
  (ansi-term "/bin/bash"))


;;; some repl-this functions
(defun egyptian-num (n str) 
  "for compiling a base 10 number into latex egyptian number"
  (if (>= n 1000000) (egyptian-num (- n 1000000) (concat " -Emil" str))
  (if (>= n 100000) (egyptian-num (- n 100000) (concat " -ECthou" str))
  (if (>= n 10000) (egyptian-num (- n 10000) (concat "-EXthou" str))
  (if (>= n 1000) (egyptian-num (- n 1000) (concat " -Ethou" str))
  (if (>= n 100) (egyptian-num (- n 100) (concat " -Ehum" str))
  (if (>= n 10) (egyptian-num (- n 10) (concat " -Eten" str))
  (if (>= n 1) (egyptian-num (- n 1) (concat " -Eone" str))
  (if (< n 1) str)))))))))


(defun ! (x) 
  "recursive factorial function"
   (if (< x 0) 0
       (if (= x 0)
           1
           (* x (! (+ x -1))))))

(defun logn (n x)
  "log_n x function"
   (if (<= n 0) "error"
   (/ (log n) (log x))))

(defun cat (a b)
  "a function to concatenate two strings"
  (concat a b))

(defun n->s (a)
  "a short hand function converting a number to strings"
  (number-to-string a))

(defun ceil (n) 
  "a short hand function for the ceiling function"
  (ceiling n))

(defun choose (n k) 
  "the mathematical nCk operator"
  (/ (! n) (* (! (- n k)) (! k))))

(defun pick (n k) 
  "the mathematical nPk operator"
  (/ (! n) (! (- n k))))

(defun len (lst) 
  "short hand for length function, takes length of list"
  (length lst))


(defun sum (lst)
  "recursive sum function" ; elisp is such a crappy lisp
  (defun sum-r (lst len)
    (if (not (= (length lst) 0))
        (sum-r (cdr lst) (+ (car lst) len))
         len))
  (sum-r lst 0))

(defun quicksort (lst)
    "the name sort is already taken in emacs"
    (defun list< (a b)
      (cond
        ((or (null a) (null b)) nil)
        ((< a (car b)) (list< a (cdr b)))
        (t (cons (car b) (list< a (cdr b))))))
    
    (defun list>= (a b)
      (cond
        ((or (null a) (null b)) nil)
        ((>= a (car b)) (list>= a (cdr b)))
        (t (cons (car b) (list>= a (cdr b))))))
    
    (defun qsort (L)
      (cond
        ((null L) nil)
        (t
          (append
            (qsort (list< (car L) (cdr L)))
            (cons (car L) nil) 
            (qsort (list>= (car L) (cdr L)))))))

        (qsort lst))
    
(defun mean (lst)
  (/ (sum lst) (length lst)))

(defun even? (num)
  (= 0 (mod num 2)))

(defun odd? (num)
  (not (even? num)))

(defun index (lst ndex)
  "get index of a list, python like style"
  (if (or (= 1 (len lst)) 
          (= 0 ndex))
      (car lst)
  (if (= 0 (len lst))
      nil
      (index (cdr lst) 
             (mod (- ndex 1) (length lst))))))
    
(defun sublist (lst start end) 
  "sublist list start end, like list[start:end], python like, currently requires all args"
  (defun cut-front (lst start)
    (if (or (= 1 (len lst)) (= 0 start))
        lst
      (if (= 0 (len lst))
          nil
        (cut-front (cdr lst) 
                 (mod (- start 1) (length lst))))))
  (defun cut-back (lst end) 
    (defun collect (collection index lst)
      (if (= 0 index)
          collection
          (collect (append collection (list (car lst))) (mod (- index 1) (length lst)) (cdr lst))))
    (collect '() end lst))
  (cut-back (cut-front lst start) end))
  

(defun median (lst) 
  (defvar lisst (quicksort lst))
  (if (odd? (length lisst))
      (index lisst (/ (length lisst) 2))
      (/ (+ 
            (index lisst (/       (length lisst)  2))
            (index lisst (/ (+ -1 (length lisst)) 2)))
         2.0)))

(defun stat-max (lst)
  "being lazy, this just sorts the list and grabs the end"
  (index (quicksort lst) -1))

"
(defun mode (lst)
  (defun frequency-table (lst) ; (number-list) -> (frequency number)
    (defvar lisst (quicksort lst))
    (defun table-r (lisst new-list)
      (if (= (car lisst) nil)
          new-list
      (if (= (car lisst) (cadr lisst))
          (table-r (cdr lisst) (list (+ 1 (car new-list)) (append (car lisst) (cadr new-list))))
          (table-r (cdr lisst) (list 
"        
  ; sort, (number-list) -> (number,frequency), max

; stddev
; quartiles
; box-wisker-dat
; histogram-dat

