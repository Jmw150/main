/* src.f -- translated by f2c (version 20090411).
   You must link the resulting object file with libf2c:
	on Microsoft Windows system, link with libf2c.lib;
	on Linux or Unix systems, link with .../path/to/libf2c.a -lm
	or, if you install libf2c.a in a standard place, with -lf2c -lm
	-- in that order, at the end of the command line, as in
		cc *.o -lf2c -lm
	Source for libf2c is in /netlib/f2c/libf2c.zip, e.g.,

		http://www.netlib.org/f2c/libf2c.zip
*/

#include "f2c.h"

/* Table of constant values */

static integer c__5 = 5;
static integer c__2 = 2;
static integer c__0 = 0;
static integer c__1 = 1;

/* Subroutine */ int dbvsis_(doublereal *x, doublereal *y, integer *np, 
	integer *n, integer *k, integer *opt, doublereal *d0, doublereal *dnp,
	 doublereal *d20, doublereal *d2np, integer *constr, doublereal *eps, 
	D_fp beta, D_fp betai, D_fp rho, D_fp rhoi, integer *kmax, integer *
	maxstp, doublereal *xtab, integer *ntab, integer *sbopt, integer *
	y0opt, integer *y1opt, integer *y2opt, integer *errc, integer *erre, 
	doublereal *d__, doublereal *d2, integer *diagn, doublereal *y0tab, 
	doublereal *y1tab, doublereal *y2tab, doublereal *work, integer *
	nwork)
{
    extern /* Subroutine */ int dbvssc_(doublereal *, doublereal *, integer *,
	     integer *, integer *, integer *, doublereal *, doublereal *, 
	    doublereal *, doublereal *, integer *, doublereal *, D_fp, D_fp, 
	    D_fp, D_fp, integer *, integer *, integer *, doublereal *, 
	    doublereal *, integer *, doublereal *, integer *), dbvsse_(
	    doublereal *, doublereal *, integer *, integer *, integer *, 
	    doublereal *, integer *, integer *, integer *, integer *, integer 
	    *, integer *, doublereal *, doublereal *, doublereal *, 
	    doublereal *, doublereal *, integer *, doublereal *, integer *);

/*  DBVSIS is merely a support routine which calls DBVSSC and DBVSSE */
/*  for the computation of the needed parameters and for the evaluation */
/*  of a shape-preserving, C(k), k=1,2 , interpolating spline, */
/*  optionally subject to boundary conditions. */
/*  The use of DBVSIS is not recommended when more evaluations of the */
/*  same spline are required; in this case it is better to separately */
/*  call DBVSSC and then DBVSSE repeatedly. */
/*  For an explanation of input and output parameters, the user is */
/*  referred to the comments of DBVSSC and DBVSSE. */
    /* Parameter adjustments */
    --work;

    /* Function Body */
    dbvssc_(x, y, np, n, k, opt, d0, dnp, d20, d2np, constr, eps, (D_fp)beta, 
	    (D_fp)betai, (D_fp)rho, (D_fp)rhoi, kmax, maxstp, errc, d__, d2, 
	    diagn, &work[1], nwork);
    dbvsse_(x, y, np, n, k, xtab, ntab, sbopt, y0opt, y1opt, y2opt, errc, d__,
	     d2, y0tab, y1tab, y2tab, erre, &work[1], nwork);
    return 0;
} /* dbvsis_ */

/*  --------------------------------------------------------------------- */
/* Subroutine */ int dbvssc_(doublereal *x, doublereal *y, integer *np, 
	integer *n, integer *k, integer *opt, doublereal *d0, doublereal *dnp,
	 doublereal *d20, doublereal *d2np, integer *constr, doublereal *eps, 
	D_fp beta, D_fp betai, D_fp rho, D_fp rhoi, integer *kmax, integer *
	maxstp, integer *errc, doublereal *d__, doublereal *d2, integer *
	diagn, doublereal *work, integer *nwork)
{
    static integer i1, i2, i3, i4, i5, i6, i7, i8, i9, i10;
    extern /* Subroutine */ int dbvc_(doublereal *, doublereal *, integer *, 
	    integer *, integer *, integer *, doublereal *, doublereal *, 
	    doublereal *, doublereal *, integer *, doublereal *, integer *, 
	    integer *, doublereal *, integer *, integer *, doublereal *, 
	    doublereal *, doublereal *, doublereal *, D_fp, D_fp, D_fp, D_fp, 
	    doublereal *, doublereal *, integer *, integer *);

/*  ------------------------------------------------- */
/*            Lines 49-549 are comment lines. */
/*            The actual code begins at line 555. */
/*  ------------------------------------------------- */
/*  ABSTRACT: */

/*  DBVSSC is designed to compute the coefficients (first and, if */
/*  appropriate, second derivatives) of a shape-preserving spline, of */
/*  continuity class C(k), k=1,2 , which interpolates a set of data */
/*  points and, if required, satisfies additional boundary conditions. */
/*  DBVSSC furnishes the input parameters for DBVSSE, which, in turn, */
/*  provides to evaluate the spline and its derivatives at a set of */
/*  tabulation points. */

/*  The user is allowed to use the following options: */

/*  - to compute a spline subject to: */
/*        - no constraint, */
/*        - monotonicity constraints, */
/*        - convexity constraints, */
/*        - monotonicity and convexity constraints, */
/*        - one of the above constraints in each subinterval; */

/*  - to impose separable or non-separable boundary conditions on the */
/*    spline, */

/*  - to assign the first derivatives d(i), i=0,1,...,np , in input or to */
/*    compute them from the constraints only or as the best approximation */
/*    to a set of optimal values. Although the final sequence of */
/*    derivatives does in any case satisfy the imposed restrictions on */
/*    the shape, the resulting graphs may exhibit different behaviors. */


/*  REMARK: */

/*  In these comments variable and array names will be denoted with */
/*  capital letters, and their contents with small letters. Moreover: */
/*  .IN.   means belonging to; */
/*  .INT.  stands for intersection. */


/*  The code has the following structure: */

/*         DBVSSC */
/*              DBVC */
/*                   DSTINF */
/*                        DMSK1 */
/*                        DMSK2 */
/*                             DPRJ0 */
/*                             DPRJ1 */
/*                        DTDC */
/*                             DMNMOD */
/*                             DMDIAN */
/*                   DALG3 */
/*                        DPRJ0 */
/*                        DALG1 */
/*                             DPRJ1 */
/*                        DINTRS */
/*                        DTST */
/*                        DFPSVF */
/*                             DSL */
/*                             DALG1D */
/*                                  DPRJ1 */
/*                        DAL2 */
/*                             DPRJ2 */
/*                        DAL2DP */
/*                             DMNIND */
/*                             DPRJ2 */
/*                             DSL */
/*                        DSCDRC */


/*  CALLING SEQUENCE: */

/*       CALL DBVSSC (X,Y,NP,N,K,OPT,D0,DNP,D20,D2NP,CONSTR,EPS,BETA, */
/*    *               BETAI,RHO,RHOI,KMAX,MAXSTP,ERRC,D,D2,DIAGN, */
/*    *               WORK,NWORK) */


/*  INPUT PARAMETERS: */

/*  X       : floating array, of bounds 0:NP, containing the data */
/*            abscissas  x(i), i=0,1,...,np. */
/*            Restriction: x(i).LT.x(i+1), i=0,1,...,np. */
/*  Y       : floating array, of bounds 0:NP, containing the data */
/*            ordinates  y(i), i=0,1,...,np. */
/*  NP      : integer variable, defining the number of interpolation */
/*            points. Restriction: np.GE.2 . */
/*  N       : integer variable, containing the degree of s. */
/*            Restriction: n.GE.3 . */
/*  K       : integer variable, containing the class of continuity of s. */
/*            Restriction:  k.EQ.1  or  k.EQ.2  and  n.GE.3*k . */
/*  OPT     : integer variable, containing a control parameter. It is */
/*            a three-digit decimal of the form  pqr  (that is of */
/*            numerical value  p*100+q*10+r ) where: */
/*            r  controls the constraints on the shape. */
/*            q  controls the boundary conditions and */
/*            p  controls the computation of the derivatives, */
/*            More specifically: */
/*            r=0 (opt=pq0) : no constraint on the shape is required; */
/*            r=1 (opt=pq1) : monotonicity constraints are required; */
/*            r=2 (opt=pq2) : convexity constraints are required; */
/*            r=3 (opt=pq3) : monotonicity and convexity constraints are */
/*                            required; */
/*            r=4 (opt=pq4) : local constraints for any subinterval are */
/*                            supplied by the user (see the description */
/*                            of the array CONSTR); */
/*            q=1 (opt=p1r) : no boundary condition is imposed; */
/*            q=2 (opt=p2r) : non-separable boundary conditions are */
/*                            imposed (see the description of BETA, */
/*                            BETAI, RHO, RHOI); */
/*            q=3 (opt=p3r) : separable boundary conditions are imposed */
/*                            (see the description of D0, DNP, D20, */
/*                             D2NP); */
/*            p=1 (opt=1qr) : the sequence of first derivatives */
/*                            d(0),....,d(np)  is computed using the */
/*                            constraints only using subroutine DAL2; */
/*            p=2 (opt=2qr) : the sequence is computed as the constrained */
/*                            best approximation to Bessel derivatives */
/*                            using subroutine DAL2DP; */
/*            p=3 (opt=3qr) : the sequence is computed as the constrained */
/*                            best approximation to a set of third order */
/*                            accurate derivative estimates produced in */
/*                            subroutine DTDC using subroutine DAL2DP */
/*                            (since this estimates are inherently mono- */
/*                            tonicity preserving, it is not recommended */
/*                            to associate this option with the convexity */
/*                            constraints only); */
/*            p=4 (opt=4qr) : the sequence is computed as the constrained */
/*                            best approximation to a set of values given */
/*                            in input by the user using DAL2DP; note */
/*                            that opt.EQ.410 will provide the classical */
/*                            C(k) function interpolating the data and */
/*                            the derivatives. */
/*         Restriction: ( p.GE.1 .AND. p.LE.4 ) .AND. */
/*                      ( q.GE.1.AND. q.LE.3 ) .AND. */
/*                      ( r.GE.0 .AND. r.LE.4 ) .AND. */
/*                      .NOT. ( r.EQ.0 .AND. p.EQ.1 ) . */
/*  D0      : floating variable containing the left separable boundary */
/*            condition for the first derivative (d(0)=d0). */
/*            D0 is referenced only when  q=3 . */
/*  DNP     : floating variable containing the right separable boundary */
/*            condition for the first derivative (d(np)=dnp). */
/*            DNP is referenced only when  q=3 . */
/*  D20     : floating variable containing the left separable boundary */
/*            condition for the second derivative (d2(0)=d20). */
/*            D20 is referenced only when  q=3  and  k=2 . */
/*  D2NP    : floating variable containing the right separable boundary */
/*            condition for the second derivative (d2(np)=d2np). */
/*            D2NP is referenced only when  q=3  and  k=2 . */
/*  EPS     : floating variable, containing a value for computing the */
/*            relative tolerance of the method. It should be set greater */
/*            or equal to the machine precision. However, if eps.LE.0, */
/*            DBVSSC resets it to 0.0001 which has turned out to be a */
/*            good choice for graphical applications. */
/*  BETA    : user supplied function, which represents non-separable */
/*            boundary conditions for the first derivatives. */
/*            BETA is referenced only when  q=2 . */
/*  BETAI   : user supplied function, which is the inverse of BETA. */
/*            BETAI is referenced only when  q=2 . */
/*  RHO     : user supplied function, which represents non-separable */
/*            boundary conditions for the second derivatives. */
/*            RHO is referenced only when  q=2  and  k=2 . */
/*  RHOI    : user supplied function, which is the inverse of RHO. */
/*            RHOI is referenced only when  q=2  and  k=2 . */
/*  KMAX    : integer variable, containing the number of iterations */
/*            allowed for selecting the minimal set ASTAR described */
/*            below. If kmax.LE.0, DBVSSC resets it to 10 . */
/*            KMAX is referenced only when  q=2 . */
/*  MAXSTP  : integer variable, containing the number of steps allowed */
/*            to find dstar in the set of admissible values. */
/*            If maxstp.LE.0, DBVSSC resets it to 10 . */
/*            MAXSTP is referenced only when  q=2 . */


/*  INPUT / OUTPUT PARAMETERS: */

/*  CONSTR  : integer array, of bounds  0:NP , containing, in input the */
/*            desired constraints on the shape for each subinterval. */
/*            constr(i)=kind , kind=0,1,2,3 , means that none, monotoni- */
/*            city, convexity, monotonicity and convexity constraint is */
/*            imposed on the subinterval [x(i),x(i+1)]. If constr(i) is */
/*            not compatible with the data it is relaxed according to */
/*            their shape (see subroutine DMSK1 for details). So, on out- */
/*            put, CONSTR contains the constraints actually imposed. */
/*            For example, if the data are convex and on input we have */
/*            constr(i)=3 , the result in output will be  constr(i)=2. */
/*            Restriction: constr(i).GE.0 .AND. constr(i).LE.3 . */
/*            CONSTR is referenced only when  r=4 . */
/*  D       : floating array, of bounds 0:NP, containing the first */
/*            derivatives at  x(i), i=0,1,...,np . If  p=4 , d(i) is the */
/*            input value to be approximated by the computed derivative, */
/*            which is then stored in the same location. */
/*            On output, D is computed by the routine DAL2 if  p=1  and */
/*            is computed by the routine DAL2DP if  p=2  or  p=3 . */


/*  OUTPUT PARAMETERS */

/*  ERRC    : integer variable, containing an error flag which displays */
/*            the status of the code. The status is divided into: severe */
/*            error (error on the input data, no computation has been */
/*            done), error (some computation has been done and some */
/*            information or suggestions are available), warning (some */
/*            requirement is not fulfilled, but the spline's parameters */
/*            have been computed), success. */
/*            errc=0 : success, normal return of the code; */
/*            errc=1 : severe error, incorrect assignment for some of */
/*                     the values nwork, opt, np; */
/*            errc=2 : severe error, for some i the restriction */
/*                     0.LE.constr(i) .AND. constr(i).LE.3  is not */
/*                     fulfilled; */
/*            errc=3 : severe error, incorrect assignment for some of */
/*                     the values n,k; */
/*            errc=4 : severe error, the restriction x(i).LT.x(i+1) is */
/*                     not fulfilled for some i; */
/*            errc=5 : error, the problem does not have any solution */
/*                     because the set */
/*                     betai ( phi(a(0,k)) .INT. beta(a(0,k)) ) */
/*                     is empty for some k. In other words the boundary */
/*                     conditions cannot be satisfied and the output */
/*                     parameters are meaningless. */
/*                     The user is suggested to increase the value of n. */
/*            errc=6 : warning; for some i, the constraints on the */
/*                     interval  [x(i),x(i+1)]  are too strong and they */
/*                     have not been considered. There is no guarantee */
/*                     that the spline is shape-preserving within all */
/*                     the intervals. More accurate diagnostic details */
/*                     can be found in the array DIAGN. */
/*                     The user is suggested to increase the value of n. */
/*            errc=7 : error, dstar such that beta(dstar).IN.phi(dstar) */
/*                     has not been found. The integer parameter maxstp */
/*                     should be increased. */
/*                     The output parameters are meaningless. */
/*            errc=8 : error, both situations described in errc=6 and */
/*                     errc=7  have occurred. */
/*            errc=9 : warning, one of the separable boundary conditions */
/*                     d(0)=d0  and/or  d(np)=dnp  are not compatible */
/*                     with the constraints in  [x(0),x(1)]  and/or */
/*                     [x(np-1),x(np)]  which have consequently been */
/*                     relaxed. The user is suggested to increase the */
/*                     value of n. More accurate diagnostic details can */
/*                     be found in the array DIAGN. */
/*            errc=10: warning, both situations described for errc=6 and */
/*                     errc=9 have occurred. */
/*            errc=11: warning, one of the separable boundary conditions */
/*                     d2(0)=d20  and/or  d2(np)=d2np  are not compatible */
/*                     with the constraints in  [x(0),x(1)]  and/or */
/*                     [x(np-1),x(np)] . The boundary conditions have */
/*                     consequently been approximated. The user is */
/*                     suggested to increase the value of n. */
/*            errc=12: warning, both situations described for errc=6 and */
/*                     errc=11 have occurred. */
/*            errc=13: warning, both situations described for errc=9 and */
/*                     errc=11 have occurred. */
/*            errc=14: warning, both situations described for errc=10 and */
/*                     errc=11 have occurred. */
/*            errc=15: warning, the non-separable boundary conditions */
/*                     d2(np)=rho(d2(0))  are not compatible with the */
/*                     constraints. The boundary conditions have */
/*                     consequently been approximated. The user is */
/*                     suggested to increase the value of n. */
/*            errc=16: warning, both situations described for errc=6 and */
/*                     errc=15 have occurred. */
/*            errc=17: warning, both situations described for errc=9 and */
/*                     errc=15 have occurred. */
/*            errc=18: warning, both situations described for errc=10 and */
/*                     errc=15 have occurred. */
/*  D2      : floating array of bounds 0:NP containing the second */
/*            derivatives at knots. D2 is computed in subroutine DCDERC . */
/*            D2 is referenced only when  k=2 . */
/*  DIAGN   : integer array of bounds 0:NP-1 containing further */
/*            diagnostic information: */
/*            diagn(i)=0 : the constraints in the interval [x(i),x(i+1)] */
/*                         have been satisfied; */
/*            diagn(i)=1 : the constraints in the interval [x(i),x(i+1)] */
/*                         have not been satisfied; */



/*  OTHER PARAMETERS: */

/*  WORK    : floating array, of bounds 1:NKORK, which is used as */
/*            a work area to store intermediate results. */
/*            The same array can be used to provide workspace for both */
/*            the main subroutines  DBVSSC and DBVSSE . */
/*  NWORK   : integer variable containing the size of the work area. */
/*            Restriction: nwork .GE. comm+(part+7)*np+(n*(n+11))/2+9 */
/*                           that is */
/*                         nwork .GE. 5+(2+7)*np+(n*(n+11))/2+9 */


/*  ------------------------------------------------ */

/*  METHOD: */

/*  Let the integers n and k, such that k=1,2 ; n >= 3k , and the */
/*  sequence of points  (x(i),y(i)), i=0,1,...,np , with */
/*  x(0) < x(1) < ... <x(np) , be given; let us denote with  BS(n;k) */
/*  the set of the splines s of degree n and continuity k whose second */
/*  derivative, in the case k=2 , vanishes at the knots. We are */
/*  interested in the existence and construction, if possible, of a */
/*  shape-preserving interpolating spline s of BS(n;k) such that */

/*            s(x(i)) = y(i) , i=0,1,...,np                          (1) */

/*  and optionally subject to constraints on the shape in each interval */
/*  [x(i),x(i+1)] . */

/*  In the case k=2 the zero derivatives of the spline  s.IN.BS(n;k) are */
/*  then modified to assume non-zero values which are not in contrast */
/*  with the shape constraints and, if possible, satisfy the boundary */
/*  conditions eventually imposed by the user. For details we refer to */
/*  the comments in subroutine DCSDRC. */

/*  Since any s.IN.BS(n;k) is determined by its values and slopes at */
/*  x(i) , i=0,1,...,np , we can reformulate the problem as follows: */
/*  compute the values  d(i), i=0,1,...,np , such that the spline s, */
/*  satisfying (1) and */

/*            Ds(x(i)) := d(i) , i=0,1,...,np                        (2) */

/*  is shape-preserving. */
/*  Setting  delta(i) := (y(i+1)-y(i))/(x(i+1)-x(i)) , we have that s is */
/*  increasing (I) ( decreasing (D) ) in [x(i),x(i+1)] if and only if */
/*  (d(i),d(i+1))  belongs to */

/*    D(i) := { (u,v).IN.RxR : u >= 0, v >= 0, v =< -u+ n/k delta(i) } */
/*                                                                    (3) */
/*  ( D(i) := { (u,v).IN.RxR : u =< 0, v =< 0, v >= -u+ n/k delta(i) } ) */

/*  s is convex (CVX) ( concave (CNC) ) if and only if (d(i),d(i+1)) */
/*  belongs to */

/*    D(i) := { (u,v).IN.RxR : v >= - (k/(n-k)) u + (n/(n-k)) delta(i) , */
/*                             v =< - ((n-k)/k) u + (n/k) delta(i) } */
/*                                                                    (4) */
/*  ( D(i) := { (u,v).IN.RxR : v =< - (k/(n-k)) u + (n/(n-k)) delta(i) , */
/*                             v >= - ((n-k)/k) u + (n/k) delta(i) }  ) */

/*  and that s is I (D) and CVX (CNC) if and only if (d(i),d(i+1)) */
/*  belongs to */

/*             D(i) := { (u,v) satisfying (3) and (4) } . */

/*  So, if we choose the family of sets D(i) , i=0,1,...,np-1 , according */
/*  to the shape of the data, we have to solve: */

/*  PROBLEM P1. Does a sequence ( d(0), d(1), ..., d(np) ) such that */
/*              (d(i),d(i+1)) .IN. D(i) , i=0,1,...,np-1 , exist ? */

/*  PROBLEM P2. If P1 is feasible, how can a (the best) solution be */
/*              computed ? */

/*  Let DPRJ1: RxR -> R and DPRJ2: RxR -> R be, respectively, the */
/*  projection maps from uv-plane onto the u-axis and v-axis and let us */
/*  denote with  B(i) := DPRJ1(D(i)) : */

/*      ALGORITHM A1[B0]. */
/*        1. Set A(0):=B(0); J:=np. */
/*        2. For i=1,2,...,np */
/*           2.1. Set A(i):= DPRJ2( D(i-1).INT.{ A(i-1) x B(i) } ) . */
/*           2.2. If A(i) is empty, set J:=i and stop. */
/*        3. Stop. */

/*  We have the following result: */

/*  THEOREM 1. P1 has a solution if, and only if, J=np, that is A(i) is */
/*             not empty , i=0,1,...,np . If ( d(0), d(1), ...,d(np) ) */
/*             is a solution then  d(i).IN.A(i) , i=0,1,...,np . */

/*  A solution can be computed with the following algorithm: */

/*      ALGORITHM A2[A(np),B0]. */
/*        1. Choose d(np).IN.A(np). */
/*        2. For i=np-1, np-2, ..., 0 */
/*           2.1. Choose d(i).IN.DPRJ1( D(i).INT.{ A(i) x { d(i+1) }}). */
/*        3. Stop. */

/*  For more theoretical details about A1 and A2 see \1\ , and for */
/*  practical details see subprograms DALG1, DAL2, DAL2DP. In the latter */
/*  a dynamic programming scheme is used to find the best solution in */
/*  the feasible set. More specifically, it is possible to compute the */
/*  values  d(i),i=0,..,np which satisfy the constraints and are as close */
/*  as possible to another sequence which does not satisfy the */
/*  constraints but is, in some sense, optimal. */

/*  From a theoretical point of view, algs A1 and A2 give a complete */
/*  answer to problems P1 and P2. However, it could be pointed out that, */
/*  for practical applications, we would like to have the best possible */
/*  plot, whether or not P1 has solutions. Let us suppose that the */
/*  problem is solvable from 0 to j and from j to np, but that alg A1 */
/*  applied to the whole family of sets  D(i), i=0,1,...,np-1  gives */
/*  J.eq.j.ne.np ; if we reset  D(j-1) := A(j-1) x B(j) , alg A1 applied */
/*  to this new family of sets will produce J=np . However, it must be */
/*  recalled that, in this way, we do not consider the constraints in the */
/*  interval [x(j-i),x(j)] and so there is no guarantee that the spline */
/*  is shape-preserving in this interval. Whenever this fact cannot be */
/*  accepted it is convenient to rerun the code with a larger value for */
/*  the degree n , because the domains of constraints enlarge as n */
/*  increases (see (3) and (4)). */

/*  It is immediate to see that separable boundary conditions of the form */

/*            d(0) := d0 ; d(np) := dnp */

/*  can be easily inserted with a reduction of the corresponding */
/*  admissible sets which does not modify the above theory: */

/*       D(0) := D(0).INT.{d(0)=d0} ; D(np) := D(np).INT.{d(np)=dnp} */

/*  In the case k=2 the corresponding conditions  d2(0) = d20 , */
/*  d2(np) = d2np  are imposed only if not in contrast with the shape of */
/*  the data; otherwise the admissible values for  d2(0) and d2(np) */
/*  respectively closest to d20 and d2np are chosen. */

/*  Now, let beta be a continuous function from R to R, with continuous */
/*  inverse betai, we want to solve the following non-separable boundary */
/*  valued problem: */

/*  PROBLEM P3. Do sequences ( d(0), d(1), ..., d(np) ) , such that */
/*              (d(i),d(i+1)).IN.D(i), i=0,1,...,np-1    and */
/*              d(np) = beta ( d(0) ) , exist ? */

/*  It is obvious that a solution of this new problem, if it exists, can */
/*  be found amongst the solutions of P1. Let A(0), A(1),...,A(np) be the */
/*  sequence of sets given by alg A1 (we assume that A(i) is not empty, */
/*  i=0,1,...,np , that is P1 is solvable or, if this is not the case, */
/*  the constraints have been relaxed ), we can assume that */
/*  A(np) = phi(A(0)) , where  phi: R -> R is a set valued function */
/*  (see \1\ for details). It can be demonstrated that: */

/*  THEOREM 2. P1 is solvable if, and only if, there is  dstar.IN.A(0) */
/*             such that   beta(dstar).IN.phi({dstar}) . */

/*  It should be noted that if ( d(0), d(1), ..., d(np) ) satisfies P1, */
/*       d(0) .IN. betai(phi(A(0)).INT.beta(A(0))) =: gamma(A(0)) */
/*  and, consequently, the set of admissible values is reduced. If we */
/*  repeat this procedure, we get a gradually diminishing admissible set */
/*  for d(0). We define */
/*     ASTAR := lim A(0,m)  where */
/*     A(0,0) := A(0)   and   A(0,m) := gamma(A(0,m-1)) ; */
/*  ASTAR is the minimal admissible set for dstar. We can now combine the */
/*  various theorems and algorithms and give the general algorithm to */
/*  solve P3: */

/*      ALGORITHM A3. */
/*        1. Set A(0,0) := B0 ; m:=1. */
/*        2. Use A1[A(0,0)] for computing phi (A(0,0)). */
/*        3. Set A(0,1) := gamma(A(0,0)) */
/*                       = betai(phi(A(0,0)).INT.beta(A(0,0))). */
/*        4. If A(0,1) is empty, stop (P1 is unsolvable). */
/*        5. While ( convergence test not satisfied ) do */
/*           5.1. Use A1[A(0,m)] for computing A(np,m) = phi (A(0,m)). */
/*           5.2. Set A(0,m+1) := gamma(A(0,m)). */
/*           5.3. Set m:=m+1. */
/*        6. Set ASTAR := A(0,m). */
/*        7. Use A1[{d(0)}] to find dstar.IN.ASTAR such that */
/*           beta(dstar).IN.phi(dstar). */
/*        8. Use A2[beta(dstar),dstar] for computing a sequence */
/*           ( d(0), d(1), ..., d(np) )  which solves P1. */

/*  In the case k=2 the corresponding condition  d2(np) = beta2(d2(0)) */
/*  is imposed only if not in contrast with the shape of */
/*  the data; otherwise the admissible values for  d2(0) and d2(np) */
/*  closest to the boundary condition are chosen. */

/*  References */

/*  \1\ P.Costantini: Boundary Valued Shape-Preserving Interpolating */
/*      Splines, ACM Trans. on Math. Softw., companion paper. */
/*  \2\ R.Bellman, S.Dreyfus: Applied Dynamic Programming, Princeton */
/*      University Press, New York, 1962. */
/*  \3\ H.T.Huynh: Accurate Monotone Cubic Interpolation, SIAM J. Num. */
/*      Anal., 30 (1993), 57-100. */

/*  The ideas involved in Algorithm A3 have been implemented in the code */
/*  in a general form. Since Algorithm A3 resembles closely the abstract */
/*  formulation it could, therefore, be used for several practical */
/*  problems. The particular case actually treated is reflected in the */
/*  contents of the information array INFO (see its description in */
/*  subroutine DSTINF) which contains all the data needed for the */
/*  construction of the operators DPRJ0, DPRJ1 and DPRJ2. */

/*  As a consequence, the user has the following options: */

/*  - to compute a Spline subject to: */
/*        - no constraint; */
/*        - monotonicity constraints, */
/*        - convexity constraints, */
/*        - monotonicity and convexity constraints, */
/*        - one of the above constraints in each subinterval, as */
/*          specified in the corresponding array CONSTR; */

/*  - to impose separable or non-separable boundary conditions on the */
/*    spline. In the latter case, the external functions BETA, BETAI, */
/*    RHO and RHOI must be supplied, */

/*  - to assign the first derivatives d(i), i=0,1,...,np , in input or to */
/*    compute them from the only constraints or as the best approximation */
/*    to a set of optimal values. Although the final sequence of */
/*    derivatives does in any case satisfy the imposed restrictions on */
/*    the shape, the resulting graphs may exhibit different behaviors. */

/*  See the description of the input parameter OPT for more details. */
/*  ------------------------------------------------ */
/*            End of comments. */
/*  ------------------------------------------------ */
/*  COMM contains the number of global data referring to the initial */
/*  points  (x(i),y(i)) stored in the array INFO, described in */
/*  subroutine DSTINF. */
/*  PART contains the number of particular data referring to each */
/*  interval  (x(i),x(i+1)) , i=0,1,...,np , stored in the array INFO. */
/*  Assign the success value to the error flag. */
    /* Parameter adjustments */
    --work;

    /* Function Body */
    *errc = 0;
/*  Check the size of the work area. */
    if (*nwork < *np * 9 + 5 + *n * (*n + 11) / 2 + 9) {
	*errc = 1;
	return 0;
    }
/*  Compute indices for the splitting of the work array WORK. */
    i1 = 1;
    i2 = i1 + ((*np << 1) + 5 + *np + 1);
    i3 = i2 + (*np + 1 << 1);
    i4 = i3 + (*np + 1 << 1);
    i5 = i4 + (*n * (*n + 1) / 2 + *n);
    i6 = i5 + (*n + 1);
    i7 = i6 + (*n + 1);
    i8 = i7 + (*n + 1);
    i9 = i8 + (*n + 1);
    i10 = i9 + *np - 1;
/*  DBVSSC is essentially an interfacing routine which relieves the */
/*  user of a longer calling sequence. The structure of the method can */
/*  be seen in DBVC and in the subroutines called. */
    dbvc_(x, y, np, n, k, opt, d0, dnp, d20, d2np, constr, &work[i1], &c__5, &
	    c__2, eps, kmax, maxstp, &work[i2], &work[i3], &work[i9], &work[
	    i10], (D_fp)beta, (D_fp)betai, (D_fp)rho, (D_fp)rhoi, d__, d2, 
	    errc, diagn);
    return 0;
} /* dbvssc_ */

