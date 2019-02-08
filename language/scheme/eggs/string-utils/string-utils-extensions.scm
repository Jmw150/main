;;;; string-utils-extensions.scm
;;;; Kon Lovett, Feb '18

(module string-utils-extensions

(;export
  string-copy-over!
  string-copy*
  string-count*
  string-any* string-every*)

(import scheme chicken)
(use
  (only data-structures o)
  (only srfi-1 reduce)
  (only utf8 substring make-string string-length string-ref string-set!)
  (only utf8-srfi-13 string-count string-any string-every))

;;

(define-type char*-predicate (#!rest char --> boolean))

;;

(define (min-string-length strs)
  (reduce fxmin 0 (map string-length strs)) )

(define (strings-ref strs idx)
  (map (cut string-ref <> idx) strs) )

;;

(: string-copy-over! (string string #!optional fixnum fixnum -> string))
;
(define (string-copy-over! from to #!optional (start 0) (end (string-length from)))
  (unless (fx<= end (string-length to))
    (error 'string-copy-over "destination string is too short") )
  (do ((idx start (fx+ 1 idx)))
      ((fx>= idx end) to)
    (string-set! to idx (string-ref from idx)) ) )

(: string-copy* (string #!optional fixnum fixnum char -> string))
;
(define (string-copy* str #!optional (start 0) (end (string-length str)) (fill #\space))
  (unless (fx<= start end)
    (error 'string-copy* "start > end" start end) )
  (let* (
    (tot (fx- end start))
    (end (fxmin end (string-length str)))
    (len (fx- end start))
    (str (substring str start end)) )
    (string-append str (make-string (fx- tot len) fill)) ) )

(: string-count* (char*-predicate #!rest string -> fixnum))
;
(define (string-count* pred? . strs)
  (if (null? (cdr strs))
    (string-count (car strs) pred?)
    (let (
      (start 0)
      (end (min-string-length strs))
      (cnt 0) )
      (do ((idx start (fx+ 1 idx)))
           ((fx>= idx end) cnt)
        (when (apply pred? (strings-ref strs idx))
          (set! cnt (fx+ 1 cnt))) ) ) ) )

(: string-any* (char*-predicate #!rest string -> (or boolean char)))
;
(define (string-any* pred? . strs)
  (if (null? (cdr strs))
    (string-any (car strs) pred?)
    (let (
      (start 0)
      (end (min-string-length strs)) )
      (let loop ((idx start))
        (and
          (fx> end idx)
          (or
            (apply pred? (strings-ref strs idx))
            (loop (fx+ 1 idx))) ) ) ) ) )

(: string-every* (char*-predicate #!rest string -> (or boolean char)))
;
(define (string-every* pred? . strs)
  (if (null? (cdr strs))
    (string-every (car strs) pred?)
    (let (
      (start 0)
      (end (min-string-length strs)) )
      (let loop ((idx start) (prev #t))
        (if (fx<= end idx)
          prev
          (let ((ret (apply pred? (strings-ref strs idx))))
            (and ret (loop (fx+ 1 idx) ret)) ) ) ) ) ) )

) ;module string-utils-extensions
