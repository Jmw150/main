;; The premise:
;;
;; Better password storage for my various accounts.
;;
;; What are our requirements:
;;
;; Accounts are stored in a VCS-friendly manner: eg, one file per
;; account.
;;
;; We don't need to hide that an account exists, so the account name
;; can be in cleartext (eg, used as a filename).
;;
;; We want multiple levels of security: some passwords are more secret
;; than others and should use a different key.
;;
;; Each account has a number of fields; apart from the account name,
;; they're all encrypted, but each field may be visible or obscured
;; (the latter meaning it's meant to be inserted via the clipboard and
;; never displayed).
;;
;; Design:
;;
;; Accounts are stored in files, with a meaningful name.
;;
;; Inside the file is encrypted data. When decrypted, it's either the
;; details of the account, or another layer of encryption (that may,
;; in turn, contain either account details or more encryption,
;; arbitrarily nested).
;;
;; Account details are a list of (key,value,props) triples: the key is
;; a symbol name for the field, the value is its value (any atomic
;; type), and the props are a list of either symbol flags or (symbol
;; . value) cons cells.
;;
;; "obscured" is a symbol prop that marks fields not to be displayed
;; by default.
;;
;; The decrypted contents of an encrypted blob are either:
;;
;; (account (KEY VALUE [PROPS...])...)
;;
;; or
;;
;; (nested "TAG")BYTES
;;
;; ...where the TAG is the name of the key to prompt the user for, and
;; the BYTES are encrypted bytes.
;;
;; Encryption is a tweetnacl symmetric box, with the nonce
;; prepended. The key is a tweetnacl hash of the user-supplied key
;; string, truncated to keybytes bytes.
;;
;; CLI:
;;
;; pwdb <file> - decrypt and list fields that aren't obscured
;;
;; pwdb -a <file> - decrypt and list all fields
;;
;; pwdb <file> <key>.. - decrypt and dump out raw field value(s), newline separated
;;
;; pwdb -n <File> [tag...] - read (acount ...) from stdin and encrypt; if extra tags are given, nest encryption with them.
;;
;; pwdb -e <file> - spawn $EDITOR to edit non-obscured fields in the file
;;
;; pwdb -e -a <file> - spawn $EDITOR to all fields in the file

;; Base libraries:

(use srfi-4)
(use srfi-13)
(use srfi-69)
(use posix)

;; Required eggs:

(use tweetnacl)
(use args)
(use stty)
(use srfi-27)
(use mwc) ;; from srfi-27
(use entropy-unix) ;; from srfi-27
(use matchable)

;; Core crypto

;; Passphrase cache is used to avoid re-prompting in the edit case,
;; where we decrypt and then re-encrypt. Of course, I'll curse it if I
;; write a "change the passphrase" feature that decrypts with one and
;; re-encrypts with the other...
(define *passphrase-cache* (make-hash-table))

(define (cache-passphrase tag passphrase)
  (hash-table-set! *passphrase-cache* tag passphrase))