/*  --------------------------------------------------------------------- */
/* Subroutine */ int dbvsse_(doublereal *x, doublereal *y, integer *np, 
	integer *n, integer *k, doublereal *xtab, integer *ntab, integer *
	sbopt, integer *y0opt, integer *y1opt, integer *y2opt, integer *errc, 
	doublereal *d__, doublereal *d2, doublereal *y0tab, doublereal *y1tab,
	 doublereal *y2tab, integer *erre, doublereal *work, integer *nwork)
{
    static integer i1, i2, i3, i4, i5, i6, i7, i8, i9, i10;
    extern /* Subroutine */ int dbve_(doublereal *, doublereal *, integer *, 
	    integer *, integer *, doublereal *, integer *, integer *, integer 
	    *, integer *, integer *, doublereal *, doublereal *, integer *, 
	    doublereal *, doublereal *, doublereal *, doublereal *, 
	    doublereal *, doublereal *, doublereal *, doublereal *, integer *)
	    ;

/*  ------------------------------------------------- */
/*            Lines 621-754 are comment lines. */
/*            The actual code begins at line 760. */
/*  ------------------------------------------------- */
/*  ABSTRACT: */

/*  DBVSSE is designed to evaluate the interpolating, shape-preserving */
/*  spline computed in subroutine DBVSSC. */


/*  REMARK: */

/*  In these comments variable and array names will be denoted with */
/*  capital letters, and with small letters their contents. */


/*  METHOD: */

/*  Let a spline  s:=s(x)  of degree n and continuity k (k=1,2) , */
/*  interpolating at the knots the point (x(i),y(i)) , i=0,1,...,np , */
/*  be previously computed in subroutine DBVSSC. Then, given a set of */
/*  tabulation points  xtab(i) , i=0,1,...,ntab , DBVSSE computes the */
/*  values  y0tab(itab):=s(xtab(itab))  and/or */
/*  y1tab(itab):=Ds(xtab(itab))  and/or  y2tab(itab):=DDs(xtab(itab)) , */
/*  using, under user selection, a sequential or binary search scheme. */

/*  The code has the following structure: */

/*         DBVSSE */
/*             DBVE */
/*                 DTRMB */
/*                 DSQTAB */
/*                     DLSPIS */
/*                     DBL */
/*                     DBL1 */
/*                     DBL2 */
/*                 DBNTAB */
/*                     DBSEAR */
/*                     DLSPIS */
/*                     DBL */
/*                     DBL1 */
/*                     DBL2 */


/*  CALLING SEQUENCE: */

/*        CALL DBVSSE (X,Y,NP,N,K,XTAB,NTAB,SBOPT,Y0OPT,Y1OPT,Y2OPT, */
/*    *                ERRC,D,D2,Y0TAB,Y1TAB,Y2TAB,ERRE,WORK,NWORK) */


/*  INPUT PARAMETERS: */

/*  X       : floating array, of bounds 0:NP, containing the data */
/*            abscissas  x(i), i=0,1,...,np. Restriction: */
/*            x(i).LT.x(i+1), i=0,1,...,np , checked in DBVSSC. */
/*  Y       : floating array, of bounds 0:NP, containing the data */
/*            ordinates  y(i), i=0,1,...,np. */
/*  NP      : integer variable, defining the number of interpolation */
/*            points. Restriction: np.GE.2 , checked in DBVSSC. */
/*  N       : integer variable, containing the degree of s. */
/*            Restriction: n.GE.3 , checked in DBVSSC */
/*  K       : integer variable, containing the class of continuity of s. */
/*            Restriction:  k.EQ.1  or  k.EQ.2  and  n.GE.3*k , checked */
/*            in DBVSSC. */
/*  XTAB    : floating array, of bounds 0:NTAB, containing the abscissas */
/*            of tabulation points. */
/*            Restriction: xtab(i).LE.xtab(i+1), i=0,1,...,ntab-1 . */
/*  NTAB    : integer variable, defining the number of tabulation points. */
/*            Restriction: ntab.GE.0 . */
/*  SBOPT   : integer variable, containing a control parameter. */
/*            If sbopt=1 then the sequential search is used for selecting */
/*            the interval of interpolation points in which xtab(i) */
/*            falls. If sbopt=2, binary search is used. */
/*            Restriction: sbopt.EQ.1 .OR. sbopt.EQ.2 . */
/*  Y0OPT   : integer variable, containing a control parameter. */
/*            If y0opt=1, the spline is evaluated at the points */
/*            xtab(i), i=0,1,...,ntab and the results are stored at the */
/*            array  Y0TAB. */
/*            Restriction: y0opt.EQ.0 .OR. y0opt.EQ.1 . */
/*  Y1OPT   : integer variable, containing a control parameter. */
/*            If y1opt=1 the first derivatives of the spline at points */
/*            xtab(i) i=0,1,...,ntab , are computed and the results are */
/*            stored in the array Y1TAB . */
/*            Restriction: y1opt.EQ.0 .OR. y1opt.EQ.1 . */
/*  Y2OPT   : integer variable, containing a control parameter. */
/*            If y2opt=1 the second derivatives of the spline at points */
/*            xtab(i), i=0,1,...,ntab  are computed and the results are */
/*            stored in the array Y2TAB. */
/*            Restriction: y2opt.EQ.0 .OR. y2opt.EQ.1 . */
/*  ERRC    : integer variable, containing the status of the last */
/*            execution of subroutine DBVSSC. */
/*  D       : floating array, of bounds 0:NP, containing the first */
/*            derivatives at the knots. */
/*  D2      : floating array of bounds 0:NP containing the second */
/*            derivatives at the knots. */


/*  OUTPUT PARAMETERS: */


/*  Y0TAB   : floating array, of bounds 0:NTAB, containing the values of */
/*            the spline at the tabulation points xtab(i) , */
/*            i=0,1,...,ntab when the option  y0opt=1  is activated. */
/*  Y1TAB   : floating array, of bounds 0:NTAB, containing the values of */
/*            the first derivative of the spline at the tabulation points */
/*            xtab(i) , i=0,1,...ntab , when the option y1opt=1 is */
/*            activated. */
/*  Y2TAB   : floating array, of bounds 0:NTAB, containing the values of */
/*            the second derivative of the spline at the tabulation */
/*            points xtab(i) , i=0,1,...,ntab , when the option y2opt=1 */
/*            is activated. */
/*  ERRE    : integer variable, containing an error flag which displays */
/*            the status of the code. DBVSSE has only two levels of error */
/*            (see DBVSSC for comparison): success and severe error, */
/*            which means that some incorrect assignment for input data */
/*            have been set. */
/*            ERRE=0:  success, normal return of the code; */
/*            ERRE=1:  severe error, the value errc gives a status of */
/*                     error, which means that the output of DBVSSC is */
/*                     meaningless. Check the input parameters of DBVSSC. */
/*            ERRE=2:  severe error, incorrect assignment for some of */
/*                     the values ntab, sbopt, y0opt, y1opt, y2opt , */
/*                     nwork; */
/*            ERRE=3:  severe error, the restriction xtab(i).LT.xtab(i+1) */
/*                     is not fulfilled for some i when sequential search */
/*                     is required; */


/*  OTHER PARAMETERS: */

/*  WORK    : floating array, of bounds 1:NKORK, which is used as */
/*            a work area to store intermediate results. */
/*            The same array can be used to provide workspace for both */
/*            the main subroutines  DBVSSC and DBVSSE . */
/*  NWORK   : integer variable containing the size of the work area. */
/*            Restriction: nwork .GE. comm+(part+7)*np+(n*(n+11))/2+9 */
/*                           that is */
/*                         nwork .GE. 3+(2+7)*np+(n*(n+11))/2+9 */
/*  ------------------------------------------------- */
/*            End of comments. */
/*  ------------------------------------------------- */
/*  Assign the success value to the error flag. */
    /* Parameter adjustments */
    --work;

    /* Function Body */
    *erre = 0;
/*  Check the size of the work area. */
    if (*nwork < *np * 9 + 5 + *n * (*n + 11) / 2 + 9) {
	*erre = 2;
	return 0;
    }
/*  Compute indices for the splitting of the work array WORK. */
    i1 = 1;
    i2 = i1 + ((*np << 1) + 5 + *np + 1);
    i3 = i2 + (*np + 1 << 1);
    i4 = i3 + (*np + 1 << 1);
    i5 = i4 + (*n * (*n + 1) / 2 + *n);
    i6 = i5 + (*n + 1);
    i7 = i6 + (*n + 1);
    i8 = i7 + (*n + 1);
    i9 = i8 + (*n + 1);
    i10 = i9 + *np - 1;
/*  DBVSSE is essentially an interfacing routine which relieves the */
/*  user of a longer calling sequence. The structure of the method can */
/*  be seen in DBVE and in the subroutines called. */
    dbve_(x, y, np, n, k, xtab, ntab, sbopt, y0opt, y1opt, y2opt, d__, d2, 
	    errc, &work[i4], &work[i5], &work[i6], &work[i7], &work[i8], 
	    y0tab, y1tab, y2tab, erre);
    return 0;
} /* dbvsse_ */

