(define *eof-object* (read (open-input-string "")))
(define (eof-object) *eof-object*)
(define (bytevector-u8-ref bv i) (u8vector-ref bv i))
(define (bytevector-length bv) (u8vector-length bv))
(define (truncate/ n1 n2) (values (quotient n1 n2) (remainder n1 n2)))
