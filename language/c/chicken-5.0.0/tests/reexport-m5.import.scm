;;;; reexport-m5.import.scm - GENERATED BY CHICKEN 5.0.0 -*- Scheme -*-

(scheme#eval '(import-syntax scheme))
(##sys#register-compiled-module
  'reexport-m5
  'reexport-m5
  (scheme#list)
  '()
  (scheme#list
    (scheme#cons 's2 (syntax-rules () ((_) (display 1))))
    (scheme#cons 's1 (syntax-rules () ((_) (s2)))))
  (scheme#list))

;; END OF FILE
