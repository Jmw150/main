(use javahack)

(java-run debug: #t classpath: ".")

(write
  ((java Callback.invoke)
    (lambda (x) 
      (print "ok: " x) 
      42) 
    "something") )
