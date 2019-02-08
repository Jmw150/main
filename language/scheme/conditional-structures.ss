(display
  (if (> 1 2)
      "yes"
      "no"))
(newline)
(display
  (if (> 1 2)
      (- 1 2)))
(newline)

(display
  (cond ((> 1 2) "greater")
        ((< 1 2) "less")))
(newline)
(display
  (cond ((> 1 1) "greater")
        ((< 1 1) "less")
        (else "equal")))
(newline)

(display
  (case (* 2 3)
    ((2 3 5 7) "prime")
    ((1 4 6 8 9) "composite")))
(newline)
(display
  (case (car (list c d))
    ((a e i o u) "vowel")
    ((w y) "semivowel")
    (else "consonant")))
(newline)
