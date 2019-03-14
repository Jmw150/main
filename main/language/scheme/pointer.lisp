
(let ((a (list 1 2 3 4)))
  (symbol-macrolet ((b (car (cdr a))))
    (format t "~&Old: ~S~%" b)
    (setf b 'hello)
    (format t "~&New: ~S~%" b)))