/* Subroutine */ int dalg1_(doublereal *a1, integer *np, doublereal *info, 
	integer *comm, integer *part, doublereal *eps, doublereal *a2, 
	integer *errc, integer *diagn)
{
    /* Initialized data */

    static doublereal fl0 = 0.;

    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer i__, errc1;
    extern /* Subroutine */ int dprj1_(doublereal *, doublereal *, doublereal 
	    *, doublereal *, integer *, doublereal *, integer *, integer *, 
	    integer *, doublereal *, doublereal *);

/*  DALG1 implements the algorithm A1[B(0)] described in subr. DBVSSC. */

/*  The input parameters NP,COMM,PART,EPS and the output parameters */
/*  ERRC, DIAGN are described in DBVSSC. The input parameter INFO is */
/*  described in DSTINF. */

/*  Items of possible interest are: */

/*  A1: floating array, of bounds 1:2, 0:NP, containing the sequence of */
/*      the sets  B(i), i=0,1,...,np (see the comments in DBVSSC). */
/*      More precisely,  B(i) = [a1(1,i),a1(2,i)] . */

/*  A2: floating array, of bounds 1:2, 0:NP, containing the sequence of */
/*      the sets  A(i), i=0,1,...,np (see the comments in DBVSSC). */
/*      More precisely, A(i) = [a2(1,i),a2(2,i)] . */
    /* Parameter adjustments */
    --a2;
    --a1;
    --info;

    /* Function Body */
    errc1 = 0;
/*  Step 1. */
    a2[1] = a1[1];
    a2[2] = a1[2];
/*  Step 2. */
    i__1 = *np;
    for (i__ = 1; i__ <= i__1; ++i__) {
L10:
/*  Step 2.1. */
	dprj1_(&a2[(i__ - 1 << 1) + 1], &a2[(i__ - 1 << 1) + 2], &a1[(i__ << 
		1) + 1], &a1[(i__ << 1) + 2], &i__, &info[1], comm, part, np, 
		&a2[(i__ << 1) + 1], &a2[(i__ << 1) + 2]);
/*  Ignore the constraints in  [x(i),x(i+1)]  when A(i) is empty. */
	if (a2[(i__ << 1) + 1] > a2[(i__ << 1) + 2] + *eps) {
	    info[*comm + 1 + (i__ - 1)] = fl0;
	    errc1 = 1;
	    diagn[i__ - 1] = 1;
	    goto L10;
	}
/* L20: */
    }
    if (errc1 == 1 && *errc == 9) {
	*errc = 10;
    } else if (errc1 == 1) {
	*errc = 6;
    }
    return 0;
} /* dalg1_ */

/*  --------------------------------------------------------------------- */
/* Subroutine */ int dalg1d_(doublereal *dstar, doublereal *a1, integer *np, 
	doublereal *info, integer *comm, integer *part, doublereal *eps, 
	doublereal *a2, integer *errc1)
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer i__;
    extern /* Subroutine */ int dprj1_(doublereal *, doublereal *, doublereal 
	    *, doublereal *, integer *, doublereal *, integer *, integer *, 
	    integer *, doublereal *, doublereal *);

/*  DALG1D computes the sequence of sets A(i), i=0,1,...,np, implementing */
/*  the algorithm A1[{dstar}], that is with A(0)={dstar} (see the com- */
/*  ments in subroutine DBVSSC for details). */

/*  The input parameters NP,COMM,PART,EPS are described in DBVSSC; the */
/*  input parameter INFO is described in DSTINF; the input parameters A1 */
/*  and A2 are described in subprogram DALG1. */

/*  Item of possible interest is: */

/*  ERRC1  : Integer parameter, containing a control variable which is */
/*           then used in subr. DFPSVF */
/*           errc1 = 0 - success, normal return of the subprogram; */
/*           errc1 = 1 - A(i) is empty for some i. */
    /* Parameter adjustments */
    --a2;
    --a1;
    --info;

    /* Function Body */
    *errc1 = 0;
/*  Step 1. */
    a2[1] = *dstar;
    a2[2] = *dstar;
/*  Step 2. */
    i__1 = *np;
    for (i__ = 1; i__ <= i__1; ++i__) {
	dprj1_(&a2[(i__ - 1 << 1) + 1], &a2[(i__ - 1 << 1) + 2], &a1[(i__ << 
		1) + 1], &a1[(i__ << 1) + 2], &i__, &info[1], comm, part, np, 
		&a2[(i__ << 1) + 1], &a2[(i__ << 1) + 2]);
	if (a2[(i__ << 1) + 1] > a2[(i__ << 1) + 2] + *eps) {
	    *errc1 = 1;
	    return 0;
	}
/* L10: */
    }
    return 0;
} /* dalg1d_ */

/*  --------------------------------------------------------------------- */
/* Subroutine */ int dalg3_(doublereal *info, integer *np, integer *comm, 
	integer *part, integer *opt, doublereal *d0, doublereal *dnp, 
	doublereal *eps, integer *kmax, integer *maxstp, D_fp beta, D_fp 
	betai, doublereal *a1, doublereal *a2, doublereal *d__, integer *errc,
	 integer *diagn)
{
    /* Initialized data */

    static doublereal fl2 = 2.;

    /* System generated locals */
    integer i__1;
    doublereal d__1, d__2, d__3, d__4, d__5, d__6;

    /* Local variables */
    static integer i__, k, p, q;
    static doublereal p1, p2;
    extern /* Subroutine */ int dal2_(doublereal *, integer *, doublereal *, 
	    integer *, integer *, doublereal *);
    extern logical dtst_(doublereal *, doublereal *, doublereal *, doublereal 
	    *, doublereal *);
    extern /* Subroutine */ int dalg1_(doublereal *, integer *, doublereal *, 
	    integer *, integer *, doublereal *, doublereal *, integer *, 
	    integer *), dprj0_(integer *, doublereal *, integer *, integer *, 
	    integer *, doublereal *, doublereal *);
    static doublereal dstar;
    extern /* Subroutine */ int dal2dp_(doublereal *, integer *, doublereal *,
	     integer *, integer *, doublereal *), dfpsvf_(doublereal *, 
	    doublereal *, integer *, doublereal *, integer *, integer *, 
	    doublereal *, integer *, D_fp, integer *, doublereal *), dintrs_(
	    doublereal *, doublereal *, doublereal *, doublereal *, 
	    doublereal *, doublereal *);

/*  DALG3 computes a sequence of slopes ( d(0), d(1), ..., d(np) ) which */
/*  can be used to compute a shape-preserving interpolating spline with */
/*  or without boundary conditions, as requested by the user. It is an */
/*  implementation of the algorithm A3 described in subroutine DBVSSC. */

/*  The input parameters NP,COMM,PART,OPT,EPS,KMAX,MAXSTP,BETA,BETAI,D */
/*  and the output parameter ERRC are described in subprogram DBVSSC. */
/*  The input parameter INFO is described in subprogram DSTINF. */
    /* Parameter adjustments */
    --a2;
    --a1;
    --info;

    /* Function Body */
    p = *opt / 100;
    q = *opt % 100 / 10;
/*  If kmax.LE.0 it is reset to ink. */
    if (*kmax <= 0) {
	*kmax = 10;
    }
/*  If maxstp.LE.0 it is reset to instp. */
    if (*maxstp <= 0) {
	*maxstp = 10;
    }
/*  Start step 1: store the sets  B(i), i=0,1,...,np , into the array A1. */
    i__1 = *np;
    for (i__ = 1; i__ <= i__1; ++i__) {
	dprj0_(&i__, &info[1], comm, part, np, &a1[(i__ - 1 << 1) + 1], &a1[(
		i__ - 1 << 1) + 2]);
/* L10: */
    }
    a1[(*np << 1) + 1] = info[4];
    a1[(*np << 1) + 2] = info[5];
/*  Reset the first and the last interval if separable boundary condtions */
/*  are required */
    if (q == 3) {
	a1[1] = *d0;
	a1[2] = *d0;
	a1[(*np << 1) + 1] = *dnp;
	a1[(*np << 1) + 2] = *dnp;
    }
/*  Start step 2. Call DALG1 to compute the array A2 containing the */
/*  sets A(i) , i=0,1,...,np. */
    dalg1_(&a1[1], np, &info[1], comm, part, eps, &a2[1], errc, diagn);
/*  Start step 3 (steps 3-7 are activated only if boundary conditions are */
/*  required). */
    if (q == 2) {
/*  Compute  betai(phi(A(0).INT.beta(A(0))) . */
/* Computing MIN */
	d__2 = (*beta)(&a2[1]), d__3 = (*beta)(&a2[2]);
	d__1 = min(d__2,d__3);
/* Computing MAX */
	d__5 = (*beta)(&a2[1]), d__6 = (*beta)(&a2[2]);
	d__4 = max(d__5,d__6);
	dintrs_(&d__1, &d__4, &a2[(*np << 1) + 1], &a2[(*np << 1) + 2], &p1, &
		p2);
/* Computing MIN */
	d__1 = (*betai)(&p1), d__2 = (*betai)(&p2);
	a1[1] = min(d__1,d__2);
/* Computing MAX */
	d__1 = (*betai)(&p1), d__2 = (*betai)(&p2);
	a1[2] = max(d__1,d__2);
/*  Start step 4. */
	if (p1 > p2 + *eps) {
	    *errc = 5;
	    return 0;
	}
/*  Start step 5 : initialization */
	k = 1;
	i__1 = *np;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    a1[(i__ << 1) + 1] = a2[(i__ << 1) + 1];
	    a1[(i__ << 1) + 2] = a2[(i__ << 1) + 2];
/* L20: */
	}
/*  Iteration. The loop is stopped if a convergence test is satisfied */
/*  or kmax iterations have already been done. */
L30:
	if (dtst_(&a1[1], &a1[2], &a2[1], &a2[2], eps) || k == *kmax) {
	    goto L50;
	}
/*  Step 5.1 . */
	dalg1_(&a1[1], np, &info[1], comm, part, eps, &a2[1], errc, diagn);
/*  Step 5.2 . */
/* Computing MIN */
	d__2 = (*beta)(&a2[1]), d__3 = (*beta)(&a2[2]);
	d__1 = min(d__2,d__3);
/* Computing MAX */
	d__5 = (*beta)(&a2[1]), d__6 = (*beta)(&a2[2]);
	d__4 = max(d__5,d__6);
	dintrs_(&d__1, &d__4, &a2[(*np << 1) + 1], &a2[(*np << 1) + 2], &p1, &
		p2);
/* Computing MIN */
	d__1 = (*betai)(&p1), d__2 = (*betai)(&p2);
	a1[1] = min(d__1,d__2);
/* Computing MAX */
	d__1 = (*betai)(&p1), d__2 = (*betai)(&p2);
	a1[2] = max(d__1,d__2);
/*  If  gamma(A(0))  is empty for some k the problem does not have any */
/*  solution. */
	if (p1 > p2 + *eps) {
	    *errc = 5;
	    return 0;
	}
	i__1 = *np;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    a1[(i__ << 1) + 1] = a2[(i__ << 1) + 1];
	    a1[(i__ << 1) + 2] = a2[(i__ << 1) + 2];
/* L40: */
	}
	++k;
	goto L30;
L50:
/*  Start step 7. */
/*  Assign to dstar a suitable value */
	if (p == 1) {
	    dstar = (a1[1] + a1[2]) / fl2;
	} else {
	    dstar = info[*comm + *part * *np + 1];
	}
/*  Check if dstar solves the problem, that is,  beta(dstar)  belongs to */
/*  phi(dstar); if it is not the case, another value for dstar */
/*  is looked for. */
	dfpsvf_(&a1[1], &a2[1], np, &info[1], comm, part, eps, maxstp, (D_fp)
		beta, errc, &dstar);
	if (*errc != 0 && *errc != 6 && *errc != 9 && *errc != 10) {
	    return 0;
	}
	info[*comm + *part * *np + *np + 1] = (*beta)(&dstar);
	a2[(*np << 1) + 1] = (*beta)(&dstar);
	a2[(*np << 1) + 2] = (*beta)(&dstar);
    }
/*  Start step 8. */
    if (p == 1) {
	dal2_(&a2[1], np, &info[1], comm, part, d__);
    } else {
	dal2dp_(&a2[1], np, &info[1], comm, part, d__);
    }
    return 0;
} /* dalg3_ */

/*  --------------------------------------------------------------------- */
/* Subroutine */ int dal2_(doublereal *a2, integer *np, doublereal *info, 
	integer *comm, integer *part, doublereal *d__)
{
    /* Initialized data */

    static doublereal fl1d2 = .5;

    static integer i__;
    static doublereal p1, p2;
    extern /* Subroutine */ int dprj2_(doublereal *, doublereal *, doublereal 
	    *, doublereal *, integer *, doublereal *, integer *, integer *, 
	    integer *, doublereal *, doublereal *);

/*  DAL2 computes a sequence of slopes (d(0),d(1),...,d(np)) implementing */
/*  alg. A2  described in subr. DBVSSC. Each d(i),i=0,1,...,np , is */
/*  chosen as the midpoint of the interval of all feasible values . */

/*  The input parameters NP,COMM,PART and the output parameter D are */
/*  described in DBVSSC; the input parameter INFO is described in DSTINF. */

/*  Item of possible interest is: */

/*  A2   : floating array, of bounds 1:2, 0:NP; [a2(1,i),a2(2,i)] */
/*         is the feasible interval for d(i) . */
    /* Parameter adjustments */
    --a2;
    --info;

    /* Function Body */
    d__[(0 + (0 + (*np << 3))) / 8] = (a2[(0 + (0 + (1 + (*np << 1) << 3))) / 
	    8] + a2[(0 + (0 + (2 + (*np << 1) << 3))) / 8]) * fl1d2;
    for (i__ = *np; i__ >= 1; --i__) {
	dprj2_(&a2[(i__ - 1 << 1) + 1], &a2[(i__ - 1 << 1) + 2], &d__[i__], &
		d__[i__], &i__, &info[1], comm, part, np, &p1, &p2);
	d__[i__ - 1] = (p1 + p2) * fl1d2;
/* L10: */
    }
    return 0;
} /* dal2_ */

