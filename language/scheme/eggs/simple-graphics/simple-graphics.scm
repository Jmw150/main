(module simple-graphics
        (forward forwards turn right left backward backwards
         pen-up pen-down home clear
         (adventure begin-adventure! end-adventure!)
         save goto go-to heading
         red green blue orange yellow brown grey purple turquoise black
         lighter darker
         faster slower speed
         lost)

;; TODO:
;; Display a turtle cursor sprite

(import chicken scheme)
(use doodle)
(use miscmacros)
(use parley)
(use posix)
(use srfi-1)

(define +width+ 640)
(define +height+ 480)

(define *initialised* #f)

(define *x* #f)
(define *y* #f)

;; Standard unit-of-motion vector.
;; The magnitude of this vector represents the current scale factor.
;; The direction of this vector represents the current turtle direction.
;; The default sets the scale factor to 10 and the turtle pointing upwards.
(define *dx* #f)
(define *dy* #f)

(define *colour* #f)
(define *pen-down?* #f)

(define *saved-states* '())

(define *adventure-depth* 0)

(define *name* #f)

(define (reset-position!)
  (set! *x* (/ +width+ 2.0))
  (set! *y* (/ +height+ 2.0))
  (set! *dx* 0.0)
  (set! *dy* -10.0)
  (set! *colour* solid-black)
  (set! *pen-down?* #t)
  (set! *saved-states* '())
  (set! *adventure-depth* 0))

(define (reset!)
  (reset-position!)
  (clear-screen)
  (show!)
  (void))

(define (finish-operation!)
  (when (zero? *adventure-depth*)
   (when (or
          (< *x* 0)
          (< *y* 0)
          (> *x* +width+)
          (> *y* +height+))
         (printf "WARNING: The turtle is off the screen so you won't see much!\n")
         (printf "SUGGESTION: Type (home) to take the turtle back to the middle\n")))
  (void))

(define (ensure-initialised!)
  (unless *initialised*
          (new-doodle title: "Simple Graphics"
                      background: solid-white)
          (run-event-loop run-in-background: #t minimum-wait: 10)
          (reset!)
          (set! *initialised* #t))
  (void))

(define (home)
  (ensure-initialised!)
  (reset-position!)
  (finish-operation!))

(define (clear)
  (ensure-initialised!)
  (reset!)
  (finish-operation!))

(define (forward dist)
  (ensure-initialised!)
  (let ((new-x (+ *x* (* dist *dx*)))
        (new-y (+ *y* (* dist *dy*))))
    (when *pen-down?*
          (draw-line *x* *y* new-x new-y color: *colour*)
          (show!))
    (set! *x* new-x)
    (set! *y* new-y))
  (finish-operation!))

(define forwards forward)

(define (backward dist)
  (forward (- dist)))

(define backwards backward)

(define pi 3.1415926535897932384626433)

(define pi/180 (/ pi 180))

(define (degrees->radians angle)
  (* pi/180 angle))

(define (right #!optional (angle 90))
  ;; Rotate the *dx* / *dy* vector right by the given angle, in degrees
  (ensure-initialised!)
  (let ((cos-angle (cos (degrees->radians angle)))
        (sin-angle (sin (degrees->radians angle))))
   (let ((new-dx (- (* *dx* cos-angle) (* *dy* sin-angle)))
         (new-dy (+ (* *dx* sin-angle) (* *dy* cos-angle))))
     (set! *dx* new-dx)
     (set! *dy* new-dy)))
  (finish-operation!))

(define (left #!optional (angle 90))
  (right (- angle)))

(define (turn direction angle)
  (direction angle))

(define (pen-up)
  (ensure-initialised!)
  (set! *pen-down?* #f)
  (finish-operation!))

(define (pen-down)
  (ensure-initialised!)
  (set! *pen-down?* #t)
  (finish-operation!))

(define (lost)
  (printf "X: ~A Y: ~A\n" *x* *y*)
  (printf "DX: ~A DY: ~A\n" *dx* *dy*))

(define-record-type graphics-state
  (make-graphics-state x y dx dy colour pen-down?)
  graphics-state?
  (x graphics-state-x)
  (y graphics-state-y)
  (dx graphics-state-dx)
  (dy graphics-state-dy)
  (colour graphics-state-colour)
  (pen-down? graphics-state-pen-down?))

(define (current-state)
  (make-graphics-state *x* *y* *dx* *dy* *colour* *pen-down?*))

(define (set-state! s)
  (set! *x* (graphics-state-x s))
  (set! *y* (graphics-state-y s))
  (set! *dx* (graphics-state-dx s))
  (set! *dy* (graphics-state-dy s))
  (set! *colour* (graphics-state-colour s))
  (set! *pen-down?* (graphics-state-pen-down? s)))

(define (push-state!)
  (set! *saved-states*
        (cons (current-state) *saved-states*))
  (void))

(define (pop-state!)
  (set-state! (car *saved-states*))
  (set! *saved-states* (cdr *saved-states*))
  (void))

(define (begin-adventure!)
  (ensure-initialised!)
  (push-state!)
  (inc! *adventure-depth*))

(define (end-adventure!)
  (dec! *adventure-depth*)
  (pop-state!)
  (finish-operation!))

(define-syntax adventure
  (syntax-rules ()
    ((adventure body ...)
     (begin
       (begin-adventure!)
       body ...
       (end-adventure!)))))

(define (save)
  (ensure-initialised!)
  (unless *name*
          (set! *name* (parley "What's your name? ")))
  (let ((filename (sprintf "~A - ~A.png" *name* (seconds->string))))
    (save-screenshot filename)
    (printf "Saved to ~A\n" filename)))

(define-syntax define-colour
  (syntax-rules ()
    ((define-colour X R G B)
     (define (X)
       (ensure-initialised!)
       (set! *colour* (list R G B 1))
       (finish-operation!)))))

(define-colour red 1 0 0)
(define-colour green 0 1 0)
(define-colour blue 0 0 1)
(define-colour yellow 1 1 0)
(define-colour orange 1 0.5 0)
(define-colour brown 0.5 0.25 0)
(define-colour grey 0.5 0.5 0.5)
(define-colour purple 0.8 0 1)
(define-colour turquoise 0 1 1) 
(define-colour black 0 0 0)

(define (lighten sample)
  (/ (+ sample 1.0) 2.0))

(define (darken sample)
  (/ sample 2.0))

(define (colour-delta modifier)
  (let ((r (first *colour*))
        (g (second *colour*))
        (b (third *colour*))
        (a (fourth *colour*)))
    (set! *colour* (list (modifier r) (modifier g) (modifier b) a))))

(define (lighter)
  (colour-delta lighten))

(define (darker)
  (colour-delta darken))

(define (heading angle)
  (ensure-initialised!)
  (let ((cos-angle (cos (degrees->radians (- angle 90))))
        (sin-angle (sin (degrees->radians (- angle 90))))
        (current-magnitude (sqrt (+ (* *dx* *dx*) (* *dy* *dy*)))))
    (set! *dx* (* cos-angle current-magnitude))
    (set! *dy* (* sin-angle current-magnitude)))
  (finish-operation!))

(define (goto x y)
  (ensure-initialised!)
  (set! *x* (+ (/ +width+ 2) x))
  (set! *y* (- (/ +height+ 2) y))
  (finish-operation!))

(define go-to goto)

(define (faster #!optional (factor 2))
  (ensure-initialised!)
  (set! *dx* (* *dx* factor))
  (set! *dy* (* *dy* factor))
  (finish-operation!))

(define (slower #!optional (factor 2))
  (faster (/ 1 factor)))

(define (speed s)
  (ensure-initialised!)
  (let* ((current-magnitude
          (sqrt (+ (* *dx* *dx*) (* *dy* *dy*))))
         (factor (/ (* 10 s) current-magnitude)))
    (set! *dx* (* *dx* factor))
    (set! *dy* (* *dy* factor)))
  (finish-operation!))

)