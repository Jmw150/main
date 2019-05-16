; A library of logical constructions using various books


; If you want to use chicken scheme, uncomment this
;(require-library numbers)
(require-library r7rs)

;;; ignore these, goto set-stuff
; clean up syntax
(define true  #t)
(define false #f)
(define (= a b) (equal? a b))
(define (!= a b) (not (= a b)))
(define (first x) (car x))
(define (rest x) (cdr x))
(define nil '())
(define (mod a b) (modulo a b)) 
; special case of two primitives is, by far, the intuitive common case
(define-syntax macro
  (syntax-rules ()
    ((macro (id . pattern) template)
     (define-syntax id
       (syntax-rules ()
         ((id . pattern) template))))))

(define-syntax defun
  (syntax-rules ()
    ((defun function (args ...) body ...)
     (define (function args ...) body ...))))
     
; while loop
(define-syntax while
  (syntax-rules ()
    ((_ condition . body)
     (let loop () (cond (condition (begin . body) (loop)))))))

(define (index lst ndex)
  "get index of a list, python like style"
  (if (or (= 1 (length lst)) 
          (= 0 ndex))
      (car lst)
  (if (= 0 (length lst))
      '()
      (index (cdr lst) 
             (mod (- ndex 1) (length lst))))))

(define (sublist lst start end) 
  "sublist list start end, like list[start:end], python like, currently requires all args"
  (define (cut-front lst start)
    (if (or (= 1 (length lst)) (= 0 start))
        lst
      (if (= 0 (length lst))
          nil
        (cut-front (cdr lst) 
                 (mod (- start 1) (length lst))))))
  (define (cut-back lst end) 
    (define (collect collection index lst)
      (if (= 0 index)
          collection
          (collect (append collection (list (car lst))) (mod (- index 1) (length lst)) (cdr lst))))
    (collect '() end lst))
  (cut-back (cut-front lst start) end))

;;; logics
;Axioms of propositional calculus
;Axiom Simp	ax-1	⊢ (𝜑 → (𝜓 → 𝜑))
;Axiom Frege	ax-2	⊢ ((𝜑 → (𝜓 → 𝜒)) → ((𝜑 → 𝜓) → (𝜑 → 𝜒)))
;Axiom Transp	ax-3	⊢ ((¬ 𝜑 → ¬ 𝜓) → (𝜓 → 𝜑))
;Rule of Modus Ponens	ax-mp	⊢ 𝜑   &   ⊢ (𝜑 → 𝜓)   ⇒    ⊢ 𝜓

; Axioms of predicate calculus with equality - Tarski's S2
;Rule of Generalization	ax-gen	⊢ 𝜑    ⇒    ⊢ ∀𝑥𝜑
;Quantified Implication	ax-4	⊢ (∀𝑥(𝜑 → 𝜓) → (∀𝑥𝜑 → ∀𝑥𝜓))
;Distinctness	ax-5	⊢ (𝜑 → ∀𝑥𝜑), where 𝑥 does not occur in 𝜑
;Existence	ax-6	⊢ ¬ ∀𝑥 ¬ 𝑥 = 𝑦
;Equality	ax-7	⊢ (𝑥 = 𝑦 → (𝑥 = 𝑧 → 𝑦 = 𝑧))
;Left Equality for Binary Predicate	ax-8	⊢ (𝑥 = 𝑦 → (𝑥 ∈ 𝑧 → 𝑦 ∈ 𝑧))
;Right Equality for Binary Predicate	ax-9	⊢ (𝑥 = 𝑦 → (𝑧 ∈ 𝑥 → 𝑧 ∈ 𝑦))


;Axioms of predicate calculus with equality - auxiliary
;Quantified Negation	ax-10	⊢ (¬ ∀𝑥𝜑 → ∀𝑥 ¬ ∀𝑥𝜑)
;Quantifier Commutation	ax-11	⊢ (∀𝑥∀𝑦𝜑 → ∀𝑦∀𝑥𝜑)
;Substitution	ax-12	⊢ (𝑥 = 𝑦 → (∀𝑦𝜑 → ∀𝑥(𝑥 = 𝑦 → 𝜑)))
;Quantified Equality	ax-13	⊢ (¬ 𝑥 = 𝑦 → (𝑦 = 𝑧 → ∀𝑥 𝑦 = 𝑧))

;;; naive set theory stuff:

; member of: x \in A
(define (in? x A)
  (if (= 0 (length A)) false
  (if (= x (first A)) true
  (in? x (rest A)))))
        
 ; remove redundant elements
'(define (set a) 
    (define a0 a)
    (define (pop-equal 
    (if (equal? (car a0) (cadr a))))))
        ; remove a
        
    
        (display "hello\n")
  
; union

; intersection
'(define (intersection A B)
  (define AB '())
  (define U (append A B)) ; U for universe
  (while (< 0 (length U))
         (define x (car U)) ; pop
         (define U (cdr U))
         (if (and (in? x B) (in? x A)) ;; would like to reduce these functions to only this kind of definition
             (set! AB (append x AB)))))
; set builder
; subset



;;; zfc
; axiom of extensionality
; (∀𝑧(𝑧 ∈ 𝑥 ↔ 𝑧 ∈ 𝑦) → 𝑥 = 𝑦)
; Axiom of Replacement	
; (∀𝑤∃𝑦∀𝑧(∀𝑦𝜑 → 𝑧 = 𝑦) → ∃𝑦∀𝑧(𝑧 ∈ 𝑦 ↔ ∃𝑤(𝑤 ∈ 𝑥 ∧ ∀𝑦𝜑)))
; Axiom of Power Sets	
; ∃𝑦∀𝑧(∀𝑤(𝑤 ∈ 𝑧 → 𝑤 ∈ 𝑥) → 𝑧 ∈ 𝑦)
; Axiom of Union
; ∃𝑦∀𝑧(∃𝑤(𝑧 ∈ 𝑤 ∧ 𝑤 ∈ 𝑥) → 𝑧 ∈ 𝑦)
; Axiom of Regularity (Foundation)	
; (∃𝑦𝑦 ∈ 𝑥 → ∃𝑦(𝑦 ∈ 𝑥 ∧ ∀𝑧(𝑧 ∈ 𝑦 → ¬ 𝑧 ∈ 𝑥)))
; Axiom of Infinity	
; ∃𝑦(𝑥 ∈ 𝑦 ∧ ∀𝑧(𝑧 ∈ 𝑦 → ∃𝑤(𝑧 ∈ 𝑤 ∧ 𝑤 ∈ 𝑦)))
; Axiom of Choice
; ∃𝑦∀𝑧∀𝑤((𝑧 ∈ 𝑤 ∧ 𝑤 ∈ 𝑥) → ∃𝑣∀𝑢(∃𝑡((𝑢 ∈ 𝑤 ∧ 𝑤 ∈ 𝑡) ∧ (𝑢 ∈ 𝑡 ∧ 𝑡 ∈ 𝑦)) ↔ 𝑢 = 𝑣))

; axiom of extensionality

;; actual
'(for-all x (for-all y (-> 
                (for-all z (<-> (in z x) (in z y)))
                (for-all w (<-> (in x w) (in y w))))))

; prettier
'(for-all x (for-all y (for-all z 
    (-> (<-> (in z x) (in z y)) (= x y)))))
; axiom of regularity (axiom of foundation)

'(for-all x (-> 
     (exists a (in a x))
     (exists y (and (in y x) 
                    (not (exists z (and (in z y) (in z x))))))))

; prettier
'(for-all x (-> (not (= x null)) (exists y (and (in y x) (= (intersection x y) null)))))


;; tensor

; t::tensor \in V::vector-space *::tensor-product W::vector-space

; tensor product

; R::commutative-ring
; E_1,...,E_n,F are modules
; f: E_1 x ... x E_n -> F, the module of n-multilinear maps

; multi-linear map:: a map which is right linear
; modules:: 

; 1.1 ok
; 1.2 check manually
; 1.3 a ~ b := 9 - b mod 9
; 1.4 2^|{1,2,3}| via powerset
; 1.5 a ~ b := if a=1