/*  --------------------------------------------------------------------- */
/* Subroutine */ int dal2dp_(doublereal *a2, integer *np, doublereal *info, 
	integer *comm, integer *part, doublereal *d__)
{
    /* Initialized data */

    static doublereal fl0 = 0.;
    static doublereal fle30 = 1e30;

    /* System generated locals */
    integer i__1;
    doublereal d__1, d__2;

    /* Local variables */
    static integer i__, j;
    static doublereal d0, d1, h0, h1, p1, p2;
    static integer jd0, ind;
    extern doublereal dsl_(doublereal *, doublereal *, doublereal *);
    static doublereal psi0[22], psi1[22];
    extern /* Subroutine */ int dprj2_(doublereal *, doublereal *, doublereal 
	    *, doublereal *, integer *, doublereal *, integer *, integer *, 
	    integer *, doublereal *, doublereal *);
    static doublereal part0[22], part1[22], psi1mn;
    extern integer dmnind_(doublereal *, doublereal *);

/*  DAL2DP links algorithm A2 and a dynamic programming scheme */
/*  to select, among the set of all feasible solutions, the sequence */
/*  ( d(0),d(1), ..., d(np) ) which is the best 2-norm approximation to */
/*  a set of optimal values. More precisely, if (ds(0),ds(1), ...,ds(np)) */
/*  is the sequence of optimal values, DAL2DP use the following dynamic */
/*  programming relations */

/*    psi(0;d(0)) := (d(0)-ds(0))**2 */
/*    psi(j;d(j)) := (d(j)-ds(j))**2 + min(psi(j-1;d(j-1))) */

/*  for describing the objective function */

/*      SUM  ((d(j) - ds(j)) ** 2 */
/*    j=0,np */

/*  For a complete comprehension of the algorithm see the book \2\ */
/*  quoted in the references of subr. DBVSSC */

/*  The input parameters NP,COMM,PART and the output parameter D are */
/*  described in subprogram DBVSSC; the input parameter INFO is described */
/*  in subprogram DSTINF and the input parameter A2 is described in DAL2. */
/*  The constant NSUBD defined below is related to the discretization of */
/*  the admissible domain. */
    /* Parameter adjustments */
    --a2;
    --info;

    /* Function Body */
    ind = *comm + *part * *np + 1;
/* Computing MAX */
    d__1 = fl0, d__2 = (a2[2] - a2[1]) / 20;
    h0 = max(d__1,d__2);
    for (j = 0; j <= 20; ++j) {
	part0[j] = a2[1] + j * h0;
/* L5: */
    }
    part0[21] = dsl_(&a2[1], &a2[2], &info[ind]);
    d__[0] = dsl_(&a2[1], &a2[2], &info[ind]);
    for (j = 0; j <= 21; ++j) {
/* Computing 2nd power */
	d__1 = part0[j] - d__[0];
	psi0[j] = d__1 * d__1;
/* L10: */
    }
    i__1 = *np;
    for (i__ = 1; i__ <= i__1; ++i__) {
/* Computing MAX */
	d__1 = fl0, d__2 = (a2[(i__ << 1) + 2] - a2[(i__ << 1) + 1]) / 20;
	h1 = max(d__1,d__2);
	for (j = 0; j <= 20; ++j) {
	    part1[j] = a2[(i__ << 1) + 1] + j * h1;
/* L15: */
	}
	part1[21] = dsl_(&a2[(i__ << 1) + 1], &a2[(i__ << 1) + 2], &info[ind 
		+ i__]);
	psi1mn = fle30;
	for (j = 0; j <= 21; ++j) {
	    d1 = part1[j];
	    dprj2_(&a2[(i__ - 1 << 1) + 1], &a2[(i__ - 1 << 1) + 2], &d1, &d1,
		     &i__, &info[1], comm, part, np, &p1, &p2);
	    d0 = dsl_(&p1, &p2, &d__[i__ - 1]);
	    if (h0 > fl0) {
		jd0 = dmnind_(&d0, part0);
	    } else {
		jd0 = 0;
	    }
/* Computing 2nd power */
	    d__1 = d1 - info[ind + i__];
	    psi1[j] = d__1 * d__1 + psi0[jd0];
	    if (psi1[j] < psi1mn) {
		psi1mn = psi1[j];
		d__[i__] = d1;
	    }
/* L20: */
	}
	h0 = h1;
	for (j = 0; j <= 21; ++j) {
	    psi0[j] = psi1[j];
	    part0[j] = part1[j];
/* L30: */
	}
/* L40: */
    }
    for (i__ = *np; i__ >= 1; --i__) {
	dprj2_(&a2[(i__ - 1 << 1) + 1], &a2[(i__ - 1 << 1) + 2], &d__[i__], &
		d__[i__], &i__, &info[1], comm, part, np, &p1, &p2);
	d__[i__ - 1] = dsl_(&p1, &p2, &d__[i__ - 1]);
/* L50: */
    }
    return 0;
} /* dal2dp_ */

/*  --------------------------------------------------------------------- */
doublereal dbl_(doublereal *x, integer *n, doublereal *l, doublereal *x0, 
	doublereal *xn, doublereal *tb, integer *flag__, doublereal *laux0)
{
    /* Initialized data */

    static doublereal fl1 = 1.;

    /* System generated locals */
    integer i__1;
    doublereal ret_val, d__1;

    /* Builtin functions */
    double pow_di(doublereal *, integer *);

    /* Local variables */
    static integer i__;
    static doublereal aux, xmx0, xnmx;

/*  DBL computes the value assumed by the n-degree Bernstein polynomial */
/*  of a function  l  in the interval  (x0,xn)  at the point  x . */
/*  The evaluation is made using a Horner scheme, and the instructions */
/*  which do not depend upon  x  are executed under the control of */
/*  the variable  FLAG , for avoiding useless computations in */
/*  subsequent calls. */
/*  The degree  n  is supposed greater or equal to  3 . */


/*  INPUT PARAMETERS */

/*  X     : floating variable, containing the evaluation point. */
/*  N     : integer variable, containing the degree of Bernstein */
/*          polynomial. */
/*  L     : floating array, of bounds  0:N , containing the values */
/*          of the function  l . */
/*  X0    : floating variable, containing the left extreme of the */
/*          interval. */
/*  XN    : floating variable, containing the right extreme of the */
/*          interval. */
/*  TB    : floating array, of bounds  0:N , containing the binomial */
/*          terms used for computing the Bernstein polynomial. */
/*  FLAG  : integer variable, containing a control parameter. */
/*          In the case  flag=0  DBL  assumes to perform the first */
/*          evaluation of the polynomial, and computes the values */
/*          tb(i)*l(i) , i=0,1,...,n . In the case  flag=1  DBL */
/*          assumes to perform subsequent evaluations, and uses the */
/*          values previously computed. */


/*  OTHER PARAMETERS */

/*  LAUX0 : floating array, of bounds 0:N used as a work area to store */
/*          intermediate results. */
    if (*flag__ == 0) {
	i__1 = *n;
	for (i__ = 0; i__ <= i__1; ++i__) {
	    laux0[i__] = tb[i__] * l[i__];
/* L10: */
	}
    }
    xnmx = *xn - *x;
    xmx0 = *x - *x0;
    aux = fl1;
    ret_val = laux0[*n];
    for (i__ = *n - 1; i__ >= 0; --i__) {
	aux = xnmx * aux;
	ret_val = laux0[i__] * aux + xmx0 * ret_val;
/* L20: */
    }
    d__1 = *xn - *x0;
    ret_val /= pow_di(&d__1, n);
    return ret_val;
} /* dbl_ */

/*  --------------------------------------------------------------------- */
doublereal dbl1_(doublereal *x, integer *n, doublereal *l, doublereal *x0, 
	doublereal *xn, doublereal *tb, integer *flag__, doublereal *laux1)
{
    /* Initialized data */

    static doublereal fl1 = 1.;

    /* System generated locals */
    integer i__1;
    doublereal ret_val, d__1;

    /* Builtin functions */
    double pow_di(doublereal *, integer *);

    /* Local variables */
    static integer i__;
    static doublereal aux, xmx0, xnmx;

/*  DBL1 computes the value assumed by the first derivative of an */
/*  n-degree Bernstein polynomial of a function  l  in the interval */
/*  (x0,xn)  at the point  x . */
/*  The evaluation is made using a Horner scheme, and the instructions */
/*  which do not depend upon  x  are executed under the control of */
/*  the variable  FLAG , for avoiding useless computations in */
/*  subsequent calls. */
/*  The degree  n  is supposed greater or equal to  3 . */

/*  INPUT PARAMETERS */

/*  X     : floating variable, containing the evaluation point. */
/*  N     : integer variable, containing the degree of Bernstein */
/*          polynomial. */
/*  L     : floating array, of bounds  0:N , containing the values */
/*          of the function  l . */
/*  X0    : floating variable, containing the left extreme of the */
/*          interval. */
/*  XN    : floating variable, containing the right extreme of the */
/*          interval. */
/*  TB    : floating array, of bounds  0:N-1 , containing the binomial */
/*          terms used for computing the Bernstein polynomial. */
/*  FLAG  : integer variable, containing a control parameter. */
/*          In the case  flag=0  DBL1  assumes to perform the first */
/*          evaluation of the polynomial, and computes the values */
/*          tb(i)*(l(i+1)-l(i)) , i=0,1,...,n-1 . In the case  flag=1 */
/*          DBL1 assumes to perform subsequent evaluations, and uses */
/*          the values previously computed. */


/*  OTHER PARAMETERS */

/*  LAUX1 : floating array, of bounds 0:N-1 used as a work area to store */
/*          intermediate results. */
    if (*flag__ == 0) {
	i__1 = *n - 1;
	for (i__ = 0; i__ <= i__1; ++i__) {
	    laux1[i__] = tb[i__] * (l[i__ + 1] - l[i__]);
/* L10: */
	}
    }
    xnmx = *xn - *x;
    xmx0 = *x - *x0;
    aux = fl1;
    ret_val = laux1[*n - 1];
    for (i__ = *n - 2; i__ >= 0; --i__) {
	aux = xnmx * aux;
	ret_val = laux1[i__] * aux + xmx0 * ret_val;
/* L20: */
    }
    d__1 = *xn - *x0;
    ret_val = *n * ret_val / pow_di(&d__1, n);
    return ret_val;
} /* dbl1_ */

/*  --------------------------------------------------------------------- */
doublereal dbl2_(doublereal *x, integer *n, doublereal *l, doublereal *x0, 
	doublereal *xn, doublereal *tb, integer *flag__, doublereal *laux2)
{
    /* Initialized data */

    static doublereal fl1 = 1.;

    /* System generated locals */
    integer i__1;
    doublereal ret_val, d__1;

    /* Builtin functions */
    double pow_di(doublereal *, integer *);

    /* Local variables */
    static integer i__;
    static doublereal aux, xmx0, xnmx;

/*  DBL2 computes the value assumed by the second derivative of an */
/*  n-degree Bernstein polynomial of a function  l  in the interval */
/*  (x0,xn)  at the point  x . */
/*  The evaluation is made using a Horner scheme, and the instructions */
/*  which do not depend upon  x  are executed under the control of */
/*  the variable  FLAG , for avoiding useless computations in */
/*  subsequent calls. */
/*  The degree  n  is supposed greater or equal to  3 . */

/*  INPUT PARAMETERS */

/*  X     : floating variable, containing the evaluation point. */
/*  N     : integer variable, containing the degree of Bernstein */
/*          polynomial. */
/*  L     : floating array, of bounds  0:N , containing the values */
/*          of the function  l . */
/*  X0    : floating variable, containing the left extreme of the */
/*          interval. */
/*  XN    : floating variable, containing the right extreme of the */
/*          interval. */
/*  TB    : floating array, of bounds  0:N-2 , containing the binomial */
/*          terms used for computing the Bernstein polynomial. */
/*  FLAG  : integer variable, containing a control parameter. */
/*          In the case  flag=0  DBL2  assumes to perform the first */
/*          evaluation of the polynomial, and computes the values */
/*          tb(i)*(l(i+2)-2*l(i+1)+l(i)) , i=0,1,...,n-2 . */
/*          In the case  flag=1  DBL2 assumes to perform subsequent */
/*          evaluations, and uses the values previously computed. */


/*  OTHER PARAMETERS */

/*  LAUX2 : floating array, of bounds 0:N-2 used as a work area to store */
/*          intermediate results. */
    if (*flag__ == 0) {
	i__1 = *n - 2;
	for (i__ = 0; i__ <= i__1; ++i__) {
	    laux2[i__] = tb[i__] * (l[i__ + 2] - l[i__ + 1] - l[i__ + 1] + l[
		    i__]);
/* L10: */
	}
    }
    xnmx = *xn - *x;
    xmx0 = *x - *x0;
    aux = fl1;
    ret_val = laux2[*n - 2];
    for (i__ = *n - 3; i__ >= 0; --i__) {
	aux = xnmx * aux;
	ret_val = laux2[i__] * aux + xmx0 * ret_val;
/* L20: */
    }
    d__1 = *xn - *x0;
    ret_val = *n * (*n - 1) * ret_val / pow_di(&d__1, n);
    return ret_val;
} /* dbl2_ */

/*  --------------------------------------------------------------------- */
/* Subroutine */ int dbntab_(doublereal *x, doublereal *y, integer *np, 
	doublereal *xtab, integer *ntab, integer *y0opt, integer *y1opt, 
	integer *y2opt, integer *n, integer *k, doublereal *d__, doublereal *
	d2, doublereal *tb, doublereal *l, doublereal *laux0, doublereal *
	laux1, doublereal *laux2, doublereal *y0tab, doublereal *y1tab, 
	doublereal *y2tab)
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer j;
    extern doublereal dbl_(doublereal *, integer *, doublereal *, doublereal *
	    , doublereal *, doublereal *, integer *, doublereal *);
    static integer ind;
    extern doublereal dbl1_(doublereal *, integer *, doublereal *, doublereal 
	    *, doublereal *, doublereal *, integer *, doublereal *), dbl2_(
	    doublereal *, integer *, doublereal *, doublereal *, doublereal *,
	     doublereal *, integer *, doublereal *);
    extern /* Subroutine */ int dbsear_(doublereal *, integer *, doublereal *,
	     integer *), dlspis_(doublereal *, doublereal *, doublereal *, 
	    doublereal *, integer *, integer *, integer *, integer *, 
	    doublereal *);

/*  DBNTAB evaluates the spline and/or its first derivative and/or its */
/*  second derivative at the points  xtab(j) , j=0,1,...,ntab  using */
/*  a binary search for finding the interval  [x(i),x(i+1)] in which */
/*  the tabulation point falls. The input (X,Y,NP,XTAB,NTAB,Y0OPT, */
/*  Y1OPT,Y2OPT,N,K,D,D2,TB) and the output (Y0TAB,Y1TAB,Y2TAB) */
/*  parameters have been explained in subroutine DBVSSE. For the others */
/*  see subroutines DTRMB, DLSPIS. */
    /* Parameter adjustments */
    --tb;

    /* Function Body */
    i__1 = *ntab;
    for (j = 0; j <= i__1; ++j) {
/*  Call subprogram  DBSEAR  to compute the index  ind  such that */
/*       x(ind).LE.xtab(j).LT.x(ind+1) . */
	dbsear_(x, np, &xtab[j], &ind);
/*  Call subprogram  DLSPIS  to compute the linear shape-preserving */
/*  interpolating spline  l  at */
/*      x(ind)+p*(x(ind+1)-x(ind))/n , p=0,1,...,n . */
	dlspis_(x, y, d__, d2, np, n, k, &ind, l);
	if (*y0opt == 1) {
/*  Evaluate the spline at  xtab(j) . */
	    y0tab[j] = dbl_(&xtab[j], n, l, &x[ind], &x[ind + 1], &tb[*n * (*
		    n + 1) / 2], &c__0, laux0);
	}
	if (*y1opt == 1) {
/*  Evaluate the first derivative of the spline at  xtab(j) . */
	    y1tab[j] = dbl1_(&xtab[j], n, l, &x[ind], &x[ind + 1], &tb[(*n - 
		    1) * *n / 2], &c__0, laux1);
	}
	if (*y2opt == 1) {
/*  Evaluate the second derivative of the spline at  xtab(j) . */
	    y2tab[j] = dbl2_(&xtab[j], n, l, &x[ind], &x[ind + 1], &tb[(*n - 
		    2) * (*n - 1) / 2], &c__0, laux2);
	}
/* L40: */
    }
    return 0;
} /* dbntab_ */

/*  --------------------------------------------------------------------- */
/* Subroutine */ int dbsear_(doublereal *x, integer *np, doublereal *xtab, 
	integer *ind)
{
    static integer i1, i2, med;

/*  Given an ordered set of points  (x(i), i=0,1,...,np)  and the */
/*  point  xtab , DBSEAR finds the index  ind  such that */

/*              x(ind) .LE. xtab .LT. x(ind+1) */

/*  using a standard binary search. DBSEAR  sets  ind=0  or  ind=np-1 */
/*  whenever  xtab.LT.x(0)  or  x(np).LE.xtab . */


/*  INPUT PARAMETERS */

/*  X     : floating array, of bounds  0:NP , containing the set of */
/*          ordered points. */
/*  XTAB  : floating variable, containing the point to be processed. */
/*  NP    : integer  variable, defining the number of points of the */
/*          ordered set. */


/*  OUTPUT PARAMETERS */

/*  IND   : integer variable, whose value selects the interval in */
/*          which the point  xtab  falls. */
    if (*xtab <= x[0]) {
	*ind = 0;
	return 0;
    }
    if (*xtab >= x[*np]) {
	*ind = *np - 1;
	return 0;
    }
    i1 = 0;
    i2 = *np;
L10:
    if (! (i1 != i2 - 1)) {
	goto L20;
    }
    med = (i1 + i2) / 2;
    if (*xtab < x[med]) {
	i2 = med;
    } else if (*xtab > x[med]) {
	i1 = med;
    } else {
	*ind = med;
	return 0;
    }
    goto L10;
L20:
    *ind = i1;
    return 0;
} /* dbsear_ */

