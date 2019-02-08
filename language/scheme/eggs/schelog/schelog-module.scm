
(module schelog (%let
		 (%or schelog:deref*)
		 (%and schelog:deref*)
		 (%cut-delimiter schelog:deref*)
		 %rel
		 (%is schelog:deref* schelog:unbound-ref? schelog:ref?)
		 %assert
		 %assert-a
		 %free-vars
		 (%which schelog:*more-k* schelog:*more-fk* schelog:deref*)
		 which
		 %cut
		 rel
		 %exists
		 %append
		 %bag-of %bag-of-1 %set-of
		 %compound
		 %constant
		 %copy
		 %empty-rel
		 %fail
		 %freeze
		 %if-then-else
		 %melt %melt-new 
		 %member
		 %nonvar
		 %not
		 %more more
		 %repeat
		 schelog:use-occurs-check
		 %true
		 %var
		 _
		 %=:= %> %>= %<= %< %/= %=/= %== %/== %=)
  (import scheme chicken)
  (include "schelog.scm"))
