(use simple-graphics)
(use miscmacros)

(define (curve direction angle radius)
  (let ((delta (/ radius angle 0.63104805627394)))
   (dotimes (x angle)
            (forward delta)
            (direction 1))))

(define (spiral spins radius-per-spin)
  (let ((delta (/ radius-per-spin 205.7409)))
   (dotimes (x (* 36 spins))
            (forward (* x delta))
            (right 10))))


(dotimes (x 10) (spiral x 1))

(define (house)
  (adventure
   (forward 5)
   (left 90)
   (forward 1)
   (right 135)
   (forward (* (sqrt 2) 3.5))
   (right 90)
   (forward (* (sqrt 2) 3.5))
   (right 135)
   (forward 1)
   (left 90)
   (forward 5)
   (right 90)
   (forward 5)
))