/*  --------------------------------------------------------------------- */
/* Subroutine */ int dbvc_(doublereal *x, doublereal *y, integer *np, integer 
	*n, integer *k, integer *opt, doublereal *d0, doublereal *dnp, 
	doublereal *d20, doublereal *d2np, integer *constr, doublereal *info, 
	integer *comm, integer *part, doublereal *eps, integer *kmax, integer 
	*maxstp, doublereal *a1, doublereal *a2, doublereal *daux2, 
	doublereal *daux3, D_fp beta, D_fp betai, D_fp rho, D_fp rhoi, 
	doublereal *d__, doublereal *d2, integer *errc, integer *diagn)
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer i__, p, q, r__;
    extern /* Subroutine */ int dalg3_(doublereal *, integer *, integer *, 
	    integer *, integer *, doublereal *, doublereal *, doublereal *, 
	    integer *, integer *, D_fp, D_fp, doublereal *, doublereal *, 
	    doublereal *, integer *, integer *), dscdrc_(integer *, 
	    doublereal *, doublereal *, doublereal *, integer *, integer *, 
	    doublereal *, doublereal *, doublereal *, D_fp, D_fp, doublereal *
	    , doublereal *, doublereal *, doublereal *, integer *), dstinf_(
	    integer *, doublereal *, doublereal *, integer *, integer *, 
	    integer *, doublereal *, doublereal *, doublereal *, integer *, 
	    integer *, integer *, doublereal *, D_fp, D_fp, doublereal *, 
	    doublereal *, doublereal *, integer *, integer *);

/*  DBVC checks input parameters and computes the required spline. */

/*  The input parameters X,Y,NP,N,K,OPT,D0,DNP,D20,D2NP,CONSTR,COMM,PART, */
/*  EPS,KMAX,MAXSTP,BETA,BETAI,RHO,RHOI and the output parameters */
/*  D,D2,ERRC,DIAGN are described in subroutine DBVSSC. */
/*  The other parameters are described in the called subprograms. */
/*  Check the input parameters NP and OPT. */
    /* Parameter adjustments */
    --daux2;
    --a2;
    --a1;
    --info;

    /* Function Body */
    p = *opt / 100;
    q = *opt % 100 / 10;
    r__ = *opt % 10;
    if (*np < 2 || (p < 1 || p > 4) || (q < 1 || q > 3) || (r__ < 0 || r__ > 
	    4) || p == 1 && r__ == 0) {
	*errc = 1;
	return 0;
    }
/*  Check the array CONSTR. */
    if (*opt % 10 == 4) {
	i__1 = *np - 1;
	for (i__ = 0; i__ <= i__1; ++i__) {
	    if (constr[i__] < 0 || constr[i__] > 3) {
		*errc = 2;
		return 0;
	    }
/* L10: */
	}
    }
/*  Check the input parameters N and K. */
    if (*k < 1 || *k > 2 || *n < *k * 3) {
	*errc = 3;
	return 0;
    }
/*  Check the abscissas of the interpolation points. */
    i__1 = *np - 1;
    for (i__ = 0; i__ <= i__1; ++i__) {
	if (x[i__ + 1] <= x[i__]) {
	    *errc = 4;
	    return 0;
	}
/* L20: */
    }
/*  Call subprogram DSTINF to set the information array INFO. */
/*  Initialize the array DIAGN. */
    i__1 = *np - 1;
    for (i__ = 0; i__ <= i__1; ++i__) {
	diagn[i__] = 0;
/* L30: */
    }
    dstinf_(opt, d0, dnp, constr, n, k, x, y, d__, np, comm, part, eps, (D_fp)
	    beta, (D_fp)betai, &daux2[1], daux3, &info[1], errc, diagn);
/*  Call subprogram DALG3 to compute the array D containing the first */
/*  derivative at initial points. */
    dalg3_(&info[1], np, comm, part, opt, d0, dnp, eps, kmax, maxstp, (D_fp)
	    beta, (D_fp)betai, &a1[1], &a2[1], d__, errc, diagn);
    if (*k == 2) {
/*  A  C(2) spline is required. Compute the sequence of second derivati- */
/*  ves d2(i), i=0,...,np , according to the shape constraints and, if */
/*  possible, to boundary conditions. */
	dscdrc_(n, x, y, d__, opt, np, eps, d20, d2np, (D_fp)rho, (D_fp)rhoi, 
		&a1[1], &a2[1], daux3, d2, errc);
    }
    return 0;
} /* dbvc_ */

/*  --------------------------------------------------------------------- */
/* Subroutine */ int dbve_(doublereal *x, doublereal *y, integer *np, integer 
	*n, integer *k, doublereal *xtab, integer *ntab, integer *sbopt, 
	integer *y0opt, integer *y1opt, integer *y2opt, doublereal *d__, 
	doublereal *d2, integer *errc, doublereal *tb, doublereal *l, 
	doublereal *laux0, doublereal *laux1, doublereal *laux2, doublereal *
	y0tab, doublereal *y1tab, doublereal *y2tab, integer *erre)
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer i__;
    extern /* Subroutine */ int dtrmb_(integer *, doublereal *), dbntab_(
	    doublereal *, doublereal *, integer *, doublereal *, integer *, 
	    integer *, integer *, integer *, integer *, integer *, doublereal 
	    *, doublereal *, doublereal *, doublereal *, doublereal *, 
	    doublereal *, doublereal *, doublereal *, doublereal *, 
	    doublereal *), dsqtab_(doublereal *, doublereal *, integer *, 
	    doublereal *, integer *, integer *, integer *, integer *, integer 
	    *, integer *, doublereal *, doublereal *, doublereal *, 
	    doublereal *, doublereal *, doublereal *, doublereal *, 
	    doublereal *, doublereal *, doublereal *);

/*  DBVE checks input parameters and evaluates the required spline. */

/*  The input parameters X,Y,NP,N,K,XTAB,NTAB,SBOPT,Y0OPT,Y1OPT,Y2OPT, */
/*  D,D2,ERRC and the output parameters Y0TAB,Y1TAB,Y2TAB,ERRE are */
/*  described in subroutine DBVSSE. The others are used as work areas */
/*  and will be eventually described in the subsequent routines. */
/*  Check the correctness of input data, that is if subroutine DBVSSC */
/*  has correctly run. */
    /* Parameter adjustments */
    --tb;

    /* Function Body */
    if (*errc == 1 || *errc == 2 || *errc == 3 || *errc == 4 || *errc == 5 || 
	    *errc == 7 || *errc == 8 || *errc == 10) {
	*erre = 1;
	return 0;
    }
/*  Check the input parameters NTAB, SBOPT, Y0OPT, Y1OPT, Y2OPT. */
    if (*ntab < 0 || *sbopt != 1 && *sbopt != 2 || *y0opt != 0 && *y0opt != 1 
	    || *y1opt != 0 && *y1opt != 1 || *y2opt != 0 && *y2opt != 1) {
	*erre = 2;
	return 0;
    }
    if (*sbopt == 1 && *ntab > 0) {
/*  Check the abscissas of the tabulation points when the sequential */
/*  search is required. */
	i__1 = *ntab - 1;
	for (i__ = 0; i__ <= i__1; ++i__) {
	    if (xtab[i__ + 1] <= xtab[i__]) {
		*erre = 3;
		return 0;
	    }
/* L10: */
	}
    }
/*  Call subprogram DTRMB to compute the binomial terms needed */
/*  in the expression of Bernstein polynomials. */
    dtrmb_(n, &tb[1]);
    if (*sbopt == 1) {
/*  sbopt=1:  sequential search is required. */
	dsqtab_(x, y, np, xtab, ntab, y0opt, y1opt, y2opt, n, k, d__, d2, &tb[
		1], l, laux0, laux1, laux2, y0tab, y1tab, y2tab);
    } else {
/*  sbopt=2: binary search is required. */
	dbntab_(x, y, np, xtab, ntab, y0opt, y1opt, y2opt, n, k, d__, d2, &tb[
		1], l, laux0, laux1, laux2, y0tab, y1tab, y2tab);
    }
    return 0;
} /* dbve_ */

/*  --------------------------------------------------------------------- */
/* Subroutine */ int dfpsvf_(doublereal *a1, doublereal *a2, integer *np, 
	doublereal *info, integer *comm, integer *part, doublereal *eps, 
	integer *maxstp, D_fp beta, integer *errc, doublereal *dstar)
{
    /* Initialized data */

    static doublereal fl1d2 = .5;

    /* System generated locals */
    integer i__1, i__2;

    /* Builtin functions */
    integer pow_ii(integer *, integer *);

    /* Local variables */
    static doublereal h__;
    static integer i__;
    static doublereal mid;
    extern doublereal dsl_(doublereal *, doublereal *, doublereal *);
    static integer step, errc1;
    extern /* Subroutine */ int dalg1d_(doublereal *, doublereal *, integer *,
	     doublereal *, integer *, integer *, doublereal *, doublereal *, 
	    integer *);
    static integer substp;

/*  DFPSVF finds, if possible, dstar.IN.[a1(1,0),a1(2,0)] such that */
/*               beta(dstar) .INT. phi(dstar)                     (1) */

/*  The input parameters NP,COMM,PART,EPS,MAXSTP,BETA, and the output */
/*  parameter ERRC are described in DBVSSC. The input parameters A1 and */
/*  A2 are described in  DALG1. */
    /* Parameter adjustments */
    --a2;
    --a1;
    --info;

    /* Function Body */
/*  If the optimum input value of dstar does not belong to */
/*  [a1(1,0),a1(2,0)] , the nearest extreme of this interval */
/*  replaces the old value of dstar. */
    *dstar = dsl_(&a1[1], &a1[2], dstar);
/*  Compute phi(dstar). */
    dalg1d_(dstar, &a1[1], np, &info[1], comm, part, eps, &a2[1], &errc1);
/*  If phi(dstar) is not empty and dstar satisfies (1), it is the desired */
/*  value. */
    if (errc1 == 0 && (a2[(*np << 1) + 1] - *eps <= (*beta)(dstar) && (*beta)(
	    dstar) <= a2[(*np << 1) + 2] + *eps)) {
	return 0;
    }
/*  If it is not the case, look for another value. First, check */
/*  if the midpoint of the interval of all possible values satisfies */
/*  condition (1). */
    mid = (a1[1] + a1[2]) * fl1d2;
    *dstar = mid;
    dalg1d_(dstar, &a1[1], np, &info[1], comm, part, eps, &a2[1], &errc1);
    if (errc1 == 0 && (a2[(*np << 1) + 1] - *eps <= (*beta)(dstar) && (*beta)(
	    dstar) <= a2[(*np << 1) + 2] + *eps)) {
	return 0;
    }
/*  Second, check if any point of a tabulation of interval */
/*  [a1(1,0),a1(2,0)]  satisfies the condition (1). The tabulation */
/*  points are given by jumps of decreasing lenghts with alternate */
/*  direction with respect to the middle of the interval. */
    h__ = (a1[2] - a1[1]) * fl1d2;
    i__1 = *maxstp;
    for (step = 1; step <= i__1; ++step) {
	h__ *= fl1d2;
	substp = pow_ii(&c__2, &step) - 1;
	i__2 = substp;
	for (i__ = 1; i__ <= i__2; i__ += 2) {
	    *dstar = mid - i__ * h__;
	    dalg1d_(dstar, &a1[1], np, &info[1], comm, part, eps, &a2[1], &
		    errc1);
	    if (errc1 == 0 && (a2[(*np << 1) + 1] - *eps <= (*beta)(dstar) && 
		    (*beta)(dstar) <= a2[(*np << 1) + 2] + *eps)) {
		return 0;
	    }
	    *dstar = mid + i__ * h__;
	    dalg1d_(dstar, &a1[1], np, &info[1], comm, part, eps, &a2[1], &
		    errc1);
	    if (errc1 == 0 && (a2[(*np << 1) + 1] - *eps <= (*beta)(dstar) && 
		    (*beta)(dstar) <= a2[(*np << 1) + 2] + *eps)) {
		return 0;
	    }
/* L10: */
	}
/* L20: */
    }
/*  Finally, check if condition (1) is satisfied by one of the */
/*  [a1(1,0),a1(2,0)] extremes. */
    *dstar = a1[1];
    dalg1d_(dstar, &a1[1], np, &info[1], comm, part, eps, &a2[1], &errc1);
    if (errc1 == 0 && (a2[(*np << 1) + 1] - *eps <= (*beta)(dstar) && (*beta)(
	    dstar) <= a2[(*np << 1) + 2] + *eps)) {
	return 0;
    }
    *dstar = a1[2];
    dalg1d_(dstar, &a1[1], np, &info[1], comm, part, eps, &a2[1], &errc1);
    if (errc1 == 0 && (a2[(*np << 1) + 1] - *eps <= (*beta)(dstar) && (*beta)(
	    dstar) <= a2[(*np << 1) + 2] + *eps)) {
	return 0;
    }
/*  If dstar satisfying (1) has not been found, send a message resetting */
/*  the error flag errc. */
    if (*errc == 6) {
	*errc = 8;
    } else {
	*errc = 7;
    }
    return 0;
} /* dfpsvf_ */

/*  --------------------------------------------------------------------- */
/* Subroutine */ int dintrs_(doublereal *a, doublereal *b, doublereal *c__, 
	doublereal *d__, doublereal *p1, doublereal *p2)
{
/*  DINTRS computes the intersection of the two intervals  [a,b] */
/*  and [c,d]. [p1,p2] is the result. The output  p1.GT.p2 means that */
/*  the intervals are disjoint. DINTRS assumes  a.LE.b  and  c.LE.d . */
    *p1 = max(*a,*c__);
    *p2 = min(*b,*d__);
    return 0;
} /* dintrs_ */

/*  --------------------------------------------------------------------- */
/* Subroutine */ int dlspis_(doublereal *x, doublereal *y, doublereal *d__, 
	doublereal *d2, integer *np, integer *n, integer *k, integer *ind, 
	doublereal *l)
{
    /* Initialized data */

    static doublereal fl1 = 1.;
    static doublereal fl2 = 2.;
    static doublereal fl4 = 4.;

    /* System generated locals */
    integer i__1;
    doublereal d__1;

    /* Local variables */
    static doublereal h__;
    static integer i__;
    static doublereal q1, q2, alpha;

/*  DLSPIS   evaluates the control points of the Bernstein-Bezier net */
/*  l:=l(x) of the interpolating spline  s:=s(x) , s.IN.BS(n;k) in the */
/*  interval  [x(ind),x(ind+1)] . For a description of the function  l */
/*  see the comments in subroutines  DBVSSC and DSCDRC. Here we only */
/*  recall that the structure of the net is different for k=1 or k=2 . */

/*  The input parameters  X,Y,D,D2,NP,N,K  are explained in subroutine */
/*  SPISE. */

/*  OTHER PARAMETERS */

/*  IND   : integer variable, used to select the knots interval. */
/*  L     : floating array, of bounds  0:N , containing the ordinates */
/*          of the control points. */
    h__ = x[(0 + (0 + (*ind + 1 << 3))) / 8] - x[(0 + (0 + (*ind << 3))) / 8];
/*  Compute the net in the case  k=1 . */
    if (*k == 1) {
	l[0] = y[*ind];
	l[1] = y[*ind] + h__ * d__[*ind] / *n;
	l[*n] = y[*ind + 1];
	l[*n - 1] = y[*ind + 1] - h__ * d__[*ind + 1] / *n;
	i__1 = *n - 2;
	for (i__ = 2; i__ <= i__1; ++i__) {
	    alpha = (i__ - fl1) / (*n - fl2);
	    l[i__] = (fl1 - alpha) * l[1] + alpha * l[*n - 1];
/* L10: */
	}
    } else if (*k == 2) {
/*  Compute the net in the case  k=2 . */
	l[0] = y[*ind];
	l[1] = l[0] + h__ * d__[*ind] / *n;
/* Computing 2nd power */
	d__1 = h__;
	l[2] = d__1 * d__1 * d2[*ind] / (*n * (*n - 1)) + fl2 * l[1] - l[0];
	l[*n] = y[*ind + 1];
	l[*n - 1] = l[*n] - h__ * d__[*ind + 1] / *n;
/* Computing 2nd power */
	d__1 = h__;
	l[*n - 2] = d__1 * d__1 * d2[*ind + 1] / (*n * (*n - 1)) + fl2 * l[*n 
		- 1] - l[*n];
	alpha = (*n - 4) / 2 / (*n - fl4);
	q1 = alpha * (y[*ind + 1] - fl2 * h__ * d__[*ind + 1] / *n) + (fl1 - 
		alpha) * (y[*ind] + fl2 * h__ * d__[*ind] / *n);
	q2 = (fl1 - alpha) * (y[*ind + 1] - fl2 * h__ * d__[*ind + 1] / *n) + 
		alpha * (y[*ind] + fl2 * h__ * d__[*ind] / *n);
	i__1 = *n / 2;
	for (i__ = 3; i__ <= i__1; ++i__) {
	    alpha = (i__ - fl2) / (*n / 2 - fl2);
	    l[i__] = (fl1 - alpha) * l[2] + alpha * q1;
/* L30: */
	}
	i__1 = *n - 3;
	for (i__ = *n / 2 + 1; i__ <= i__1; ++i__) {
	    alpha = (*n - fl2 - i__) / (*n / 2 - fl2);
	    l[i__] = (fl1 - alpha) * l[*n - 2] + alpha * q2;
/* L40: */
	}
    }
    return 0;
} /* dlspis_ */

/*  --------------------------------------------------------------------- */
doublereal dmdian_(doublereal *a, doublereal *b, doublereal *c__)
{
    /* System generated locals */
    doublereal ret_val, d__1, d__2;

/*  Given three numbers a,b,c , median  is the one which lies between */
/*  the other two. */
/* Computing MIN */
    d__1 = max(*a,*b), d__2 = max(*b,*c__), d__1 = min(d__1,d__2), d__2 = max(
	    *c__,*a);
    ret_val = min(d__1,d__2);
    return ret_val;
} /* dmdian_ */

