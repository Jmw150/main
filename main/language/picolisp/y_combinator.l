# connecting lambda calc to general recursion
(de Y (F)
   (let X (curry (F) (Y) (F (curry (Y) @ (pass (Y Y)))))
      (X X) ) )

# test run
(de fact (F)
   (curry (F) (N)
      (if (=0 N)
         1
         (* N (F (dec N))) ) ) )


(prin ((Y fact) 6))
