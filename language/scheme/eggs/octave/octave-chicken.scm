(module octave
 ( ;; base variables and functions
  octave:version
  octave:input-port
  octave:output-port
  octave:pid
  octave:start
  octave:stop
  octave:send
  ;; 2d plot functions
  octave:plot
  octave:semilogx
  octave:semilogy
  octave:loglog
  octave:polar
  octave:bar
  octave:stairs
  octave:errorbar
  octave:mesh-xyz
  ;; 3d plot functions
  octave:mesh
  octave:contour
  octave:imagesc
  ;; Labels
  octave:title
  octave:xlabel
  octave:ylabel
  octave:legend
  octave:grid
  ;; Other
  octave:figure
  octave:replot
  octave:close
  ;; Files
  octave:supported-file-types
  octave:save-plot-to
 )

 (import chicken scheme)
 (use data-structures)

 ; needed for compatibility
 (define vct->list vector->list)

 (include "octave.scm")

)
