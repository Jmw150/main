;;
;;
;; Chicken Scheme bindings for the BVSPIS package (Boundary-Valued
;; Shape-Preserving Interpolating Splines).
;; [Algorithm 770 from ACM Transactions on Mathematical Software (TOMS)].
;;
;; Chicken Scheme bindings created by Ivan Raikov.
;;
;;  The BVSPIS package is copyrighted by the Association for Computing
;;  Machinery (ACM) and subject to the ACM Software License Agreement:
;;
;;  http://www.acm.org/publications/policies/softwarecrnotice
;; 

(module bvsp-spline

	(compute evaluate)

	(import scheme chicken)
	(import srfi-4 foreign)
	(require-extension lolevel)


(foreign-declare #<<EOF
extern void dbvssc_ (double*,double*,
                     int*,int*,int*,int*,
		     double*,double*,double*,double*,
		     int*,double*,
		     double (double*),double (double*),double (double*),double (double*),
		     int*,int*,int*,
		     double*,double*,
		     int*,double*,int*);
EOF
)

(foreign-declare #<<EOF
extern void dbvsse_ (double*,double*,
                     int*,int*,int*,
		     double*,int*,
		     int*,int*,int*,int*,
		     int*,
		     double*,double*,
		     double*,double*,double*,
		     int*,double*,int*);
EOF
)
	     


(define f:dbvssc
  (foreign-lambda* int 
		   ((f64vector x) (f64vector y)
		    (int np) (int n) (int k)  (int opt)
		    (double d0) (double dnp) (double d20) (double d2np)
		    (s32vector constr) (double eps)
		    (int kmax) (int maxstp) 
		    (f64vector d) (f64vector d2)
		    (s32vector diagn) (f64vector work) (int nwork))
#<<EOF
   int errc;
   errc = 0; 
   dbvssc_(x,y,&np,&n,&k,&opt,&d0,&dnp,&d20,&d2np,constr,&eps,beta_cb,
           betainv_cb,rho_cb,rhoinv_cb,&kmax,&maxstp,&errc,d,d2,diagn,
           work,&nwork);
   C_return(errc);
EOF
))



(define f:dbvsse
  (foreign-lambda* int
		   ((f64vector x) (f64vector y)
		    (int np) (int n) (int k) (f64vector xtab)
		    (int ntab) (int sbopt) (int y0opt) (int y1opt) (int y2opt)
		    (int errc) (f64vector d) (f64vector d2) 
		    (f64vector y0tab) (f64vector y1tab) (f64vector y2tab)
		    (f64vector work) (int nwork)
		    )
#<<EOF
   int erre;
   erre = 0;
   dbvsse_(x,y,&np,&n,&k,xtab,&ntab,&sbopt,&y0opt,&y1opt,&y2opt,&errc,d,d2,
           y0tab,y1tab,y2tab,&erre,work,&nwork);
   C_return(erre);
EOF
))
				 
(define beta-global (make-parameter (lambda (x) 0.0)))
(define-external (beta_cb ((c-pointer double) x)) double
  ((beta-global) (pointer-f64-ref x)))

				 
(define betainv-global (make-parameter (lambda (x) 0.0)))
(define-external (betainv_cb ((c-pointer double) x)) double
  ((betainv-global) (pointer-f64-ref x)))

				 
(define rho-global (make-parameter (lambda (x) 0.0)))
(define-external (rho_cb ((c-pointer double) x)) double
  ((rho-global) (pointer-f64-ref x)))

				 
(define rhoinv-global (make-parameter (lambda (x) 0.0)))
(define-external (rhoinv_cb ((c-pointer double) x)) double
  ((rhoinv-global) (pointer-f64-ref x)))


(define (compute* n k x y p q r d0 dnp d20 d2np constr eps beta betainv rho rhoinv kmax maxstp d d2) 

  (define c-assigns1
    (foreign-safe-lambda* scheme-object ((int n) (int np) (int p) (int q) (int r))
#<<EOF
    C_word *ptr; C_word result;
    int opt; int nwork;
    int comm; int part;

    opt = 0; nwork = 0;
    comm = 5; part = 2;

    opt = p*100+q*10+r;
    nwork = comm+(part+7)*np+(n*(n+11))/2+9;

    ptr = C_alloc (C_SIZEOF_LIST(2));
    result = C_list(&ptr, 2, C_fix(opt), C_fix(nwork));

    C_return(result);
EOF
))
  (let (( np  (f64vector-length x)))

    (assert (>= np 2))
    (assert (= np (f64vector-length y)))
    (assert (or (and (= r 4) (= np (s32vector-length constr))) (not constr)))
    (assert (>= n 3))
    (assert (and (or (= k 1) (= k 2)) (>= n (* 3 k))))

    (assert (and (and (>= p 1) (<= p 4))
		 (and (>= q 1) (<= q 3))
		 (and (>= r 0) (<= q 4))
		 (not (and (= r 0) (= p 1)))))

    (assert (or (and (= q 3) (number? d0)) (not d0)))
    (assert (or (and (= q 3) (number? dnp)) (not dnp)))
    (assert (or (and (= q 3) (= k 2) (number? d20)) (not d20)))
    (assert (or (and (= q 3) (= k 2) (number? d2np)) (not d2np)))

    (assert (or (and (= q 2) (integer? kmax)) (not kmax)))
    (assert (or (and (= q 2) (integer? maxstp)) (not maxstp)))

    (assert (or (and (= q 2) (procedure? beta)) (not beta)))
    (assert (or (and (= q 2) (procedure? betainv)) (not betainv)))
    (assert (or (and (= q 2) (= k 2) (procedure? rho)) (not rho)))
    (assert (or (and (= q 2) (= k 2) (procedure? rhoinv)) (not rhoinv)))
 
    (assert (or (and (= p 4) (= np (f64vector-length d))) (not d)))

    (let* ((opt.nwork (c-assigns1 n np p q r))
	   (opt (car opt.nwork))
	   (nwork (cadr opt.nwork)))
      

      (let ((work  (make-f64vector nwork 0.0))
	    (d     (or d (make-f64vector np 0.0)))
	    (d2    (make-f64vector np 0.0))
	    (diagn (make-s32vector np 0)))
	
	(if beta (beta-global beta))
	(if betainv (betainv-global betainv))
	(if rho (rho-global rho))
	(if rhoinv (rhoinv-global rho))

	(let ((errc (f:dbvssc x y (- np 1) n k opt 
			      (or d0 0.0) (or dnp 0.0) (or d20 0.0) (or d2np 0.0)
			      (or constr (make-s32vector 0)) eps (or kmax 0) (or maxstp 0)
			      d d2 diagn work nwork)))
	
	  (values  d d2 constr errc diagn))
		  
	))
    ))


(define (compute n k x y #!key 
		 (shape-constraint 'none)
		 (boundary-condition 'none)
		 (derivative-computation 'order2)
		 (d0 #f) (dnp #f) (d20 #f) (d2np #f) (eps 1e-4)
		 (constr #f) (beta #f) (betainv #f) (rho #f) (rhoinv #f)
		 (kmax #f) (maxstp #f)
		 (d #f) (d2 #f) )
		 
  (let ((r (case shape-constraint
	     ((none) 0)
	     ((monotonicity) 1)
	     ((convexity)    2)
	     ((monotonicity+convexity)    3)
	     ((local) 4)
	     (else (error 'compute "unknown constraint type" 
			  shape-constraint))))
	(q (case boundary-condition
	     ((none) 1)
	     ((non-separable) 2)
	     ((separable)     3)
	     (else (error 'compute "unknown boundary condition type" 
			  boundary-condition))))
	(p (case derivative-computation
	     ((order1)  1)
	     ((order2)  2)
	     ((order3)  3)
	     ((classic) 4)
	     (else (error 'compute "unknown derivative computation type" 
			  derivative-computation)))))

    (compute* n k x y p q r d0 dnp d20 d2np constr eps beta betainv rho rhoinv kmax maxstp d d2) ))
   
	     
(define (evaluate n k x y d d2 xtab errc #!key 
		  (search-method 'binary)
		  (derivatives 2)
		  )

  (define c-assigns2
    (foreign-safe-lambda* scheme-object ((int n) (int np) )
#<<EOF
    int nwork;
    int comm; int part;

    nwork = 0;
    comm = 5; part = 2;

    nwork = comm+(part+7)*np+(n*(n+11))/2+9;

    C_return(C_fix(nwork));
EOF
))

  (let ((np (f64vector-length x))
	(ntab (f64vector-length xtab))
	(sbopt (case search-method
		 ((sequential) 1)
		 ((binary)     2)
		 (else (error 'evaluate "unknown search method" search-method))))
	(y0opt 1)
	(y1opt (if (>= derivatives 1) 1 0))
	(y2opt (if (>= derivatives 2) 1 0)))

    (let ((nwork (c-assigns2 n np))) 

      (let ((y0tab (make-f64vector ntab 0.0))
	    (y1tab (if (>= derivatives 1) (make-f64vector ntab 0.0) (make-f64vector 0)))
	    (y2tab (if (>= derivatives 1) (make-f64vector ntab 0.0) (make-f64vector 0)))
	    (work (make-f64vector nwork 0.0)))
	
	(let ((res (f:dbvsse x y (- np 1) n k xtab ntab sbopt y0opt y1opt y2opt
			     errc d d2 y0tab y1tab y2tab work nwork)))
	  
	  (values y0tab y1tab y2tab res)
	  )))
    ))
	

)
