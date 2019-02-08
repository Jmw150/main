(define (make-list length object)
  (if (= length 0)
      (list)
      (cons object (make-list (- length 1) object))))
 
(define (list-fill! list object)
  (if (not (null? list))
      (begin (set-car! list object) (list-fill! (cdr list) object))))
 
(define (list-set! list element object)
  (if (= element 1)
      (set-car! list object)
      (list-set! (cdr list) (- element 1) object)))
 
(define (list-get list element)
  (if (= element 1)
      (car list)
      (list-get (cdr list) (- element 1))))

(define (make-image columns rows)
  (if (= rows 0)
      (list)
      (cons (make-list columns (list)) (make-image columns (- rows 1)))))
 
(define (image-fill! image colour)
  (if (not (null? image))
      (begin (list-fill! (car image) colour) (image-fill! (cdr image) colour))))
 
(define (image-set! image column row colour)
  (list-set! (list-get image row) column colour))
 
(define (image-get image column row)
  (list-get (list-get image row) column))

(define *black* (list   0   0   0))
(define *white* (list 255 255 255))
(define *red*   (list 255   0   0))
(define *green* (list   0 255   0))
(define *blue*  (list   0   0 255))

(define image (make-image 3 2))
(image-fill! image *black*)
(image-set! image 2 1 *blue*)
(display image)
(newline)