/*  --------------------------------------------------------------------- */
integer dmnind_(doublereal *d__, doublereal *part)
{
    /* Initialized data */

    static doublereal fl30 = 1e30;

    /* System generated locals */
    integer ret_val;
    doublereal d__1;

    /* Local variables */
    static integer j;
    static doublereal aux[22], mindis;

/*  DMNIND finds the index of the component of the array PART closest */
/*  to d . */
    for (j = 0; j <= 21; ++j) {
	aux[j] = (d__1 = *d__ - part[j], abs(d__1));
/* L10: */
    }
    mindis = fl30;
    for (j = 0; j <= 21; ++j) {
	if (aux[j] < mindis) {
	    ret_val = j;
	    mindis = aux[j];
	}
/* L20: */
    }
    return ret_val;
} /* dmnind_ */

/*  --------------------------------------------------------------------- */
doublereal dmnmod_(doublereal *a, doublereal *b)
{
    /* Initialized data */

    static doublereal fl1 = 1.;
    static doublereal fl2 = 2.;

    /* System generated locals */
    doublereal ret_val, d__1, d__2;

    /* Builtin functions */
    double d_sign(doublereal *, doublereal *);

/*  Given two real numbers a and b, DMNMOD returns the number between */
/*  a and b which is closest to zero. */
/* Computing MIN */
    d__1 = abs(*a), d__2 = abs(*b);
    ret_val = (d_sign(&fl1, a) + d_sign(&fl1, b)) / fl2 * min(d__1,d__2);
    return ret_val;
} /* dmnmod_ */

/*  --------------------------------------------------------------------- */
/* Subroutine */ int dmsk1_(doublereal *info, integer *constr, integer *comm, 
	integer *part, integer *ind1, integer *np)
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer i__;

/*  DMSK1 compares the constraints required in input by the user and */
/*  stored in the array CONSTR with the shape of the data, stored by */
/*  DSTINF in the array INFO. If the required and real shapes do not */
/*  agree, DMSK1 resets both INFO and CONSTR with the 'intersection' */
/*  of the shapes. For example, if info(ind1+i)=11 , that is the data */
/*  are increasing and convex, and constr(i)=2 , that is only convexity */
/*  is required, then the output values will be  info(ind1+i)=10 */
/*  (convexity) and constr(i)=2 (unchanged). If  info(ind1+i)=20 */
/*  (concavity) and  constr(i)=1 (monotonicity) the output will be */
/*  info(ind1+i)=constr(i)=0 (no constraints). So, the computations made */
/*  in DALG3 will be based on these new values for selecting the domains */
/*  of admissible derivatives, and CONSTR will contain information on */
/*  the constraints effectively imposed. */
/*  Further details on the parameters INFO and IND1 can be found in sub- */
/*  routine DSTINF; CONSTR, COMM, PART, NP are explaained in subroutine */
/*  DBVSSC. */
    /* Parameter adjustments */
    --info;

    /* Function Body */
    i__1 = *np - 1;
    for (i__ = 0; i__ <= i__1; ++i__) {
	if (info[*ind1 + i__] == 0. || constr[i__] == 0) {
	    info[*ind1 + i__] = 0.;
	    constr[i__] = 0;
	} else if (info[*ind1 + i__] == 1.) {
	    if (constr[i__] == 1) {
		info[*ind1 + i__] = 1.;
		constr[i__] = 1;
	    } else if (constr[i__] == 2) {
		info[*ind1 + i__] = 0.;
		constr[i__] = 0;
	    } else if (constr[i__] == 3) {
		info[*ind1 + i__] = 1.;
		constr[i__] = 1;
	    }
	} else if (info[*ind1 + i__] == 2.) {
	    if (constr[i__] == 1) {
		info[*ind1 + i__] = 2.;
		constr[i__] = 1;
	    } else if (constr[i__] == 2) {
		info[*ind1 + i__] = 0.;
		constr[i__] = 0;
	    } else if (constr[i__] == 3) {
		info[*ind1 + i__] = 2.;
		constr[i__] = 1;
	    }
	} else if (info[*ind1 + i__] == 10.) {
	    if (constr[i__] == 1) {
		info[*ind1 + i__] = 0.;
		constr[i__] = 0;
	    } else if (constr[i__] == 2) {
		info[*ind1 + i__] = 10.;
		constr[i__] = 2;
	    } else if (constr[i__] == 3) {
		info[*ind1 + i__] = 10.;
		constr[i__] = 2;
	    }
	} else if (info[*ind1 + i__] == 20.) {
	    if (constr[i__] == 1) {
		info[*ind1 + i__] = 0.;
		constr[i__] = 0;
	    } else if (constr[i__] == 2) {
		info[*ind1 + i__] = 20.;
		constr[i__] = 2;
	    } else if (constr[i__] == 3) {
		info[*ind1 + i__] = 20.;
		constr[i__] = 2;
	    }
	} else if (info[*ind1 + i__] == 11.) {
	    if (constr[i__] == 1) {
		info[*ind1 + i__] = 1.;
		constr[i__] = 1;
	    } else if (constr[i__] == 2) {
		info[*ind1 + i__] = 10.;
		constr[i__] = 2;
	    } else if (constr[i__] == 3) {
		info[*ind1 + i__] = 11.;
		constr[i__] = 3;
	    }
	} else if (info[*ind1 + i__] == 21.) {
	    if (constr[i__] == 1) {
		info[*ind1 + i__] = 1.;
		constr[i__] = 1;
	    } else if (constr[i__] == 2) {
		info[*ind1 + i__] = 20.;
		constr[i__] = 2;
	    } else if (constr[i__] == 3) {
		info[*ind1 + i__] = 21.;
		constr[i__] = 3;
	    }
	} else if (info[*ind1 + i__] == 12.) {
	    if (constr[i__] == 1) {
		info[*ind1 + i__] = 2.;
		constr[i__] = 1;
	    } else if (constr[i__] == 2) {
		info[*ind1 + i__] = 10.;
		constr[i__] = 2;
	    } else if (constr[i__] == 3) {
		info[*ind1 + i__] = 12.;
		constr[i__] = 3;
	    }
	} else if (info[*ind1 + i__] == 22.) {
	    if (constr[i__] == 1) {
		info[*ind1 + i__] = 2.;
		constr[i__] = 1;
	    } else if (constr[i__] == 2) {
		info[*ind1 + i__] = 20.;
		constr[i__] = 2;
	    } else if (constr[i__] == 3) {
		info[*ind1 + i__] = 22.;
		constr[i__] = 3;
	    }
	}
/* L10: */
    }
    return 0;
} /* dmsk1_ */

/*  --------------------------------------------------------------------- */
/* Subroutine */ int dmsk2_(doublereal *info, integer *comm, integer *part, 
	integer *ind1, integer *np, doublereal *d0, doublereal *dnp, 
	doublereal *eps, integer *errc, integer *diagn)
{
    static doublereal a, b, p1, p2;
    extern /* Subroutine */ int dprj0_(integer *, doublereal *, integer *, 
	    integer *, integer *, doublereal *, doublereal *), dprj1_(
	    doublereal *, doublereal *, doublereal *, doublereal *, integer *,
	     doublereal *, integer *, integer *, integer *, doublereal *, 
	    doublereal *);

/*  This routine controls if the separable boundary conditions d(0)=d0 */
/*  and d(np)=dnp are compatible with the first and the last domain of */
/*  constraints. The error flag is reset correspondingly. */
/*  Details on the parameters INFO, IND1 and COMM, PART, NP, D0, DNP, */
/*  EPS, ERRC, DIAGN can be found in subroutines */
/*  DSTINF and DBVSSC respectively. */
    /* Parameter adjustments */
    --info;

    /* Function Body */
    dprj0_(&c__1, &info[1], comm, part, np, &p1, &p2);
    if (! (p1 - *eps <= *d0 && *d0 <= p2 + *eps)) {
	info[*ind1] = 0.;
	*errc = 9;
	diagn[0] = 1;
    }
    dprj0_(np, &info[1], comm, part, np, &a, &b);
    dprj1_(&a, &b, &info[4], &info[5], np, &info[1], comm, part, np, &p1, &p2)
	    ;
    if (! (p1 - *eps <= *dnp && *dnp <= p2 + *eps)) {
	info[*ind1 + *np - 1] = 0.;
	*errc = 9;
	diagn[*np - 1] = 1;
    }
    return 0;
} /* dmsk2_ */

/*  --------------------------------------------------------------------- */
/* Subroutine */ int dprj0_(integer *i__, doublereal *info, integer *comm, 
	integer *part, integer *np, doublereal *p1, doublereal *p2)
{
    /* Initialized data */

    static doublereal fl0 = 0.;

    static doublereal k, n, del;
    static integer kind;

/*  Given the integer i , DPRJ0 computes the set B(i) performing the */
/*  projection of D(i) (subset of the (i-1)i-plane) onto the (i-1)-axis. */

/*  The input parameters COMM,PART,NP are described in DBVSSC; the input */
/*  parameter INFO is described in subroutine DSTINF. */

/*  OUTPUT PARAMETERS: */

/*  P1  : floating variable, containing the left extreme of the */
/*        resulting interval. */

/*  P2  : floating variable, containing the right extreme of the */
/*        resulting interval. */
    /* Parameter adjustments */
    --info;

    /* Function Body */
    n = info[1];
    k = info[2];
    kind = (integer) info[*comm + 1 + (*i__ - 1)];
    del = info[*comm + *np + 1 + (*i__ - 1)];
/*  No constraint */
    if (kind == 0) {
	*p1 = info[4];
	*p2 = info[5];
/*  Increase constraints */
    } else if (kind == 1) {
	*p1 = fl0;
	*p2 = n * del / k;
/*  Decrease constraints */
    } else if (kind == 2) {
	*p1 = n * del / k;
	*p2 = fl0;
/*  Convexity constraints */
    } else if (kind == 10) {
	*p1 = info[4];
	*p2 = del;
/*  Concavity constraints */
    } else if (kind == 20) {
	*p1 = del;
	*p2 = info[5];
/*  Increase and convexity */
    } else if (kind == 11) {
	*p1 = fl0;
	*p2 = del;
/*  Increase and concavity */
    } else if (kind == 21) {
	*p1 = del;
	*p2 = n * del / k;
/*  Decrease and convexity */
    } else if (kind == 12) {
	*p1 = n * del / k;
	*p2 = del;
/*  Decrease and concavity */
    } else if (kind == 22) {
	*p1 = del;
	*p2 = fl0;
    }
    return 0;
} /* dprj0_ */

/*  --------------------------------------------------------------------- */
/* Subroutine */ int dprj1_(doublereal *a, doublereal *b, doublereal *c__, 
	doublereal *d__, integer *i__, doublereal *info, integer *comm, 
	integer *part, integer *np, doublereal *p1, doublereal *p2)
{
    /* Initialized data */

    static doublereal fl0 = 0.;

    /* System generated locals */
    doublereal d__1, d__2;

    /* Local variables */
    static doublereal k, n, del;
    static integer kind;

/*  Given the set S=[a,b]x[c,d] and the integer i , DPRJ1 performs the */
/*  intersection of S with the domain D(i) and the projection of the */
/*  resulting set (a subset of (i-1)i-plane) onto the i-axis . */

/*  The input parameters COMM,PART,NP are described in DBVSSC; the input */
/*  parameter INFO is described in DSTINF. */

/*  OUTPUT PARAMETERS: */

/*  P1  : floating variable, containing the left extreme of the */
/*        resulting interval. */

/*  P2  : floating variable, containing the right extreme of the */
/*        resulting interval. */
    /* Parameter adjustments */
    --info;

    /* Function Body */
    n = info[1];
    k = info[2];
    kind = (integer) info[*comm + 1 + (*i__ - 1)];
    del = info[*comm + *np + 1 + (*i__ - 1)];
/*  No constraint */
    if (kind == 0) {
	*p1 = *c__;
	*p2 = *d__;
/*  Increase constraints */
    } else if (kind == 1) {
	*p1 = fl0;
	*p2 = -(*a) + n * del / k;
/*  Decrease constraints */
    } else if (kind == 2) {
	*p1 = -(*b) + n * del / k;
	*p2 = fl0;
/*  Convexity constraints */
    } else if (kind == 10) {
	*p1 = -k * *b / (n - k) + n * del / (n - k);
	*p2 = -(n - k) * *a / k + n * del / k;
/*  Concavity constraints */
    } else if (kind == 20) {
	*p1 = -(n - k) * *b / k + n * del / k;
	*p2 = -k * *a / (n - k) + n * del / (n - k);
/*  Increase and convexity */
    } else if (kind == 11) {
	*p1 = -k * *b / (n - k) + n * del / (n - k);
	*p2 = -(n - k) * *a / k + n * del / k;
/*  Increase and concavity */
    } else if (kind == 21) {
/* Computing MAX */
	d__1 = fl0, d__2 = -(n - k) * *b / k + n * del / k;
	*p1 = max(d__1,d__2);
	*p2 = -k * *a / (n - k) + n * del / (n - k);
/*  Decrease and convexity */
    } else if (kind == 12) {
	*p1 = -k * *b / (n - k) + n * del / (n - k);
/* Computing MIN */
	d__1 = fl0, d__2 = -(n - k) * *a / k + n * del / k;
	*p2 = min(d__1,d__2);
/*  Decrease and concavity */
    } else if (kind == 22) {
	*p1 = -(n - k) * *b / k + n * del / k;
	*p2 = -k * *a / (n - k) + n * del / (n - k);
    }
    *p1 = max(*p1,*c__);
    *p2 = min(*p2,*d__);
    return 0;
} /* dprj1_ */

/*  --------------------------------------------------------------------- */
/* Subroutine */ int dprj2_(doublereal *a, doublereal *b, doublereal *c__, 
	doublereal *d__, integer *i__, doublereal *info, integer *comm, 
	integer *part, integer *np, doublereal *p1, doublereal *p2)
{
    /* Initialized data */

    static doublereal fl0 = 0.;

    /* System generated locals */
    doublereal d__1, d__2;

    /* Local variables */
    static doublereal k, n, del;
    static integer kind;

/*  Given the set s=[a,b]x[c,d] and the integer i, DPRJ2 performs the */
/*  intersection of S with the domain D(i) and the projection of the */
/*  resulting set (subset of (i-1)i-plane) onto the (i-1)-axis . */

/*  The input parameters COMM,PART,NP are described in DBVSSC; the input */
/*  parameter INFO is described in DSTINF. */

/*  OUTPUT PARAMETERS: */

/*  P1  : floating variable, containing the left extreme of the */
/*        resulting interval. */

/*  P2  : floating variable, containing the right extreme of the */
/*        resulting interval. */
    /* Parameter adjustments */
    --info;

    /* Function Body */
    n = info[1];
    k = info[2];
    kind = (integer) info[*comm + 1 + (*i__ - 1)];
    del = info[*comm + *np + 1 + (*i__ - 1)];
/*  No constraints */
    if (kind == 0) {
	*p1 = *a;
	*p2 = *b;
/*  Increase constraints */
    } else if (kind == 1) {
	*p1 = fl0;
	*p2 = -(*c__) + n * del / k;
/*  Decrease constraints */
    } else if (kind == 2) {
	*p1 = -(*d__) + n * del / k;
	*p2 = fl0;
/*  Convexity constraints */
    } else if (kind == 10) {
	*p1 = -(n - k) * *d__ / k + n * del / k;
	*p2 = -k * *c__ / (n - k) + n * del / (n - k);
/*  Concavity constraints */
    } else if (kind == 20) {
	*p1 = -k * *d__ / (n - k) + n * del / (n - k);
	*p2 = -(n - k) * *c__ / k + n * del / k;
/*  Increase and convexity */
    } else if (kind == 11) {
/* Computing MAX */
	d__1 = fl0, d__2 = -(n - k) * *d__ / k + n * del / k;
	*p1 = max(d__1,d__2);
	*p2 = -k * *c__ / (n - k) + n * del / (n - k);
/*  Increase and concavity */
    } else if (kind == 21) {
	*p1 = -k * *d__ / (n - k) + n * del / (n - k);
	*p2 = -(n - k) * *c__ / k + n * del / k;
/*  Decrease and convexity */
    } else if (kind == 12) {
	*p1 = -(n - k) * *d__ / k + n * del / k;
	*p2 = -k * *c__ / (n - k) + n * del / (n - k);
/*  Decrease and concavity */
    } else if (kind == 22) {
	*p1 = -k * *d__ / (n - k) + n * del / (n - k);
/* Computing MIN */
	d__1 = fl0, d__2 = -(n - k) * *c__ / k + n * del / k;
	*p2 = min(d__1,d__2);
    }
    *p1 = max(*p1,*a);
    *p2 = min(*p2,*b);
    return 0;
} /* dprj2_ */

