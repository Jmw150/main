;;;; hello2.scm

(use javahack)

(java-run debug: #t options: '("-Djava.library.path=.") classpath: "swt.jar")

(java-import "org.eclipse.swt.*")
(java-import "org.eclipse.swt.widgets.*")
(java-import "org.eclipse.swt.graphics.*")
(java-import "org.eclipse.swt.layout.*")

((java Display.setAppName) "Hello")

(define disp ((java Display.)))
(define shell ((java Shell.) disp))

((java .setLayout) shell ((java FillLayout.) (java SWT.VERTICAL$)))
((java .setText) shell "Hello, world!")

(define label ((java Label.) shell (java SWT.CENTER$)))

((java .setText) label "Hello, world")
((java .setSize) shell 300 300)
((java .open) shell)

(do () (((java .isDisposed) shell))
  (unless ((java .readAndDispatch) disp) ((java .sleep) disp)) )

((java .dispose) disp)
