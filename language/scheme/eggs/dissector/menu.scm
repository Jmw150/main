;;;;;; Menus: displays of an object's components

;;; Copyright (C) 2004, Taylor Campbell
;;; All rights reserved.
;;; See the LICENCE file for details.

(define-record-type rtd/dissection-menu
  (make-dissection-menu entries index)
  dissection-menu?
  (entries dissection-menu-entries set-dissection-menu-entries!)
  (index dissection-menu-index set-dissection-menu-index!))

(define (prepare-dissection-menu object)
  (make-dissection-menu (dissect-components object) 0))

(define (shift-dissection-menu! menu count)
  (let ((index (+ (dissection-menu-index menu) count)))
    (cond ((and (negative? count)
                (negative? index))
           (error "Shifted menu too far backwards"))
          ((and (not (negative? count))
                (stream-length<? (dissection-menu-entries menu)
                                 index))
           (error "Shifted menu too far forwards"))
          (else
           (set-dissection-menu-index! menu index)))))

(define (dissection-select1 dissection index)
  (let ((focus (dissection-focus dissection)))
    (cond ((undissectable? focus)
           (error "Can't dissect further into undissectable"))
          ((stream-maybe-drop (dissection-menu-entries
                               (dissection-menu dissection))
                              index)
           => (lambda (tail)
                (cond ((stream-null? tail)
                       (error "Dissection index out of bounds" index))
                      (else
                       (dissection-push! dissection
                                         (cdr (stream-car tail)))
                       (display-dissection dissection)))))
          (else (error "Dissection index out of bounds")))))

(define (dissection-select2+ dissection indices)
  (let loop ((indices indices) (index-count 0))
    (if (null? indices)
        (display-dissection dissection)
        (let ((focus   (dissection-focus dissection))
              (index1  (car indices))
              (index2+ (cdr indices)))
          (cond ((undissectable? focus)
                 (error "Can't dissect further into undissectable"))
                ((stream-maybe-drop (dissection-menu-entries
                                     (dissection-menu dissection))
                                    index1)
                 => (lambda (tail)
                      (cond ((stream-null? tail)
                             (error "Dissection index out of bounds"))
                            (else
                             (dissection-push! dissection
                                               (cdr (stream-car tail)))
                             (loop index2+ (+ index-count 1))))))
                (else
                 (error "Dissection index out of bounds"
                        `(after selecting further into object
                          ,index-count times))))))))



;;; --------------------
;;; Displaying the menus

(define (display-dissection-menu menu port)
  (let* ((origin (dissection-menu-index menu))
         (padding-width
          (string-length (number->string
                          ;; Get the length of the biggest index to be
                          ;; printed in this menu section.
                          (+ origin (dissection-menu-section-size))))))
    (let loop ((entries (stream-drop (dissection-menu-entries menu)
                                     origin))
               (index origin))
      (cond ((stream-null? entries) #t)
            ((>= (- index origin) (dissection-menu-section-size))
             (display "(more)" port)
             (newline port))
            (else
             (receive (e1 e2+)
                      (stream-car+cdr entries)
               (display-dissected-entry e1 index padding-width port)
               (loop e2+ (+ index 1))))))
    (flush-output port)))

(define (display-dissected-entry entry index padding-width port)
  (display "  [" port)
  (display (pad-string (number->string index 10) padding-width) port)
  (cond ((car entry)
         => (lambda (name)
              (display ": " port)
              (write name port))))
  (display "] " port)
  ((dissection-menu-entry-printer)
   (cdr entry)
   (+ padding-width
      (cond ((car entry)
             (+ (string-length (->string (car entry)))
                2))                     ; ": "
            (else 0))
      3                                 ; "  ["
      2)                                ; "] "
   port)
  (newline port))



;;; --------------------
;;; Menu-related dissector commands

(define-dissection-command 'menu '(m)
  "Prints just the current menu."
  #f #f
  0
  (lambda (dissection)
    (if (undissectable? (dissection-focus dissection))
        (error "No subcomponents in object to make menu of")
        (display-dissection-menu (dissection-menu dissection)
                                 (dissection-outport dissection)))))

(define-dissection-command 'walk '(w)
  "Walks up and down the focus object's component menu."
  "[<slot-count>]"
  '("Moves the current menu selection by SLOT-COUNT.  If SLOT-COUNT is"
    "negative, the menu is moved backwards; if it's positive, it is"
    "moved forwards.  If it is absent, the menu is moved forward by"
    "(dissection-menu-section-size) slots.")
  '(0 1)
  (letrec ((walk
            (case-lambda
              ((dissection)
               (walk dissection (dissection-menu-section-size)))
              ((dissection slot-count)
               (let ((menu (dissection-menu dissection)))
                 (shift-dissection-menu!  menu slot-count)
                 (display-dissection-menu menu
                   (dissection-outport dissection)))))))
    walk))

(define-dissection-command 'select '(s)
  "Selects a component of the focus object to dissect."
  "<index> [<deep-index> ...]"
  '("Selects the INDEX'th slot in the focus object to dissect next."
    "INDEX must be a valid index into the focus object, as shown by"
    "the menu.  If more than one index is passed, it is as if the"
    "select command were applied multiple times, to each successive"
    "index.")
  -2
  (case-lambda
    ((dissection index)
     (dissection-select1 dissection index))
    ((dissection index . indices)
     (dissection-select2+ dissection (cons index indices)))))