/*  --------------------------------------------------------------------- */
/* Subroutine */ int dscdrc_(integer *n, doublereal *x, doublereal *y, 
	doublereal *d__, integer *opt, integer *np, doublereal *eps, 
	doublereal *d20, doublereal *d2np, D_fp rho, D_fp rhoi, doublereal *
	a1, doublereal *a2, doublereal *h__, doublereal *d2, integer *errc)
{
    /* Initialized data */

    static doublereal fl0 = 0.;
    static doublereal fl1 = 1.;
    static doublereal fl2 = 2.;
    static doublereal fl4 = 4.;

    /* System generated locals */
    integer i__1;
    doublereal d__1, d__2;

    /* Local variables */
    static doublereal a, b, c__, e, f, g;
    static integer i__, q;
    static doublereal p1, p2, q1, q2, dd, hh;
    extern doublereal dsl_(doublereal *, doublereal *, doublereal *);
    static doublereal diff2, gamma, alpha;
    extern /* Subroutine */ int dintrs_(doublereal *, doublereal *, 
	    doublereal *, doublereal *, doublereal *, doublereal *);

/*  DSCDRC computes the sequence  d2(i) , i=0,1,...,np , of second */
/*  derivatives at the knots. The basic idea is that the vanishing second */
/*  derivatives (which are admissible by virtue of the theory involved in */
/*  the routines called previously) can be locally changed to non-zero */
/*  values without modifying the monotonicity and/or convexity. */
/*  Let us consider the restriction to the i-th subinterval of the */
/*  Bernstein-Bezier net for the C(2) spline with zero derivatives given */
/*  by subroutine DALG3. Let A, B and C be the second, third and */
/*  (int(n/2))-th point of the net, and let E, F, and G be given by a */
/*  symmetric construction. */

/*            B_______________C___G_______________F */
/*           /           .             .           \ */
/*          /      .                         .      \ */
/*         /  .D                                 H.  \ */
/*        A                                           E */
/*       /                                             \ */
/*      /                                               \ */
/*     /                                                 \ */

/*  Then the 'intermediate net' obtained inserting the straight lines */
/*  trough A-C and E-F is shape-preserving and we can take as the 'final */
/*  net' the union of two convex combination of A-B-C , A-D-C and H-F-G , */
/*  E-H-D respectively. Expressing the net in term of the second */
/*  derivatives, the points D, B and H,F lead to restriction like */
/*  d2(i).IN.[a1(1,i),a1(2,i)] , d2(i+1).IN.[a2(1,i),a2(2,i)] */
/*  This construction must be repeated for all the subintervals and so */
/*  d2(i) .IN. [a2(1,i-1),a2(2,i-1)].INT.[a1(1,i),a1(2,i)] . */

/*  The input parameters N,X,Y,D,OPT,NP,EPS,D20,D2NP,RHO,RHOI and the */
/*  input ones D2,ERRC are documented in subroutine DBVSSC. */
    /* Parameter adjustments */
    --a2;
    --a1;

    /* Function Body */
    i__1 = *np - 1;
    for (i__ = 0; i__ <= i__1; ++i__) {
	h__[i__] = x[i__ + 1] - x[i__];
/* L10: */
    }
    i__1 = *np - 1;
    for (i__ = 0; i__ <= i__1; ++i__) {
/*  Compute the points of the 'original' and 'intermediate' net. */
	a = y[i__] + h__[i__] * d__[i__] / *n;
	b = y[i__] + fl2 * h__[i__] * d__[i__] / *n;
	e = y[i__ + 1] - h__[i__] * d__[i__ + 1] / *n;
	f = y[i__ + 1] - fl2 * h__[i__] * d__[i__ + 1] / *n;
	alpha = (*n - 4) / 2 / (*n - fl4);
	c__ = alpha * f + (fl1 - alpha) * b;
	g = (fl1 - alpha) * f + alpha * b;
	gamma = fl1 / ((*n - 4) / 2 + fl1);
	dd = gamma * c__ + (fl1 - gamma) * a;
	hh = gamma * g + (fl1 - gamma) * e;
/*  Define the left and the right restriction for the second finite */
/*  difference of the net. */
/* Computing MIN */
	d__1 = fl0, d__2 = dd - fl2 * a + y[i__];
	a1[(i__ << 1) + 1] = min(d__1,d__2);
/* Computing MAX */
	d__1 = fl0, d__2 = dd - fl2 * a + y[i__];
	a1[(i__ << 1) + 2] = max(d__1,d__2);
/* Computing MIN */
	d__1 = fl0, d__2 = y[i__ + 1] - fl2 * e + hh;
	a2[(i__ + 1 << 1) + 1] = min(d__1,d__2);
/* Computing MAX */
	d__1 = fl0, d__2 = y[i__ + 1] - fl2 * e + hh;
	a2[(i__ + 1 << 1) + 2] = max(d__1,d__2);
/* L20: */
    }
/*  Take the intersection of the left and right restrictions for the */
/*  same second differences and translate it in terms of the second */
/*  derivatives. */
/* Computing 2nd power */
    d__1 = h__[0];
    a1[1] = a1[1] * *n * (*n - 1) / (d__1 * d__1);
/* Computing 2nd power */
    d__1 = h__[0];
    a1[2] = a1[2] * *n * (*n - 1) / (d__1 * d__1);
    i__1 = *np - 1;
    for (i__ = 1; i__ <= i__1; ++i__) {
	dintrs_(&a1[(i__ << 1) + 1], &a1[(i__ << 1) + 2], &a2[(i__ << 1) + 1],
		 &a2[(i__ << 1) + 2], &p1, &p2);
/* Computing 2nd power */
	d__1 = h__[i__];
	a1[(i__ << 1) + 1] = p1 * *n * (*n - 1) / (d__1 * d__1);
/* Computing 2nd power */
	d__1 = h__[i__];
	a1[(i__ << 1) + 2] = p2 * *n * (*n - 1) / (d__1 * d__1);
/* L30: */
    }
/* Computing 2nd power */
    d__1 = h__[*np - 1];
    a1[(*np << 1) + 1] = a2[(*np << 1) + 1] * *n * (*n - 1) / (d__1 * d__1);
/* Computing 2nd power */
    d__1 = h__[*np - 1];
    a1[(*np << 1) + 2] = a2[(*np << 1) + 2] * *n * (*n - 1) / (d__1 * d__1);
/*  The internal derivatives are defined as the admissible value closest */
/*  to the central second divided difference of the data. */
    i__1 = *np - 1;
    for (i__ = 1; i__ <= i__1; ++i__) {
	diff2 = ((y[i__ + 1] - y[i__]) / h__[i__] - (y[i__] - y[i__ - 1]) / 
		h__[i__ - 1]) / (h__[i__] + h__[i__ - 1]);
	d2[i__] = dsl_(&a1[(i__ << 1) + 1], &a1[(i__ << 1) + 2], &diff2);
/* L40: */
    }
    q = *opt % 100 / 10;
    if (q == 1) {
/*  No boundary condition is required. Take the first and last */
/*  derivative as the middle of admissible values. */
	d2[0] = (a1[1] + a1[2]) / fl2;
	d2[*np] = (a1[(*np << 1) + 1] + a1[(*np << 1) + 2]) / fl2;
    } else if (q == 2) {
/*  Non-separable boundary conditions are required. Check if these can be */
/*  satisfied by admissible derivatives. */
/* Computing MIN */
	d__1 = (*rho)(&a1[1]), d__2 = (*rho)(&a1[2]);
	q1 = min(d__1,d__2);
/* Computing MAX */
	d__1 = (*rho)(&a1[1]), d__2 = (*rho)(&a1[2]);
	q2 = max(d__1,d__2);
	dintrs_(&a1[(*np << 1) + 1], &a1[(*np << 1) + 2], &q1, &q2, &p1, &p2);
	if (p1 > p2 + *eps) {
/*  The boundary conditions cannot be satisfied. Set the error flag and */
/*  define the first and the last derivative as the nearest point to the */
/*  admissible and the boundary interval. */
	    if (*errc == 0) {
		*errc = 15;
	    } else if (*errc == 6) {
		*errc = 16;
	    } else if (*errc == 9) {
		*errc = 17;
	    } else if (*errc == 10) {
		*errc = 18;
	    }
	    d__1 = (p1 + p2) / fl2;
	    d2[*np] = dsl_(&a1[(*np << 1) + 1], &a1[(*np << 1) + 2], &d__1);
	    d__1 = (*rhoi)(&d2[*np]);
	    d2[0] = dsl_(&a1[1], &a1[2], &d__1);
	} else {
/*  It is possible to satisfy the boundary conditions. */
	    d2[*np] = (p1 + p2) / fl2;
	    d2[0] = (*rhoi)(&d2[*np]);
	}
    } else if (q == 3) {
/*  Separable boundary conditions are required. Check if they are */
/*  compatible with the admissible intervals and, if not, set the */
/*  error flag and take the admissible points nearest to the boundary */
/*  values. Otherwise take simply the boundary values. */
	if (*d20 < a1[1] - *eps || *d20 > a1[2] + *eps || *d2np < a1[(*np << 
		1) + 1] - *eps || *d2np > a1[(*np << 1) + 2] + *eps) {
	    if (*errc == 0) {
		*errc = 11;
	    } else if (*errc == 6) {
		*errc = 12;
	    } else if (*errc == 9) {
		*errc = 13;
	    } else if (*errc == 10) {
		*errc = 14;
	    }
	}
	d2[0] = dsl_(&a1[1], &a1[2], d20);
	d2[*np] = dsl_(&a1[(*np << 1) + 1], &a1[(*np << 1) + 2], d2np);
    }
    return 0;
} /* dscdrc_ */

/*  --------------------------------------------------------------------- */
doublereal dsl_(doublereal *a, doublereal *b, doublereal *c__)
{
    /* System generated locals */
    doublereal ret_val;

/*  Given the interval [a,b] and the number c, dsl is c if c belongs */
/*  to [a,b], otherwise, it is the nearest extreme to c. */
    if (*c__ <= *a) {
	ret_val = *a;
    } else if (*c__ >= *b) {
	ret_val = *b;
    } else {
	ret_val = *c__;
    }
    return ret_val;
} /* dsl_ */

/*  --------------------------------------------------------------------- */
/* Subroutine */ int dsqtab_(doublereal *x, doublereal *y, integer *np, 
	doublereal *xtab, integer *ntab, integer *y0opt, integer *y1opt, 
	integer *y2opt, integer *n, integer *k, doublereal *d__, doublereal *
	d2, doublereal *tb, doublereal *l, doublereal *laux0, doublereal *
	laux1, doublereal *laux2, doublereal *y0tab, doublereal *y1tab, 
	doublereal *y2tab)
{
    /* System generated locals */
    integer i__1, i__2;

    /* Local variables */
    static integer i__, j;
    extern doublereal dbl_(doublereal *, integer *, doublereal *, doublereal *
	    , doublereal *, doublereal *, integer *, doublereal *);
    static integer ind;
    extern doublereal dbl1_(doublereal *, integer *, doublereal *, doublereal 
	    *, doublereal *, doublereal *, integer *, doublereal *), dbl2_(
	    doublereal *, integer *, doublereal *, doublereal *, doublereal *,
	     doublereal *, integer *, doublereal *);
    static integer ind1;
    extern /* Subroutine */ int dlspis_(doublereal *, doublereal *, 
	    doublereal *, doublereal *, integer *, integer *, integer *, 
	    integer *, doublereal *);

/*  DSQTAB evaluates the spline and/or its first derivative and/or its */
/*  second derivative at the points  xtab(j) , j=0,1,...,ntab  using */
/*  a sequential search for finding the interval  [x(i),x(i+1)] in which */
/*  the tabulation point falls. The input (X,Y,NP,XTAB,NTAB,Y0OPT, */
/*  Y1OPT,Y2OPT,N,K,D,D2,TB) and the output (Y0TAB,Y1TAB,Y2TAB) */
/*  parameters have been explained in subroutine DBVSSE. For the others */
/*  see subroutines DTRMB, DLSPIS. */
    /* Parameter adjustments */
    --tb;

    /* Function Body */
    ind = 0;
    ind1 = 1;
    i__1 = *ntab;
    for (j = 0; j <= i__1; ++j) {
/*  Compute the index  ind  such that  x(ind).LE.xtab(j).LT.x(ind+1) . */
	if (x[0] <= xtab[j]) {
	    i__2 = *np - 1;
	    for (i__ = ind1; i__ <= i__2; ++i__) {
		if (x[i__] <= xtab[j]) {
		    ind = i__;
		}
/* L20: */
	    }
	}
/*  Check if  ind  selects a new subinterval. */
	if (ind != ind1 || j == 0) {
/*  Call subprogram  DLSPIS  to compute the linear shape-preserving */
/*  interpolating spline  l:=l(x)  at */
/*      x(ind)+p*(x(ind+1)-x(ind))/n , p=0,1,...,n . */
	    dlspis_(x, y, d__, d2, np, n, k, &ind, l);
	    if (*y0opt == 1) {
/*  Evaluate the spline at  xtab(j)  using new values of  l . */
		y0tab[j] = dbl_(&xtab[j], n, l, &x[ind], &x[ind + 1], &tb[*n *
			 (*n + 1) / 2], &c__0, laux0);
	    }
	    if (*y1opt == 1) {
/*  Evaluate the first derivative of the spline at  xtab(j)  using new */
/*  values of  l . */

		y1tab[j] = dbl1_(&xtab[j], n, l, &x[ind], &x[ind + 1], &tb[(*
			n - 1) * *n / 2], &c__0, laux1);
	    }
	    if (*y2opt == 1) {
/*  Evaluate the second derivative of the spline at  xtab(j)  using new */
/*  values of  l . */
		y2tab[j] = dbl2_(&xtab[j], n, l, &x[ind], &x[ind + 1], &tb[(*
			n - 2) * (*n - 1) / 2], &c__0, laux2);
	    }
	} else {
	    if (*y0opt == 1) {
/*  Evaluate the spline at  xtab(j)  using old values of  l . */
		y0tab[j] = dbl_(&xtab[j], n, l, &x[ind], &x[ind + 1], &tb[*n *
			 (*n + 1) / 2], &c__1, laux0);
	    }
	    if (*y1opt == 1) {
/*  Evaluate the first derivative of the spline at  xtab(j)  using old */
/*  values of  l . */
		y1tab[j] = dbl1_(&xtab[j], n, l, &x[ind], &x[ind + 1], &tb[(*
			n - 1) * *n / 2], &c__1, laux1);
	    }
	    if (*y2opt == 1) {
/*  Evaluate the second derivative of the spline at  xtab(j)  using old */
/*  values of  l . */
		y2tab[j] = dbl2_(&xtab[j], n, l, &x[ind], &x[ind + 1], &tb[(*
			n - 2) * (*n - 1) / 2], &c__1, laux2);
	    }
	}
	ind1 = ind;
	ind = 0;
/* L30: */
    }
    return 0;
} /* dsqtab_ */

/*  --------------------------------------------------------------------- */
/* Subroutine */ int dstinf_(integer *opt, doublereal *d0, doublereal *dnp, 
	integer *constr, integer *n, integer *k, doublereal *x, doublereal *y,
	 doublereal *d__, integer *np, integer *comm, integer *part, 
	doublereal *eps, D_fp beta, D_fp betai, doublereal *daux2, doublereal 
	*daux3, doublereal *info, integer *errc, integer *diagn)
{
    /* Initialized data */

    static doublereal fl0 = 0.;
    static doublereal flem4 = 1e-4;
    static doublereal fl2 = 2.;

    /* System generated locals */
    integer i__1;
    doublereal d__1, d__2, d__3;

    /* Local variables */
    static integer i__, p, q, r__;
    static doublereal d2i;
    static integer ind1, ind2, ind3;
    static doublereal d2im1;
    extern /* Subroutine */ int dtdc_(integer *, doublereal *, integer *, 
	    integer *, doublereal *, doublereal *, doublereal *), dmsk1_(
	    doublereal *, integer *, integer *, integer *, integer *, integer 
	    *), dmsk2_(doublereal *, integer *, integer *, integer *, integer 
	    *, doublereal *, doublereal *, doublereal *, integer *, integer *)
	    ;
    static doublereal iaux0, iauxnp;

/*  DSTINF computes the information needed in the other parts of the */
/*  program using the data-dependent input parameters and stores it in */
/*  the output array INFO. */

/*  The parameters OPT,N,K,X,Y,D,NP,COMM,PART,EPS,BETA,BETAI,ERRC,DIAGN */
/*  are described in subroutine DBVSSC . */

/*  Items of possible interest are: */

/*  INFO  : floating array, of bounds 1:COMM+PART*NP+NP+1. It is composed */
/*          of four parts: the first, of bounds 1:comm, contains the */
/*          global information n, k , the maximum of the first divided */
/*          differences of initial points and the lower and upper bounds */
/*          for the derivatives, bounds which are used when no */
/*          constraints are imposed (see the parameter OPT described in */
/*          DBVSSC) or when the constraints must be relaxed; the second, */
/*          of bounds  comm+1:comm+np, contains information about */
/*          constraints in the interval (x(i),x(i+1)) , i=0,1,...,np-1 ; */
/*          if: */
/*          info((comm+1)+i)= 0 - no attribute; */
/*          info((comm+1)+i)= 1 - the data are increasing; */
/*          info((comm+1)+i)= 2 - the data are decreasing; */
/*          info((comm+1)+i)=10 - the data are convex; */
/*          info((comm+1)+i)=11 - the data are increasing and convex; */
/*          info((comm+1)+i)=12 - the data are decreasing and convex; */
/*          info((comm+1)+i)=20 - the data are concave; */
/*          info((comm+1)+i)=21 - the data are increasing and concave; */
/*          info((comm+1)+i)=22 - the data are decreasing and concave. */
/*          The third part, of bounds comm+np+1:comm+part*np, contains */
/*          the first divided differences of initial points */
/*              ( y(i+1)-y(i) ) / ( x(i+1)-x(i) ) ,  i=0,1,...,np-1 . */
/*          The fourth, of bounds comm+part*np+1:comm+part*np+np+1, */
/*          contains, eventually, the initial estimates of the first */
/*          derivatives which are then used to compute the constrained */
/*          best approximation (see the description of the input */
/*          parameter OPT  and of the array D in subr. DBVSSC). More */
/*          precisely, having defined  p := opt/100 , if p=2 it contains */
/*          the Bessel estimates, if p=3 it contains a set of third order */
/*          accurate estimates giving a co-monotone cubic Hermite */
/*          interpolant (see subr. DTDC described later), if p=4 it */
/*          contains a set of values given by the user; if p=1 this part */
/*          of INFO is not referenced. */
    /* Parameter adjustments */
    --daux2;
    --info;

    /* Function Body */
    r__ = *opt % 10;
    q = *opt % 100 / 10;
    p = *opt / 100;
    ind1 = *comm + 1;
    ind2 = *comm + *np + 1;
    ind3 = *comm + (*np << 1) + 1;
/*  Set the first and the second components of INFO to n and k */
/*  respectively. */
    info[1] = (doublereal) (*n);
    info[2] = (doublereal) (*k);
/*  Compute the first divided differences of the initial points and set */
/*  info(3) to their maximum. */
    info[3] = fl0;
    i__1 = *np - 1;
    for (i__ = 0; i__ <= i__1; ++i__) {
	info[ind2 + i__] = (y[i__ + 1] - y[i__]) / (x[i__ + 1] - x[i__]);
/* Computing MAX */
	d__2 = info[3], d__3 = (d__1 = info[ind2 + i__], abs(d__1));
	info[3] = max(d__2,d__3);
/* L10: */
    }
/*  Compute the lower and upper bounds for derivatives */
    info[4] = -(*n) * info[3] / *k;
    info[5] = *n * info[3] / *k;
/*  If eps.LE.0 it is reset to flem4. */
    if (*eps <= fl0) {
	*eps = flem4;
    }
/*  Compute the relative tollerance of the method. */
    *eps *= info[3];
/*  Set the second part of INFO. Firstly, all the components are */
/*  initialized with 0. */
    i__1 = *np - 1;
    for (i__ = 0; i__ <= i__1; ++i__) {
	info[ind1 + i__] = 0.;
/* L20: */
    }
/*  Monotonicity is required: check if the initial points are increasing */
/*  or decreasing in each interval ( x(i), x(i+1) ) , i=0,1,...,np-1 . */
    if (r__ == 1 || r__ == 3 || r__ == 4) {
	i__1 = *np - 1;
	for (i__ = 0; i__ <= i__1; ++i__) {
	    if (info[ind2 + i__] >= fl0) {
		++info[ind1 + i__];
	    } else {
		info[ind1 + i__] += 2;
	    }
/* L30: */
	}
    }
/*  Convexity is required: check if the initial points are concave or */
/*  convex in each interval ( x(i), x(i+1) ) , i=1,...,np-2 . */
    if (r__ == 2 || r__ == 3 || r__ == 4) {
	i__1 = *np - 2;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    d2im1 = info[ind2 + i__] - info[ind2 + (i__ - 1)];
	    d2i = info[ind2 + (i__ + 1)] - info[ind2 + i__];
	    if (d2im1 >= *eps && d2i >= -(*eps) || d2im1 >= -(*eps) && d2i >= 
		    *eps || abs(d2im1) <= *eps && abs(d2i) <= *eps) {
		info[ind1 + i__] += 10;
	    } else if (d2im1 <= -(*eps) && d2i <= *eps || d2im1 <= *eps && 
		    d2i <= -(*eps)) {
		info[ind1 + i__] += 20;
	    }
/* L40: */
	}
/*  The convexity in the first and in the last interval is defined as the */
/*  second and the second to last, respectively. */
	info[ind1] += (integer) info[ind1 + 1] / 10 * 10;
	info[ind1 + (*np - 1)] += (integer) info[ind1 + (*np - 2)] / 10 * 10;
    }