(define (get-passphrase tag)
  ;; See if there's a passphrase in the cache
  (if (hash-table-exists? *passphrase-cache* tag)
      (hash-table-ref *passphrase-cache* tag)
      ;; See if there's a passphrase in the environment
      (let ((passphrase-from-env (assoc (if tag (string-append "PWDB_" (symbol->string tag)) "PWDB")
                                      (get-environment-variables))))
        (if passphrase-from-env
            (cdr passphrase-from-env)
            ;; Otherwise, prompt for it
            (with-output-to-file "/dev/tty"
              (lambda ()
                (if tag
                    (printf "Please enter the passphrase for ~a: " tag)
                    (printf "Please enter the passphrase: "))
                (flush-output)
                (let ((key (with-input-from-file "/dev/tty"
                             (lambda ()
                               (with-stty '(not echo) read-line)))))
                  (printf "\n")
                  key)))))))

(define (encrypt1 plaintext key-string nonce-string)
  (let ((key-hash (hash key-string))
        (nonce-hash (hash nonce-string)))
    (assert (>= (string-length key-hash) symmetric-box-keybytes))
    (assert (>= (string-length nonce-hash) symmetric-box-noncebytes))
    (let* ((key (string->blob (substring/shared key-hash 0 symmetric-box-keybytes)))
           (nonce (substring/shared nonce-hash 0 symmetric-box-noncebytes))
           (nonce-u8vector (blob->u8vector/shared (string->blob nonce))))
      (string-append
       nonce
       ((symmetric-box key) plaintext nonce-u8vector)))))

(define (decrypt1 cyphertext key-string)
  (let ((key-hash (hash key-string)))
    (assert (>= (string-length key-hash) symmetric-box-keybytes))
    (assert (>= (string-length cyphertext) symmetric-box-noncebytes))
    (let* ((key (string->blob (substring/shared key-hash 0 symmetric-box-keybytes)))
           (nonce (substring/shared cyphertext 0 symmetric-box-noncebytes))
           (cyphertext-without-nonce (substring/shared cyphertext symmetric-box-noncebytes))
           (nonce-u8vector (blob->u8vector/shared (string->blob nonce))))
      (let ((plaintext ((symmetric-unbox key) cyphertext-without-nonce nonce-u8vector)))
        (if plaintext
            plaintext
            (error "Wrong passphrase!"))))))

#;(assert (string=?
         (decrypt1
          (encrypt1 "Hello, world!" "Key" "Nonce")
          "Key")
         "Hello, world!"))

(define (encrypt plainsexpr nonce-string key-tags)
  ;; Apply tags in reverse order, then final layer
  (foldr (lambda (tag plaintext)
           (let* ((key (get-passphrase tag))
                  (key2 (get-passphrase tag))
                  (_ (unless (string=? key key2) (error "The two passphrases didn't match!")))
                  (cyphertext
                   (encrypt1 plaintext key nonce-string)))
             #;(printf "DEBUG encrypt ~s ~s ~s <- ~s\n" cyphertext key tag plaintext)
             (if tag
                 (string-append
                  (with-output-to-string
                    (lambda ()
                      (write `(nested ,tag))))
                  cyphertext)
                 cyphertext)))
         (with-output-to-string (lambda () (write plainsexpr)))
         (cons #f key-tags)))

;; Returns two values: plainsexpr and list of key-tags
(define (decrypt cyphertext tag)
  (let* ((key (get-passphrase tag))
         (plaintext
          (decrypt1 cyphertext key)))
    (if plaintext
        (cache-passphrase tag key)
        (error "Incorrect passphrase"))
    #;(printf "DEBUG decrypt ~s ~s ~s -> ~s\n" cyphertext key tag plaintext)
    (receive
     (plainsexpr plainbody)
     (with-input-from-string plaintext
       (lambda ()
         (let* ((sexpr (read))
                (rest (read-string)))
           (values sexpr rest))))

     (cond
      ((not (pair? plainsexpr))
       (error "Invalid plaintext"))
      ((eq? (car plainsexpr) 'nested)
       (receive (inner-plain inner-keytags)
                (decrypt plainbody (cadr plainsexpr))
                (values inner-plain (cons tag inner-keytags))))
      (else (values plainsexpr (list tag)))))))

 #;(begin
 (define input '(account))

 (define cyphertext
   (with-input-from-string "A\nB\nC\n"
     (lambda ()
       (encrypt input "Nonce" '(b a)))))

 (define plainsexpr
   (with-input-from-string "C\nB\nA\n"
     (lambda ()
       (decrypt cyphertext #f))))

 (assert (equal? input plainsexpr)))

;; File access

(define (encrypt-and-write plainsexpr path key-tags)
  ;; Path used as nonce
  (let ((cyphertext (encrypt plainsexpr path key-tags)))
    (with-output-to-file path
      (lambda ()
        (change-file-mode path (bitwise-ior perm/irusr perm/iwusr))
        (write-string cyphertext)))))

(define (read-and-decrypt path)
  (receive (plainsexpr key-tags)
           (decrypt
            (with-input-from-file path read-string)
            #f)
           (values plainsexpr key-tags)))

#;(begin
 (define input '(account))

 (with-input-from-string "A\nB\nC\n"
   (lambda ()
     (encrypt-and-write input "test.pwdb" '(b a))))

 (define plainsexpr
   (with-input-from-string "C\nB\nA\n"
     (lambda ()
       (read-and-decrypt "test.pwdb"))))

 (assert (equal? input plainsexpr)))

;; Validity checker

(define (valid-account? account allow-templates? allow-obscured?)
  (and
   (list? account)
   (eq? (car account) 'account)
   (every
    (lambda (field)
      (and
       (list? field)
       (>= (length field) 2)
       (symbol? (first field))
       (or (string? (second field))
           (match
            (second field)
            ('<obscured> allow-obscured?)
            (,('make-passphrase) allow-templates?)
            (,('make-password len) allow-templates?)
            (else #f)))
       (every
        (lambda (prop)
          (or (symbol? prop)
              (and
               (list? prop)
               (symbol? (first prop)))))
        (cddr field))))
    (cdr account))))

;; Accessors

(define (field-key field)
  (first field))

(define (field-value field)
  (second field))

(define (field-props field)
  (cddr field))

(define (obscured? field)
  (member 'obscured (field-props field)))

(define (account-fields account)
  (cdr account))

(define (find-value account key)
  (let loop ((fields (account-fields account)))
    (cond
     ;; No more
     ((null? fields) #f)

     ;; Found it
     ((eq? (field-key (car fields)) key)
      (field-value (car fields)))

     ;; Keep trying
     (else
      (loop (cdr fields))))))

;; Spawn external editor, returns sexpr

(define (edit-file path)
  (let* ((editor (cdr
                  (or (assoc "EDITOR" (get-environment-variables))
                      '("EDITOR" . "vi"))))
         (editor-pid (process-run editor (list path))))
    (process-wait editor-pid)))

(define (edit sexpr valid?)
  (let-values (((fd temp-path) (file-mkstemp "/tmp/pwdb.XXXXXX")))
    (dynamic-wind
        (lambda () #f)
        (lambda ()
         (let ((temp-port (open-output-file* fd)))
           (change-file-mode temp-path (bitwise-ior perm/irusr perm/iwusr))
           (pp sexpr temp-port)
           (close-output-port temp-port)

           ;; Spawn $EDITOR
           (let ((new-sexpr
                  (let loop ()
                    (edit-file temp-path)
                    (let ((new-sexpr (with-input-from-file temp-path read)))
                      (if (valid? new-sexpr)
                          new-sexpr
                          (begin
                            (printf "That's not valid, I'm afraid. Press enter to try again, or ^C to abort.")
                            (read-line)
                            (loop)))))))

             new-sexpr)))
        (lambda ()
          (delete-file temp-path)))))

;; Passphrase generator

(define (random-integer entropy max)
  (let* ((b1 ((entropy-source-u8 entropy)))
         (b2 ((entropy-source-u8 entropy)))
         (u16 (+ (* 256 b1) b2)))
    (inexact->exact (floor (/ (* max u16) 65535)))))

(define (make-passphrase)
  (let* ((gismu (include "gismu.scm"))
         (gismus (vector-length gismu))
         (entropy (make-entropy-source-urandom-device)))

        (string-append
         (vector-ref gismu (random-integer entropy gismus))
         (vector-ref gismu (random-integer entropy gismus))
         (vector-ref gismu (random-integer entropy gismus))
         (vector-ref gismu (random-integer entropy gismus)))))

(define (make-password len)
  (let ((characters
         (list->vector
          (string->list
           ;; Miss out iloO0:;.,| due to confusabilities in bad fonts, and \"' due to quoting pains
           "abcdefghijkmnpqrstuvwxyzABCDEFGHJKLMNPQRSTUVWXYZ123456789%_/+=-*&^%$?!@<>(){}[]~#")))
        (entropy (make-entropy-source-urandom-device)))
    (string-tabulate
     (lambda (_)
       (vector-ref characters (random-integer entropy (vector-length characters))))
     len)))

(define (expand-template tmpl)
  (match
   tmpl
   ;; Check for password generation metacommands
   (,('make-passphrase) (make-passphrase))
   (,('make-password len) (make-password len))
   ;; Otherwise, just recurse
   (else (if (list? tmpl)
             (map expand-template tmpl)
             tmpl))))

;; Interactive mode

(define (copy-to-clipboard clip-command text)
  (receive (child-out child-in child-pid) (process clip-command)
           (write-string text #f child-in)
           (close-output-port child-in)
           (close-input-port child-out)))

(define (interactive-repl account clip-command)
  (printf "<index>, r[eveal] <index>, or q[uit]> ")
  (let* ((response (read-line))
         (response-number (string->number response)))
    (cond
     ;; It's #f if not a valid number
     ((and response-number
           (>= response-number 0)
           (< response-number (length (account-fields account))))
      (let ((field (car (drop (account-fields account) response-number))))
        (copy-to-clipboard clip-command (field-value field))
        (printf "~a copied to clipboard\n" (field-key field)))
      ;; Try again
      (interactive-repl account clip-command))

     ((or
       (string-ci=? response "quit")
       (string-ci=? response "q"))
      ;; Clear clipboard and exit
      (copy-to-clipboard clip-command "")
      (void))

     ((or
       (string-ci=? response "help")
       (string-ci=? response "h")
       (string-ci=? response "?"))
      ;; Display help
      (printf "Enter the numeric index of a field to copy its value to the clipboard, without displaying it.\n")
      (printf "\n")
      (printf "Type \"reveal <index>\" to display the value of a field, even if it's obscured.\n")
      (printf "(This is handy if you need to type it into your mobile device or something.)\n")
      (printf "\n")
      (printf "Type \"quit\" to clear the clipboard and quit.")
      (printf "\n")
      (printf "The 'quit' and 'reveal' commands can be abbreviated to 'q' or 'r', respectively.\n")
      ;; Try again
      (interactive-repl account clip-command))

     ((and
       (or
        (string-prefix? "r " response)
        (string-prefix? "reveal " response))
       (let* ((tokens (string-tokenize response)))
         (and
          (= 2 (length tokens))
          (let* ((response-number (string->number (second tokens))))
            (and
             response-number
             (>= response-number 0)
             (< response-number (length (account-fields account)))
             (begin
               (let ((field (car (drop (account-fields account) response-number))))
                 ;; Nasty: impure operation performed in the conditional of a cond clause!
                 (printf "~a revealed: ~a\n" (field-key field) (field-value field)))
               ;; Return #t from the cond, as it worked, to avoid dropping into the else case
               #t))))))
      ;; Try again, so we could have just dropped into the else case
      ;; after all, but that would make for some really obscured
      ;; control flow.
      (interactive-repl account clip-command))

     (else
      ;; Anything else? Try again
      (interactive-repl account clip-command)))))

;; Command line engine

(define opts
  (list
   (args:make-option (a all) #:none "Include obscured fields")
   (args:make-option (n new) #:none "Create a new account (with extra layers of encryption named after TAGS)")
   (args:make-option (e edit) #:none "Edit the account (or, with -n, edit a template to create afresh)")
   (args:make-option (i interactive) (required: "COPY-COMMAND") "View the account interactively, with COPY-COMMAND used to copy selected fields to the clipboard")
   (args:make-option (h help) #:none "Display this text" (usage))))

(define (usage)
 (with-output-to-port (current-error-port)
   (lambda ()
     (print "Usage: " (car (argv)) " [options...] FILE [KEY|TAGS...|TEMPLATE-FILE]")
     (newline)
     (print (args:usage opts))))
 (exit 1))

(receive (options operands)
         (args:parse (command-line-arguments) opts)

         (when (zero? (length operands))
                 (usage))

         (let* ((all-mode (assq 'all options))
                (new-mode (assq 'new options))
                (edit-mode (assq 'edit options))
                (view-mode (not (or new-mode edit-mode)))
                (interactive-mode (assq 'interactive options))
                (filename (car operands))
                (rest (cdr operands)))
           (cond
            ;; Check for valid combinations of flags
            ((and new-mode all-mode)
             (usage))
            
            ((and interactive-mode (not view-mode))
             (usage))

            ;; NEW FROM STDIN MODE
            ((and new-mode (not edit-mode))
             (let ((account (read)))
               (unless
                (valid-account? account #t #f)
                (fprintf (current-error-port)
                         "Accounts must be of the form (account (KEY VALUE [PROPS...])...)\n")
                (exit 1))

               (encrypt-and-write
                account
                filename
                (map string->symbol rest))))

            ;; NEW WITH EDIT MODE

            ;; Reading a template file has three functions:

            ;; (1) Providing a template to start from, for convenience.

            ;; (2) Driving password generation parameters.

            ;; (3) Pre-seeding the passphrase cache from decrypting
            ;; the template, so the same keys are used in the new
            ;; file.
            ((and new-mode edit-mode)
             (unless (= 1 (length rest)) (usage))
             (receive (template template-tags)
                      (read-and-decrypt (first rest))
              (let* ((expanded-template (expand-template template))
                     (account (edit expanded-template (cut valid-account? <> #f #f))))

                (encrypt-and-write
                 account
                 filename
                 ;; First element is always #f
                 (cdr template-tags)))))

            ;; VIEW MODE
            (view-mode
             (let ((account (read-and-decrypt filename)))
               (unless (valid-account? account #t #f)
                       (if all-mode
                           (begin
                             (printf "ERROR: Invalid account data:\n")
                             (pp account))
                           (begin
                             (printf "ERROR: Invalid account data (use all-mode to see it)\n")))
                       (exit 1))
               (let ((fields (account-fields account))
                     (desired-keys (map string->symbol rest)))
                 (if (null? desired-keys)
                     ;; List all
                     (begin
                       (let ((idx 0))
                        (for-each
                         (lambda (field)
                           (let ((key (field-key field))
                                 (value (field-value field))
                                 (props (field-props field)))
                             (if (or all-mode
                                     (not (obscured? field)))
                                 (printf "~a: ~a=~s ~s\n" idx key value props)
                                 (printf "~a: ~a=<obscured> ~s\n" idx key props)))
                           (set! idx (+ idx 1)))
                         fields))
                       (when interactive-mode
                             (interactive-repl account (cdr interactive-mode))))
                     ;; List specific keys
                     (for-each
                      (lambda (desired-key)
                        (for-each
                         (lambda (field)
                           (let ((key (field-key field))
                                 (value (field-value field))
                                 (props (field-props field)))
                             (when (eq? key desired-key)
                              (if (or all-mode
                                      (not (obscured? field)))
                                  (printf "~a" value)
                                  (printf "<obscured>"))
                              ;; Pop out a newline if we're producing more than one.
                              ;; For just one, it's nice to have it without a newline, for better piping into other things.
                              (unless (eq? 1 (length desired-keys))
                                      (printf "\n")))))
                         fields))
                      desired-keys)
                     ))))

            ;; EDIT MODE
            (edit-mode
             (let-values (((account key-tags) (read-and-decrypt filename)))
               (if all-mode
                   ;; All mode: Give them everything
                   (let ((new-account (edit account (cut valid-account? <> #t #f))))
                     ;; First element of key-tags is always #f for the outer encryption, so strip that
                     (encrypt-and-write new-account filename (cdr key-tags)))
                   ;; Not all mode: Filter obscured fields, and put them back in afterwards
                   (let* ((new-account (edit
                                       (cons 'account
                                        (map (lambda (field)
                                               (if (obscured? field)
                                                   (append
                                                    (list
                                                     (field-key field)
                                                     '<obscured>)
                                                    (field-props field))
                                                   field))
                                             (account-fields account)))
                                       (cut valid-account? <> #t #t)))
                          ;; Merge obscured fields back in from the original, unless deleted/overwritten
                          (merged-account
                           (cons 'account
                                 (map (lambda (field)
                                        (if (eq? '<obscured> (field-value field))
                                            (append
                                             (list
                                              (field-key field)
                                              (or (find-value account (field-key field)) "") ; Get previous value
                                              (field-props field)))
                                            field))
                                      (account-fields new-account)))))
                     ;; First element of key-tags is always #f for the outer encryption, so strip that
                     (encrypt-and-write new-account filename (cdr key-tags)))))))))
