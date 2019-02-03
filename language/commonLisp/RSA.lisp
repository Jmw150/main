
;created by: Jordan Winkler

;encryption: 
;    public encryption key: (n,k)
;    computation: M^k ≡ r (mod n)
;    k : 1 < k < phi(n), gcd(k, phi(n)) = 1
;    n : n = pq

;decryption:
;    private decryption key: (p, q, j)
;    computation: r^j ≡ M (mod n)
;    j : 1 < j < phi(n), kj = 1 (mod phi(n))

(format t "type a number -> ")
(setq *M* (read))

(setq *prime1* 7)
(setq *prime2* 13)
(setq *n* (* *prime1* *prime2*))
(setq *k* 5)

(setq *j* 29)


(setq *r* (mod (expt *M* *k*) *n* )) ;encrypt
(print *r*)

(print (mod (expt *r* *j*) (* *prime1* *prime2*))) ;decrypt