/*  In the case  r=4 , that is when the constraint selection */
/*  is made on any interval, we compare the kind given by the data with */
/*  those given by the array CONSTR */
    if (r__ == 4) {
	dmsk1_(&info[1], constr, comm, part, &ind1, np);
    }
/*  In the case q=3, the kind in the first and last subinterval */
/*  is compared with the boundary conditions */
    if (q == 3) {
	dmsk2_(&info[1], comm, part, &ind1, np, d0, dnp, eps, errc, diagn);
    }
/*  If p=2 the Bessel derivatives are stored in the fourth */
/*  part of INFO. */
    if (p == 2) {
	i__1 = *np - 1;
	for (i__ = 1; i__ <= i__1; ++i__) {
	    info[ind3 + i__] = ((x[i__ + 1] - x[i__]) * info[ind2 + (i__ - 1)]
		     + (x[i__] - x[i__ - 1]) * info[ind2 + i__]) / (x[i__ + 1]
		     - x[i__ - 1]);
/* L50: */
	}
	if (q == 1) {
/*  If no boundary condition is imposed, set the first and last */
/*  derivatives using the standard formulas for Bessel interpolation. */
	    info[ind3] = ((x[1] - x[0]) * (fl2 * info[ind2] - info[ind2 + 1]) 
		    + (x[2] - x[1]) * info[ind2]) / (x[2] - x[0]);
	    info[ind3 + *np] = ((x[*np] - x[*np - 1]) * (fl2 * info[ind2 + (*
		    np - 1)] - info[ind2 + (*np - 2)]) + (x[*np - 1] - x[*np 
		    - 2]) * info[ind2 + (*np - 1)]) / (x[*np] - x[*np - 2]);
	} else {
/*  Compute the first and last derivatives taking into account both the */
/*  slopes of the data and the restriction imposed by the boundary */
/*  conditions */
	    iaux0 = ((x[1] - x[0]) * (fl2 * info[ind2] - info[ind2 + 1]) + (x[
		    2] - x[1]) * info[ind2]) / (x[2] - x[0]);
	    iauxnp = ((x[*np] - x[*np - 1]) * (fl2 * info[ind2 + (*np - 1)] - 
		    info[ind2 + (*np - 2)]) + (x[*np - 1] - x[*np - 2]) * 
		    info[ind2 + (*np - 1)]) / (x[*np] - x[*np - 2]);
	    info[ind3] = ((x[*np] - x[*np - 1]) * iaux0 + (x[1] - x[0]) * (*
		    betai)(&iauxnp)) / (x[1] - x[0] + (x[*np] - x[*np - 1]));
	    info[ind3 + *np] = ((x[*np] - x[*np - 1]) * (*beta)(&iaux0) + (x[
		    1] - x[0]) * iauxnp) / (x[1] - x[0] + (x[*np] - x[*np - 1]
		    ));
	}
/*  If p=3 then the set of third order accurate estimates, computed by */
/*  subr. DTDC, is stored in the fourth part of INFO. */
    } else if (p == 3) {
	dtdc_(np, x, comm, part, &info[1], &daux2[1], daux3);
/*  If p=4 then the set of values given by the user is stored in */
/*  the fourth part of INFO. */
    } else if (p == 4) {
	i__1 = *np;
	for (i__ = 0; i__ <= i__1; ++i__) {
	    info[ind3 + i__] = d__[i__];
/* L60: */
	}
    }
    return 0;
} /* dstinf_ */

/*  --------------------------------------------------------------------- */
/* Subroutine */ int dtdc_(integer *np, doublereal *x, integer *comm, integer 
	*part, doublereal *info, doublereal *dd2, doublereal *dd3)
{
    /* Initialized data */

    static doublereal fl0 = 0.;
    static doublereal fl2 = 2.;
    static doublereal fl3 = 3.;

    /* System generated locals */
    integer i__1;
    doublereal d__1, d__2;

    /* Local variables */
    static doublereal f;
    static integer i__;
    static doublereal d1, e1, e2, e3, d2, p1, q1, q2, p2, q12, q32, si, ti;
    static integer ind;
    static doublereal tit;
    static integer ind1;
    static doublereal tmin, tmax;
    extern doublereal dmdian_(doublereal *, doublereal *, doublereal *), 
	    dmnmod_(doublereal *, doublereal *);

/*  Given the initial points ( x(i), y(i) ) , i=0,1,...,np , DTDC */
/*  computes a sequence  ds(0),ds(1),...,ds(np)  of estimates of the */
/*  function's derivatives which are third order accurate and furnish a */
/*  cubic Hermite interpolant preserving monotonicity. */
/*  The method is composed by the two following fundamental steps: */
/*  1 - compute an initial estimate of ds(i), i=0,1,...,np , which is */
/*      third or higher order accurate; */
/*  2 - refine it imposing the monotonicity constraint. */
/*  The computation of ds(i) needs the points x(i+j), j = -3,-2,...,3 , */
/*  consequently, the boundary values ds(0), ds(1), ds(2) and ds(np-2), */
/*  ds(np-1), ds(np) are computed in an approximate way. Although they */
/*  are still third order accurate, may not preserve the monotonicity. */
/*  For more details see \3\ . */

/*  The input parameter NP,X,COMM,PART are described in subr. DBVSSC; the */
/*  parameter INFO is described in subr. DSTINF . */

/*  The computed values are stored in the last part of INFO. */
    /* Parameter adjustments */
    --dd2;
    --info;

    /* Function Body */
    ind = *comm + *np + 1;
    ind1 = *comm + *part * *np + 1;
/*  Compute the second divided differences of the initial points. */
    i__1 = *np - 1;
    for (i__ = 1; i__ <= i__1; ++i__) {
	dd2[i__] = (info[ind + i__] - info[ind + i__ - 1]) / (x[i__ + 1] - x[
		i__ - 1]);
/* L10: */
    }
/*  Compute the third divided differences of the initial points */
    i__1 = *np - 2;
    for (i__ = 1; i__ <= i__1; ++i__) {
	dd3[i__] = (dd2[i__ + 1] - dd2[i__]) / (x[i__ + 2] - x[i__ - 1]);
/* L20: */
    }
/*  Compute approximate values for  f[x(-1),x(0),x(1),x(2)]  and */
/*  f[x(np-2),x(np-1),x(np),x(np+1)] ; they are needed for the */
/*  computation of ds(2) and ds(np-2). */
    dd3[0] = dd3[1] + (dd3[2] - dd3[1]) / (x[4] - x[0]) * (x[0] + x[1] - x[2] 
	    - x[3]);
    dd3[*np - 1] = dd3[*np - 2] + (dd3[*np - 3] - dd3[*np - 2]) / (x[*np - 4] 
	    - x[*np]) * (x[*np] + x[*np - 1] - x[*np - 2] - x[*np - 3]);
    i__1 = *np - 2;
    for (i__ = 2; i__ <= i__1; ++i__) {
/*  ds(i) : initialization */
	e1 = dmnmod_(&dd3[i__ - 2], &dd3[i__ - 1]);
	e2 = dmnmod_(&dd3[i__ - 1], &dd3[i__]);
	e3 = dmnmod_(&dd3[i__], &dd3[i__ + 1]);
	d__1 = dd2[i__ - 1] + e1 * (x[i__] - x[i__ - 2]);
	d__2 = dd2[i__] + e2 * (x[i__] - x[i__ + 1]);
	q1 = info[ind + i__ - 1] + (x[i__] - x[i__ - 1]) * dmnmod_(&d__1, &
		d__2);
	d__1 = dd2[i__] + e2 * (x[i__] - x[i__ - 1]);
	d__2 = dd2[i__ + 1] + e3 * (x[i__] - x[i__ + 2]);
	q2 = info[ind + i__] - (x[i__ + 1] - x[i__]) * dmnmod_(&d__1, &d__2);
	f = (q1 + q2) / fl2;
/*  Refinement */
	tit = dmnmod_(&q1, &q2);
	d1 = dmnmod_(&dd2[i__ - 1], &dd2[i__]);
	d2 = dmnmod_(&dd2[i__], &dd2[i__ + 1]);
	p1 = info[ind + i__ - 1] + d1 * (x[i__] - x[i__ - 1]);
	p2 = info[ind + i__] + d2 * (x[i__] - x[i__ + 1]);
	ti = dmnmod_(&p1, &p2);
	si = dmnmod_(&info[ind + i__ - 1], &info[ind + i__]);
/* Computing MIN */
	d__1 = fl0, d__2 = fl3 * si, d__1 = min(d__1,d__2), d__2 = fl3 * ti / 
		fl2, d__1 = min(d__1,d__2);
	tmin = min(d__1,tit);
/* Computing MAX */
	d__1 = fl0, d__2 = fl3 * si, d__1 = max(d__1,d__2), d__2 = fl3 * ti / 
		fl2, d__1 = max(d__1,d__2);
	tmax = max(d__1,tit);
	d__1 = tmin - f;
	d__2 = tmax - f;
	info[ind1 + i__] = f + dmnmod_(&d__1, &d__2);
/* L50: */
    }
/*  ds(1): initialization */
    q12 = info[ind] + dd2[1] * (x[1] - x[0]) + dd3[0] * (x[1] - x[0]) * (x[1] 
	    - x[2]);
    q32 = info[ind] + dd2[1] * (x[1] - x[0]) + dd3[1] * (x[1] - x[0]) * (x[1] 
	    - x[2]);
    e1 = dmnmod_(dd3, &dd3[1]);
    e2 = dmnmod_(&dd3[1], &dd3[2]);
    q1 = dmdian_(&info[ind], &q12, &q32);
    d__1 = dd2[1] + e1 * (x[1] - x[0]);
    d__2 = dd2[2] + e2 * (x[1] - x[3]);
    q2 = info[ind + 1] - (x[2] - x[1]) * dmnmod_(&d__1, &d__2);
    f = (q1 + q2) / fl2;
/*  refinement */
    tit = dmnmod_(&q1, &q2);
    d2 = dmnmod_(&dd2[1], &dd2[2]);
    p1 = info[ind] + dd2[1] * (x[1] - x[0]);
    p2 = info[ind + 1] + d2 * (x[1] - x[2]);
    ti = dmnmod_(&p1, &p2);
    si = dmnmod_(&info[ind], &info[ind + 1]);
/* Computing MIN */
    d__1 = fl0, d__2 = fl3 * si, d__1 = min(d__1,d__2), d__2 = fl3 * ti / fl2,
	     d__1 = min(d__1,d__2);
    tmin = min(d__1,tit);
/* Computing MAX */
    d__1 = fl0, d__2 = fl3 * si, d__1 = max(d__1,d__2), d__2 = fl3 * ti / fl2,
	     d__1 = max(d__1,d__2);
    tmax = max(d__1,tit);
    d__1 = tmin - f;
    d__2 = tmax - f;
    info[ind1 + 1] = f + dmnmod_(&d__1, &d__2);
/*  ds(np-1): initialization */
    e1 = dmnmod_(&dd3[*np - 3], &dd3[*np - 2]);
    e2 = dmnmod_(&dd3[*np - 2], &dd3[*np - 1]);
    d__1 = dd2[*np - 2] + e1 * (x[*np - 1] - x[*np - 3]);
    d__2 = dd2[*np - 1] + e2 * (x[*np - 1] - x[*np]);
    q1 = info[ind + *np - 2] + (x[*np - 1] - x[*np - 2]) * dmnmod_(&d__1, &
	    d__2);
    q12 = info[ind + *np - 2] + dd2[*np - 1] * (x[*np - 1] - x[*np - 2]) + 
	    dd3[*np - 1] * (x[*np - 1] - x[*np - 2]) * (x[*np - 1] - x[*np]);
    q32 = info[ind + *np - 2] + dd2[*np - 1] * (x[*np - 1] - x[*np - 2]) + 
	    dd3[*np - 2] * (x[*np - 1] - x[*np - 2]) * (x[*np - 1] - x[*np]);
    q2 = dmdian_(&info[ind + *np - 1], &q12, &q32);
    f = (q1 + q2) / fl2;
/*  Refinement */
    tit = dmnmod_(&q1, &q2);
    d1 = dmnmod_(&dd2[*np - 2], &dd2[*np - 1]);
    p1 = info[ind + *np - 2] + d1 * (x[*np - 1] - x[*np - 2]);
    p2 = info[ind + *np - 1] + dd2[*np - 1] * (x[*np - 1] - x[*np]);
    ti = dmnmod_(&p1, &p2);
    si = dmnmod_(&info[ind + *np - 2], &info[ind + *np - 1]);
/* Computing MIN */
    d__1 = fl0, d__2 = fl3 * si, d__1 = min(d__1,d__2), d__2 = fl3 * ti / fl2,
	     d__1 = min(d__1,d__2);
    tmin = min(d__1,tit);
/* Computing MAX */
    d__1 = fl0, d__2 = fl3 * si, d__1 = max(d__1,d__2), d__2 = fl3 * ti / fl2,
	     d__1 = max(d__1,d__2);
    tmax = max(d__1,tit);
    d__1 = tmin - f;
    d__2 = tmax - f;
    info[ind1 + *np - 1] = f + dmnmod_(&d__1, &d__2);
/*  ds(0): */
    q1 = info[ind] + dd2[1] * (x[0] - x[1]) + dd3[0] * (x[0] - x[1]) * (x[0] 
	    - x[2]);
    q2 = info[ind] + dd2[1] * (x[0] - x[1]) + dd3[1] * (x[0] - x[1]) * (x[0] 
	    - x[2]);
    info[ind1] = dmdian_(&info[ind], &q1, &q2);
/*  ds(np): */
    q1 = info[ind + *np - 1] + dd2[*np - 1] * (x[*np] - x[*np - 1]) + dd3[*np 
	    - 1] * (x[*np] - x[*np - 2]) * (x[*np] - x[*np - 1]);
    q2 = info[ind + *np - 1] + dd2[*np - 1] * (x[*np] - x[*np - 1]) + dd3[*np 
	    - 2] * (x[*np] - x[*np - 2]) * (x[*np] - x[*np - 1]);
    info[ind1 + *np] = dmdian_(&info[ind + *np - 1], &q1, &q2);
    return 0;
} /* dtdc_ */

/*  --------------------------------------------------------------------- */
/* Subroutine */ int dtrmb_(integer *n, doublereal *tb)
{
    /* Initialized data */

    static doublereal fl1 = 1.;

    /* System generated locals */
    integer i__1, i__2;

    /* Local variables */
    static integer i__, k, ind, ind1;

/*  DTRMB    computes the binomial terms */
/*      i!/(k!*(i-k)!) , i=1,2,...,n , k=0,1,...,i . */

/*  INPUT PARAMETERS */

/*  N     : integer variable, containing the largest binomial term */
/*          needed. */

/*  OUTPUT PARAMETERS */

/*  TB    : floating array, of bounds  1:N*(N+1)/2+N  , containing */
/*          the values   i!/(k!*(i-k)!)  , k=0,1,...,i , in the */
/*          elements   TB(i*(i+1)/2),...,TB((i*(i+1)/2)+i) . */
    /* Parameter adjustments */
    --tb;

    /* Function Body */
    tb[1] = fl1;
    tb[2] = fl1;
    ind = 1;
    i__1 = *n;
    for (i__ = 2; i__ <= i__1; ++i__) {
	ind1 = ind;
	ind = i__ * (i__ + 1) / 2;
	tb[ind] = fl1;
	tb[ind + i__] = fl1;
	i__2 = i__ - 1;
	for (k = 1; k <= i__2; ++k) {
	    tb[ind + k] = tb[ind1 + k] + tb[ind1 + k - 1];
/* L10: */
	}
/* L20: */
    }
    return 0;
} /* dtrmb_ */

/*  --------------------------------------------------------------------- */
logical dtst_(doublereal *a, doublereal *b, doublereal *c__, doublereal *d__, 
	doublereal *eps)
{
    /* System generated locals */
    doublereal d__1, d__2;
    logical ret_val;

/*  DTST checks if two intervals [a,b] and [c,d] differ less than eps. */
/*  DTST assumes  a.LE.b  and  c.LE.d . */
    ret_val = (d__2 = *a - *c__, abs(d__2)) <= *eps && (d__1 = *b - *d__, abs(
	    d__1)) <= *eps;
    return ret_val;
} /* dtst_ */

