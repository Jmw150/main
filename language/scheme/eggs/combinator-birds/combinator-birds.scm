;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
;;; The combinator birds of Raymond Smullyan's "To Mock a Mockingbird"
;;; (Knopf, 1985) ISBN 0-394-53491-3.
;;;
;;; This software is written by Evan Hanson <evhan@foldling.org> and
;;; placed in the public domain. All warranties are disclaimed.
;;;
;;; Note that some birds (Θ, Ω, P, ...) are excluded, either because
;;; their definitions are impossible or because the author hasn't gotten
;;; around to it. Contributions and corrections are welcome at
;;; <evhan@foldling.org>.
;;;

;; When called with no arguments, a bird returns its name and
;; expression.
(define-syntax define-bird
  (syntax-rules ()
    ((_ <name> <bird>)
     (define <name>
       (let ((bird <bird>))
         (lambda args
           (if (null? args)
               (values '<name> '<bird>)
               (apply bird args))))))))

;; Implicit currying.
(define-syntax λ
  (syntax-rules ()
    ((_ (<arg> ...) <body> ...)
     (let ((f (lambda (<arg> ...) <body> ...))
           (len (length '(<arg> ...))))
       (let loop ((i 0) (lst '()))
         (lambda args
           (let ((i (+ (length args) i))
                 (lst (append lst args)))
             (if (< i len)
                 (loop i lst)
                 (apply f lst)))))))))

;; "To Mock a Mockingbird" pp. 73-74.
(define-bird mockingbird   (λ (x) (x x)))

;; "Hopeless Egocentricity" pp. 76-78.
(define-bird kestrel       (λ (x y) x))

;; "Identity Birds" pp. 78-80.
(define-bird identity-bird (λ (x) x))

;; "Larks" pp. 80-81.
(define-bird lark          (λ (x y) (x (y y))))

;; "Is There a Sage Bird?" pp. 89-92.
;; Unfortunately without a lazy scheme the naive definition here doesn't
;; work. We can fake it with a proper Y for call-by-value, though
;; obviously the various derivations given in the text (SLL, BML, etc.)
;; still won't work.
(define-bird sage-bird
  (λ (x) ((λ (y) (x (λ (x) ((y y) x))))
          (λ (y) (x (λ (x) ((y y) x)))))))

;; "Bluebirds" pp. 95-96.
(define-bird bluebird      (λ (x y z) (x (y z))))

;; "Some Derivatives of the Bluebird" pp. 96-98.
(define-bird dove          (λ (x y z w) ((x y) (z w))))
(define-bird blackbird     (λ (x y z w) (x ((y z) w))))
(define-bird eagle         (λ (x y z w v) ((x y) ((z w) v))))
(define-bird bunting       (λ (x y z w v) (x (((y z) w) v))))
(define-bird dickcissel    (λ (x y z w v) (((x y) z) (w v))))
(define-bird becard        (λ (x y z w) (x (y (z w)))))
(define-bird dovekies      (λ (x y z w v) ((x (y z)) (w v))))
(define-bird bald-eagle    (λ (x y z w v u t)
                             ((x ((y z) w)) ((v u) t))))

;; "Some Other Birds" pp. 99-101.
(define-bird warbler       (λ (x y) ((x y) y)))
(define-bird cardinal      (λ (x y z) ((x z) y)))
(define-bird thrush        (λ (x y) (y x)))

;; "Bluebirds and Thrushes" pp. 101-103.
(define-bird robin         (λ (x y z) ((y z) x)))
(define-bird finch         (λ (x y z) ((z y) x)))
(define-bird vireo         (λ (x y z) ((z x) y)))

;; "Some Relatives" pp. 103-105.
(define-bird cardinal*     (λ (x y z w) (((x y) w) z)))
(define-bird robin*        (λ (x y z w) (((x z) w) y)))
(define-bird finch*        (λ (x y z w) (((x w) z) y)))
(define-bird vireo*        (λ (x y z w) (((x w) z) y)))
(define-bird cardinal**    (λ (x y z w v) ((((x y) z) w) v)))
(define-bird robin**       (λ (x y z w v) ((((x y) w) v) z)))
(define-bird finch**       (λ (x y z w v) ((((x y) v) w) z)))
(define-bird vireo**       (λ (x y z w v) ((((x y) z) w) v)))

;; "Queer Birds" pp. 105-108.
(define-bird queer-bird       (λ (x y z) (y (x z))))
(define-bird quixotic-bird    (λ (x y z) (x (z y))))
(define-bird quizzical-bird   (λ (x y z) (y (z x))))
(define-bird quirky-bird      (λ (x y z) (z (x y))))
(define-bird quacky-bird      (λ (x y z) (z (y x))))
(define-bird goldfinch        (λ (x y z w) ((x w) (y z))))

;; "More on Mockingbirds" pp. 117-118.
(define-bird double-mockingbird  (λ (x y) ((x y) (x y))))

;; "Warblers" pp. 118-120.
(define-bird converse-warbler (λ (x y) ((y x) x)))
(define-bird warbler*         (λ (x y z) (((x y) z) z)))
(define-bird warbler**        (λ (x y z w) ((((x y) z) w) w)))
(define-bird hummingbird      (λ (x y z) (((x y) z) y)))

;; "Starlings" pp. 120-121.
(define-bird starling         (λ (x y z) ((x z) (y z))))

;; "Starlings in Action" pp. 121-125.
(define-bird phoenix          (λ (x y z w) ((x (y w)) (z w))))
(define-bird psi-bird         (λ (x y z w) ((x (y z)) (y w))))

;; "The Turing Bird" pp. 132-133.
(define-bird turing-bird      (λ (x y) (y ((x x) y))))

;; "Owls" p. 133.
(define-bird owl              (λ (x y) (y (x y))))

;; "Aristocratic Birds" pp. 179-181.
(define-bird jay              (λ (x y z w) ((x y) ((x w) z))))

;; Aliases.
(define oracle-bird sage-bird)
(define idiot-bird identity-bird)

;; A few birds and aliases not necessarily given in the book but
;; discussed in David Keenan's http://dkeenan.com/Lambda/
(define-bird identity-bird*   (λ (x y) (x y)))
(define-bird kite             (λ (x y) y))
(define-bird konstant-mocker  (λ (x y) (y y)))
(define-bird crossed-konstant-mocker (λ (x y) (x x)))
(define idiot-bird* identity-bird*)
(define pairing vireo)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
;;; The single-letter names of the various combinators, as given in
;;; "Who's Who Among The Birds", pp. 244-246.
;;;

(define B bluebird)
(define C cardinal)
(define D dove)
(define E eagle)
(define F finch)
(define G goldfinch)
(define H hummingbird)
(define I identity-bird)
(define J jay)
(define K kestrel)
(define L lark)
(define M mockingbird)
;; N is used in "Curry's Lively Bird Forest" pp. 143-147.
(define O owl)
;; P is used in "Russell's Forest" pp. 151-153.
(define Q queer-bird)
(define R robin)
(define S starling)
(define T thrush)
(define U turing-bird)
(define V vireo)
(define W warbler)
;; X is used in "The Master Forest" pp. 167-178.
(define Y sage-bird)
