; all of this works ^_^

(import [numpy :as np])
(import [scipy.integrate [odeint]])
(import [scipy.special [jn]])
(import [matplotlib.pyplot :as plt])

(defn fbessel [Y x]
  "System of 1st order ODEs for the Bessel equation."
  (let ((nu 0.0)
        (y (get Y 0))
        (z (get Y 1))

        ;; define the derivatives
        (dydx z)
        (dzdx (* (/ 1.0 (** x 2)) 
                 (- (* (* -1 x) z) 
                    (* (- (** x 2) (** nu 2)) y)))))
        ;; return derivatives
       [dydx dzdx])
)

(let ((x0 1e-15)
      (y0 1.0)
      (z0 0.0)
      (Y0 [y0 z0])
      (xspan (np.linspace 1e-15 10))
      (sol (odeint fbessel Y0 xspan)))

     (do
       (plt.plot xspan 
                 (. sol [[Ellipsis 0]]) :label "Numerical solution")
       (plt.plot xspan 
                 (jn 0 xspan) "r--" :label "Analytical solution")
       (plt.legend :loc "best")

       (plt.savefig "hy-ode.png")
))

