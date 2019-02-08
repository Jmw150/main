;;;; hello.scm

(use javahack)

(java-run debug: #t options: '("-Djava.library.path=.") classpath: "swt.jar")

(java-import "org.eclipse.swt.*")
(java-import "org.eclipse.swt.widgets.*")
(java-import "org.eclipse.swt.graphics.*")

(define disp ((java Display.)))
(define shell ((java Shell.) disp))
((java .open) shell)

(do () (((java .isDisposed) shell))
  (unless ((java .readAndDispatch) disp) ((java .sleep) disp)) )

((java .dispose) disp)
