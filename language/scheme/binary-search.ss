(define (binary-search value vector)
  (let helper ((low 0)
               (high (- (vector-length vector)
