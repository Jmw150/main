;;;; lua-main.scm


(module lua 

	
 (lua-open lua-close
	   lua-state? lua-thread? lua-table? lua-userdata?
	   lua-function? lua-call
	   lua-table-ref lua-eval
	   lua-run-string lua-run-file
	   lua-global-ref)
	
 (import scheme chicken foreign)
 (require-extension dollar srfi-69)



#>
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
<#


(define-foreign-variable LUA_ERRSYNTAX int)
(define-foreign-variable LUA_ERRMEM int)
(define-foreign-variable LUA_ERRRUN int)

(define-foreign-variable LUA_MULTRET int)
(define-foreign-variable LUA_REGISTRYINDEX int)

(define-foreign-variable LUA_TNIL  int)
(define-foreign-variable LUA_TNUMBER int)
(define-foreign-variable LUA_TBOOLEAN int)
(define-foreign-variable LUA_TSTRING int)
(define-foreign-variable LUA_TLIGHTUSERDATA int)
(define-foreign-variable LUA_TUSERDATA int)
(define-foreign-variable LUA_TFUNCTION int)
(define-foreign-variable LUA_TTHREAD int)
(define-foreign-variable LUA_TTABLE int)


(define-record lua-state ptr rtable)
(define-record lua-table r state)
(define-record lua-function r proc)
(define-record lua-thread r)
(define-record lua-userdata r)

(define-foreign-type lua-state (c-pointer "lua_State")
  lua-state-ptr
  (cut make-lua-state <> #f))

(define (lua-open)
  (let ((l ($ lua-state lua_open)))
    (lua-state-rtable-set! l (make-hash-table eq?))
    ($ luaL_openlibs (lua-state l))
    l) )

(define (lua-close l) 
  (hash-table-walk
   (lua-state-rtable l)
   (lambda (r f)
     ($ luaL_unref (lua-state l) (int LUA_REGISTRYINDEX) (int r)) ) )
  (lua-state-rtable-set! l #f)
  (assert (zero? ($ int lua_gettop (lua-state l))) "Lua context in inconsistent state")
  ($ lua_close (lua-state l)) )

(define (lua-run-string l x #!optional name)
  (handle-load-error
   'lua-run-string l
   ($ int luaL_loadbuffer (lua-state l) (scheme-pointer x) (int (string-length x))
      (c-string name) )
   (run-lua 'lua-run-string l) ) )

(define ((run-lua loc l) . args)
  (let push ((args args) (n 0))
    (if (null? args)
	(handle-load-error
	 loc l
	 ($ int lua_pcall (lua-state l) (int n) (int LUA_MULTRET) 0)
	 (lambda ()
	   (let ((nresults ($ int lua_gettop (lua-state l))))
	     (let loop ((i 1) (results '()))
	       (cond ((> i nresults)
		      ($ lua_pop (lua-state l) (int nresults))
		      (apply values (reverse results)))
		     (else
		      (loop (add1 i) (cons (get-result loc l i) results))))))))
	(push-value
	 loc l (car args) 
	 (lambda () (push (cdr args) (add1 n)))
	 #f) ) ) )

(define (lua-run-file l name)
  (handle-load-error 
   'lua-run-file l
   ($ int luaL_loadfile (lua-state l) (c-string name))
   (run-lua 'lua-run-file l) ) )

(define (lua-eval l str #!optional name)
  (lua-run-string l (string-append "return " str) name) )

(define (lua-call f . args)
  (apply (lua-function-proc f) args) )

(define (get-result loc l i)
  (let ((t ($ int lua_type (lua-state l) (int i))))
    (cond 
      ((= t LUA_TNIL) (void))
      ((= t LUA_TNUMBER) ($ number lua_tonumber (lua-state l) (int i)))
      ((= t LUA_TBOOLEAN) ($ bool lua_toboolean (lua-state l) (int i)))
      ((= t LUA_TSTRING) ($ c-string lua_tostring (lua-state l) (int i)))
      ((= t LUA_TLIGHTUSERDATA) ($ c-pointer lua_touserdata (lua-state l) 1))
      ((= t LUA_TFUNCTION) 
       (wrap 
	l i
	(lambda (r)
	  (let ((runner (run-lua '<lua-function> l))) ; obtain internal name via debug API?
	    (make-lua-function
	     r
	     (lambda args
	       ($ lua_rawgeti (lua-state l) (int LUA_REGISTRYINDEX) (int r))
	       (apply runner args)))))) )
      ((= t LUA_TTHREAD) (wrap l i make-lua-thread))
      ((= t LUA_TUSERDATA) (wrap l i make-lua-userdata))
      ((= t LUA_TTABLE) (wrap l i (lambda (r) (make-lua-table r l))))
      (else (lua-error loc l #f "unknown Lua type code" t)))))

(define (wrap l i k)
  ($ lua_pushvalue (lua-state l) (int i))
  (let ((r ($ int luaL_ref (lua-state l) (int LUA_REGISTRYINDEX))))
    (save-ref l r (k r))))
      
(define (save-ref l r x)
  (hash-table-set! (lua-state-rtable l) r #t)
  (set-finalizer! x (release-ref l r))
  x) 

(define ((release-ref l r) x)
  (and-let* ((t (lua-state-rtable l)))
    (hash-table-delete! t r)
    ($ luaL_unref (lua-state l) (int LUA_REGISTRYINDEX) (int r) )) )

(define (lua-error loc l pref msg . args)
  (abort
   (make-composite-condition
    (make-property-condition 
     'exn
     'message (if pref (string-append pref ": " msg) msg)
     'location loc 'arguments args)
    (make-property-condition 'lua 'state l 'message msg))))

(define (handle-load-error loc l r k)
  (if (zero? r)
      (k)
      (let ((msg ($ c-string lua_tostring (lua-state l) -1)))
	($ lua_pop (lua-state l) 1)
	(cond
	  ((= r LUA_ERRSYNTAX) (lua-error loc l "syntax error in Lua script" msg))
	  ((= r LUA_ERRMEM) (lua-error loc l "memory allocation error in Lua script" msg))
	  ((= r LUA_ERRRUN) (lua-error loc l #f msg))
	  (else (lua-error loc l #f "unknown error return code while running Lua script" r))))))

(define lua-global-ref
  (getter-with-setter
   (lambda (l name)
     ($ lua_getglobal (lua-state l) (c-string name))
     (let* ((i ($ int lua_gettop (lua-state l)))
	    (x (get-result 'lua-global-ref l i)))
       ($ lua_pop (lua-state l) 1)
       x))
   (lambda (l name x)
     (push-value
      'lua-global-ref/setter l x
      (lambda ()
	($ lua_setglobal (lua-state l) (c-string name)) )
      #f))))

(define (push-value loc l x k #!optional (pop #t))
  (cond ((number? x) ($ lua_pushnumber (lua-state l) (double x)))
	((string? x) ($ lua_pushlstring (lua-state l) (scheme-pointer x) (int (string-length x))))
	((symbol? x)
	 (let ((str (symbol->string x)))
	   ($ lua_pushlstring (lua-state l) (scheme-pointer str) (int (string-length str)))))
	((boolean? x) ($ lua_pushboolean (lua-state l) (bool x)))
	((char? x) ($ lua_pushlstring (lua-state l) (scheme-pointer (string x)) 1))
	((and (not (##sys#immediate? x)) (##sys#pointer? x))
	 ($ lua_pushlightuserdata (lua-state l) (c-pointer x)))
	((eq? x (void)) ($ lua_pushnil (lua-state l)))
	((lua-thread? x) ($ lua_rawgeti (lua-state l) (int LUA_REGISTRYINDEX) (int (lua-thread-r x))))
	((lua-table? x) ($ lua_rawgeti (lua-state l) (int LUA_REGISTRYINDEX) (int (lua-table-r x))))
	((lua-userdata? x) ($ lua_rawgeti (lua-state l) (int LUA_REGISTRYINDEX) (int (lua-userdata-r x))))
	((lua-function? x) ($ lua_rawgeti (lua-state l) (int LUA_REGISTRYINDEX) (int (lua-function-r x))))
	((vector? x)
	 ($ lua_newtable (lua-state l))
	 (let ((len (vector-length x)))
	   (do ((i 0 (add1 i)))
	       ((>= i len))
	     (push-value
	      loc l (vector-ref x i)
	      (lambda ()
		($ lua_rawseti (lua-state l) -2 (int (add1 i)) ) )
	      #f) ) ) )
	((list? x)
	 ($ lua_newtable (lua-state l))
	 (do ((x x (cdr x)))
	     ((null? x))
	   (assert (pair? (car x)) "can not convert list to Lua table - invalid item" (car x))
	   (push-value 
	    loc l (caar x)
	    (lambda ()
	      (push-value
	       loc l (cdar x)
	       (lambda ()
		 ($ lua_rawset (lua-state l) -3) )
	       #f) )
	    #f) ) )
	(else (lua-error loc l #f "can not convert value to Lua representation" x)))
  (if pop
      (dynamic-wind
	  void k
	  (lambda ()
	    ($ lua_pop (lua-state l) 1) ) )
      (k)))

(define lua-table-ref
  (getter-with-setter
   (lambda (t k)
     (let ((l (lua-table-state t)))
       ($ lua_rawgeti (lua-state l) (int LUA_REGISTRYINDEX) (int (lua-table-r t)))
       (push-value
	'lua-table-ref l k
	(lambda ()
	  ($ lua_gettable (lua-state l) -2)
	  (let ((x (get-result 'hash-table-ref l -1)))
	    ($ lua_pop (lua-state l) 2)
	    x) ) 
	#f) ) )
   (lambda (t k x)
     (let ((l (lua-table-state t)))
       ($ lua_rawgeti (lua-state l) (int LUA_REGISTRYINDEX) (int (lua-table-r t)))
       (push-value
	'lua-table-ref/setter l k
	(lambda ()
	  (push-value
	   'lua-table-ref/setter l x
	   (lambda ()
	     ($ lua_settable (lua-state l) -3) ) 
	   #f) ) ) ) ) ) )
)