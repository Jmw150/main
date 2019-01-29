(defun average-arg (&rest L)
  "average-arg 1 ... n
   
   average but for direct arguments instead of passing in a list"
  (let ((result 0) (counter 0))
    (dolist (x L result)
      (setq result (+ result x))
      (setq counter (+ counter 1)))
    (setq result (/ result (float counter)))))

(defun printList (L)
  "print a list"
  (while L
    (princ (car L))
    (princ "\n")
    (setq L (cdr L))))

(defun print-rectangle (x y symbol)
  "Prints a rectangle of variable symbol x by y size."
  (dotimes (y-counter y)
    (dotimes (x-counter x)
      (princ symbol)
      (princ " "))
    (princ "\n")))


