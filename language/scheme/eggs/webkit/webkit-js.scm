;; -*- mode: Scheme; -*-
;;
;; This file is part of WebKit for CHICKEN
;; Copyright (c) 2011 by Thomas Chust.  All rights reserved.
;;
;; Permission is hereby granted, free of charge, to any person
;; obtaining a copy of this software and associated documentation
;; files (the Software), to deal in the Software without restriction,
;; including without limitation the rights to use, copy, modify,
;; merge, publish, distribute, sublicense, and/or sell copies of the
;; Software, and to permit persons to whom the Software is furnished
;; to do so, subject to the following conditions:
;; 
;; The above copyright notice and this permission notice shall be
;; included in all copies or substantial portions of the Software.
;; 
;; THE SOFTWARE IS PROVIDED ASIS, WITHOUT WARRANTY OF ANY KIND,
;; EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
;; MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
;; NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
;; BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
;; ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
;; CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
;; SOFTWARE.

(define valid-contexts
  (make-hash-table #:test equal? #:hash equal?-hash))

(define (jscontext-invalidate! ctx)
  (hash-table-delete! valid-contexts ctx))

(define jsobject-private
  (getter-with-setter
   (foreign-lambda*
    scheme-object ((jsobject obj))
    "C_return(CHICKEN_gc_root_ref(JSObjectGetPrivate(obj)));")
   (foreign-lambda*
    void ((jsobject obj) (scheme-object v))
    "CHICKEN_gc_root_set(JSObjectGetPrivate(obj), v);")))

(define jso
  (make-rtd
   'jso
   '#((mutable context)
      (mutable this)
      (immutable pointer))
   #:uid 'jso))

(define-values (jso? jso-context jso-this jso-pointer)
  (letrec ((value/data
	    (lambda (v)
	      (if (extended-procedure? v)
		  (procedure-data v)
		  v)))
	   (jso? (rtd-predicate jso))
	   (jso-context (rtd-accessor jso 'context))
	   (jso-this (rtd-accessor jso 'this))
	   (jso-pointer (rtd-accessor jso 'pointer)))
    (values
     (lambda (obj)
       (jso? (value/data obj)))
     (lambda (obj)
       (let ((ctx (jso-context (value/data obj))))
	 (and (hash-table-ref/default valid-contexts ctx #f) ctx)))
     (lambda (obj)
       (jso-this (value/data obj)))
     (lambda (obj)
       (jso-pointer (value/data obj))))))

(define-record-printer (jso obj port)
  (cond
   ((jso-context obj)
    => (lambda (ctx)
	 (display (js->string ctx (jso-pointer obj)) port)))
   (else
    (display "[object (out of scope)]" port))))

(define current-jso
  (make-parameter #f))

(define collect-jserror!
  (letrec ((exn-message
	    (condition-property-accessor 'exn 'message #f))
	   (some-message
	    (lambda (v)
	      (or (and (condition? v) (exn-message v))
		  (->string v))))
	   (collect-jserror!
	    (lambda (ctx pexn exn)
	      (when pexn
		(let ((args (make-jsargs
			     ctx (list (some-message exn) "scheme"))))
		  ((foreign-lambda*
		    void ((jscontext ctx)
			  (size_t nargs) (nonnull-pointer-vector args)
			  ((c-pointer jsvalue) pexn))
		    "JSValueRef exn = NULL;"
		    "*pexn = (JSObjectMakeError(ctx, nargs, (const JSValueRef *)args, &exn) ?: exn);")
		   ctx
		   (pointer-vector-length args) args
		   pexn)))
	      #f)))
    collect-jserror!))

(define-external (SchemeObjectGetType
		  (jscontext ctx) (jsobject obj) (jsstring key)
		  ((c-pointer jsvalue) pexn)) jsvalue
  (let ((obj (jsobject-private obj)))
    (handle-exceptions
     exn (collect-jserror! ctx pexn exn)
     (value->js
      ctx
      (cond
       ((hash-table? obj)
	"hash-table")
       ((vector? obj)
	"vector")
       ((pair? obj)
	"pair")
       ((record-rtd obj)
	=> (lambda (rtd)
	     (symbol->string (rtd-name rtd))))
       ((procedure? obj)
	"procedure"))))))

(define-external (SchemeObjectGetLength
		  (jscontext ctx) (jsobject obj) (jsstring key)
		  ((c-pointer jsvalue) pexn)) jsvalue
  (let ((obj (jsobject-private obj)))
    (handle-exceptions
     exn (collect-jserror! ctx pexn exn)
     (value->js
      ctx
      (cond
       ((hash-table? obj)
	(hash-table-size obj))
       ((vector? obj)
	(vector-length obj)))))))

(define pair-fields
  (alist->hash-table
   `(("car" . ,car)
     ("cdr" . ,cdr)
     ("cadr" . ,cadr)
     ("caddr" . ,caddr)
     ("cadddr" . ,cadddr)
     ("cddddr" . ,cddddr)
     ("caar" . ,caar)
     ("cdar" . ,cdar)
     ("cddr" . ,cddr)
     ("caaar" . ,caaar)
     ("caadr" . ,caadr)
     ("cadar" . ,cadar)
     ("cdaar" . ,cdaar)
     ("cdadr" . ,cdadr)
     ("cddar" . ,cddar)
     ("cdddr" . ,cdddr)
     ("caaaar" . ,caaaar)
     ("caaadr" . ,caaadr)
     ("caadar" . ,caadar)
     ("caaddr" . ,caaddr)
     ("cadaar" . ,cadaar)
     ("cadadr" . ,cadadr)
     ("caddar" . ,caddar)
     ("cdaaar" . ,cdaaar)
     ("cdaadr" . ,cdaadr)
     ("cdadar" . ,cdadar)
     ("cdaddr" . ,cdaddr)
     ("cddaar" . ,cddaar)
     ("cddadr" . ,cddadr)
     ("cdddar" . ,cdddar))
   #:test string=? #:hash string-hash))

(define-external (SchemeObjectHasProperty
		  (jscontext ctx) (jsobject obj) (jsstring key)) bool
  (let ((obj (jsobject-private obj))
	(key (jsstring->string key)))
    (handle-exceptions
     exn #f
     (cond
      ((hash-table? obj)
       (hash-table-exists? obj key))
      ((vector? obj)
       (and-let* ((i (string->number key)))
	 (<= 0 i (sub1 (vector-length obj)))))
      ((pair? obj)
       (hash-table-exists? pair-fields key))
      ((record-rtd obj)
       => (cut rtd-accessor <> (string->symbol key)))
      (else
       #f)))))

(define-external (SchemeObjectGetProperty
		  (jscontext ctx) (jsobject obj) (jsstring key)
		  ((c-pointer jsvalue) pexn)) jsvalue
  (let ((obj (jsobject-private obj))
	(key (jsstring->string key)))
    (handle-exceptions
     exn (collect-jserror! ctx pexn exn)
     (cond
      ((hash-table? obj)
       (value->js ctx (hash-table-ref obj key)))
      ((vector? obj)
       (value->js ctx (vector-ref obj (string->number key))))
      ((pair? obj)
       (value->js ctx ((hash-table-ref pair-fields key) obj)))
      ((record-rtd obj)
       => (lambda (rtd)
	    (value->js ctx ((rtd-accessor rtd (string->symbol key)) obj))))
      (else
       #f)))))

(define-external (SchemeObjectSetProperty
		  (jscontext ctx) (jsobject obj) (jsstring key)
		  (jsvalue v)
		  ((c-pointer jsvalue) pexn)) bool
  (let ((obj (jsobject-private obj))
	(key (jsstring->string key))
	(v (js->value ctx v)))
    (handle-exceptions
     exn (collect-jserror! ctx pexn exn)
     (cond
      ((hash-table? obj)
       (hash-table-set! obj key v))
      ((vector? obj)
       (vector-set! obj (string->number key) v))
      ((record-rtd obj)
       => (lambda (rtd)
	    ((rtd-mutator rtd (string->symbol key)) obj v)))
      (else
       #f)))))

(define-external (SchemeObjectDeleteProperty
		  (jscontext ctx) (jsobject obj) (jsstring key)
		  ((c-pointer jsvalue) pexn)) bool
  (let ((obj (jsobject-private obj))
	(key (jsstring->string key)))
    (handle-exceptions
     exn (collect-jserror! ctx pexn exn)
     (cond
      ((hash-table? obj)
       (hash-table-delete! obj key))
      (else
       #f)))))

(define-external (SchemeObjectGetPropertyNames
		  (jscontext ctx) (jsobject obj) (jsname+ acc)) void
  (let ((obj (jsobject-private obj)))
    (for-each
     (lambda (key)
       ((foreign-lambda
	 void "JSPropertyNameAccumulatorAddName"
	 jsname+ jsstring)
	acc (string->jsstring key)))
     (cond
      ((hash-table? obj)
       (filter string? (hash-table-keys obj)))
      ((vector? obj)
       (list-ec (:range i (vector-length obj))
	 (number->string i)))
      ((pair? obj)
       (hash-table-keys pair-fields))
      ((record-rtd obj)
       => (lambda (rtd)
	    (list-ec (:vector key (rtd-all-field-names rtd))
	      (symbol->string key))))
      (else
       '())))))

(define-external (SchemeObjectCallAsFunction
		  (jscontext ctx) (jsobject obj) (jsobject this)
		  (size_t nargs)
		  ((nonnull-c-pointer jsvalue) args)
		  ((c-pointer jsvalue) pexn)) jsvalue
  (let ((obj (jsobject-private obj))
	(this (js->object ctx this))
	(args (list-ec (:range i nargs)
		(js->value
		 ctx
		 ((foreign-lambda*
		   jsvalue (((nonnull-c-pointer jsvalue) args) (integer i))
		   "C_return(args[i]);")
		  args i)))))
    (value->js
     ctx
     (handle-exceptions
      exn (collect-jserror! ctx pexn exn)
      (parameterize ((current-jso this)) (apply obj args))))))

(define-external (SchemeObjectConvertToType
		  (jscontext ctx) (jsobject obj) (int type)
		  ((c-pointer jsvalue) pexn)) jsvalue
  (let ((obj (jsobject-private obj)))
    (value->js
     ctx
     (handle-exceptions
      exn (collect-jserror! ctx pexn exn)
      (select type
	(((foreign-value "kJSTypeString" int))
	 (->string obj))
	(else
	 #f))))))

#>
static void SchemeObjectInitialize(JSContextRef ctx, JSObjectRef obj) {
  CHICKEN_gc_root_set(JSObjectGetPrivate(obj), C_SCHEME_UNDEFINED);
}

static void SchemeObjectFinalize(JSObjectRef obj) {
  CHICKEN_delete_gc_root(JSObjectGetPrivate(obj));
}

C_externexport const struct OpaqueJSValue *SchemeObjectGetType(struct OpaqueJSContext *, struct OpaqueJSValue *, struct OpaqueJSString *, const struct OpaqueJSValue **);

C_externexport const struct OpaqueJSValue *SchemeObjectGetLength(struct OpaqueJSContext *, struct OpaqueJSValue *, struct OpaqueJSString *, const struct OpaqueJSValue **);

C_externexport int SchemeObjectHasProperty(struct OpaqueJSContext *, struct OpaqueJSValue *, struct OpaqueJSString *);

C_externexport const struct OpaqueJSValue *SchemeObjectGetProperty(struct OpaqueJSContext *, struct OpaqueJSValue *, struct OpaqueJSString *, const struct OpaqueJSValue **);

C_externexport int SchemeObjectSetProperty(struct OpaqueJSContext *, struct OpaqueJSValue *, struct OpaqueJSString *, const struct OpaqueJSValue *, const struct OpaqueJSValue **);

C_externexport int SchemeObjectDeleteProperty(struct OpaqueJSContext *, struct OpaqueJSValue *, struct OpaqueJSString *, const struct OpaqueJSValue **);

C_externexport void SchemeObjectGetPropertyNames(struct OpaqueJSContext *, struct OpaqueJSValue *, struct OpaqueJSPropertyNameAccumulator *);

C_externexport const struct OpaqueJSValue *SchemeObjectCallAsFunction(struct OpaqueJSContext *, struct OpaqueJSValue *, struct OpaqueJSValue *, size_t, const struct OpaqueJSValue **, const struct OpaqueJSValue **);

C_externexport const struct OpaqueJSValue *SchemeObjectConvertToType(struct OpaqueJSContext *, struct OpaqueJSValue *, int, const struct OpaqueJSValue **);

static const JSStaticValue kSchemeObjectClassStaticValues[] = {
  {
    .name = "type",
    .attributes = (kJSPropertyAttributeReadOnly |
                   kJSPropertyAttributeDontEnum |
                   kJSPropertyAttributeDontDelete),
    .getProperty = (JSObjectGetPropertyCallback)SchemeObjectGetType
  },
  {
    .name = "length",
    .attributes = (kJSPropertyAttributeReadOnly |
                   kJSPropertyAttributeDontEnum |
                   kJSPropertyAttributeDontDelete),
    .getProperty = (JSObjectGetPropertyCallback)SchemeObjectGetLength
  },
  { 0 }
};

static const JSClassDefinition kSchemeObjectClassDefinition = {
  .version = 0,
  .attributes = kJSClassAttributeNone,
  .className = "SchemeObject",
  .initialize = SchemeObjectInitialize,
  .finalize = SchemeObjectFinalize,
  .staticValues = kSchemeObjectClassStaticValues,
  .hasProperty = (JSObjectHasPropertyCallback)SchemeObjectHasProperty,
  .getProperty = (JSObjectGetPropertyCallback)SchemeObjectGetProperty,
  .setProperty = (JSObjectSetPropertyCallback)SchemeObjectSetProperty,
  .deleteProperty = (JSObjectDeletePropertyCallback)SchemeObjectDeleteProperty,
  .getPropertyNames = (JSObjectGetPropertyNamesCallback)SchemeObjectGetPropertyNames,
  .callAsFunction = (JSObjectCallAsFunctionCallback)SchemeObjectCallAsFunction,
  .convertToType = (JSObjectConvertToTypeCallback)SchemeObjectConvertToType
};
<#

(define scheme-object-class
  (set-finalizer!
   (foreign-value "JSClassCreate(&kSchemeObjectClassDefinition)" jsclass)
   (foreign-lambda void "JSClassRelease" jsclass)))

(define (js-scheme-object? ctx v)
  ((foreign-safe-lambda
    bool "JSValueIsInstanceOfConstructor"
    jscontext jsvalue jsobject
    (c-pointer jsvalue))
   ctx v
   ((foreign-lambda
     jsobject "JSObjectMakeConstructor"
     jscontext jsclass c-pointer)
    ctx scheme-object-class #f)
   #f))

(define (js->number ctx v)
  (let-location ((exn jsvalue #f))
    (let ((num ((foreign-lambda
		 double "JSValueToNumber"
		 jscontext jsvalue
		 (c-pointer jsvalue))
		ctx v
		(location exn))))
      (if exn
	  (error 'js->number (js->string exn))
	  num))))

(define (jsstring->string str)
  (let* ((buf (make-string
	       ((foreign-lambda
		 size_t "JSStringGetMaximumUTF8CStringSize"
		 jsstring)
		str)))
	 (len (sub1
	       ((foreign-lambda
		 size_t "JSStringGetUTF8CString"
		 jsstring nonnull-scheme-pointer size_t)
		str buf (string-length buf)))))
    (substring/shared buf 0 len)))

(define (js->string ctx v)
  (let* ((str ((foreign-lambda
		jsstring "JSValueToStringCopy"
		jscontext jsvalue
		(c-pointer jsvalue))
	       ctx v
	       #f))
	 (v (jsstring->string str)))
    ((foreign-lambda void "JSStringRelease" jsstring) str)
    v))

(define js->object
  (letrec ((make-jso
	    (rtd-constructor jso))
	   (jsvalue-protect
	    (lambda (ctx v)
	      (when v
		((foreign-lambda
		  void "JSValueProtect"
		  jscontext jsvalue)
		 ctx v))))
	   (jso-protect
	    (lambda (obj)
	      (let ((ctx (jso-context obj)))
		(jsvalue-protect ctx (jso-this obj))
		(jsvalue-protect ctx (jso-pointer obj)))
	      (set-finalizer! obj jso-unprotect)))
	   (jsvalue-unprotect
	    (lambda (ctx v)
	      (when v
		((foreign-lambda
		  void "JSValueUnprotect"
		  jscontext jsvalue)
		 ctx v))))
	   (jso-unprotect
	    (lambda (obj)
	      (cond
	       ((jso-context obj)
		=> (lambda (ctx)
		     (jsvalue-unprotect ctx (jso-this obj))
		     (jsvalue-unprotect ctx (jso-pointer obj)))))))
	   (js->object
	    (lambda (ctx v #!optional this)
	      (let-location ((exn jsvalue #f))
		(let ((obj ((foreign-lambda
			     jsobject "JSValueToObject"
			     jscontext jsvalue
			     (c-pointer jsvalue))
			    ctx v (location exn))))
		  (if exn
		      (error 'js->object (js->string ctx exn))
		      ((if ((foreign-lambda
			     bool "JSObjectIsFunction"
			     jscontext jsobject)
			    ctx obj)
			   (lambda (obj)
			     (extend-procedure
			      (lambda vs (jso-apply obj vs))
			      obj))
			   identity)
		       (begin
			 (hash-table-set! valid-contexts ctx #t)
			 (jso-protect (make-jso ctx this obj))))))))))
    js->object))

(define (js->value ctx v #!optional this)
  (select ((foreign-lambda int "JSValueGetType" jscontext jsvalue) ctx v)
    (((foreign-value "kJSTypeUndefined" int))
     (void))
    (((foreign-value "kJSTypeNull" int))
     '())
    (((foreign-value "kJSTypeBoolean" int))
     ((foreign-lambda bool "JSValueToBoolean" jscontext jsvalue) ctx v))
    (((foreign-value "kJSTypeNumber" int))
     (js->number ctx v))
    (((foreign-value "kJSTypeString" int))
     (js->string ctx v))
    (else
     (if (js-scheme-object? ctx v)
	 (jsobject-private v)
	 (js->object ctx v this)))))

(define (string->jsstring str)
  (set-finalizer!
   ((foreign-lambda
     jsstring "JSStringCreateWithUTF8CString"
     nonnull-c-string)
    str)
   (foreign-lambda void "JSStringRelease" jsstring)))

(define number->js
  (foreign-lambda jsvalue "JSValueMakeNumber" jscontext double))

(define (string->js ctx v)
  ((foreign-lambda jsvalue "JSValueMakeString" jscontext jsstring) ctx
   (string->jsstring v)))

(define (object->js ctx v)
  (let ((obj ((foreign-lambda*
	       jsobject ((jscontext ctx) (jsclass cls))
	       "C_return(JSObjectMake(ctx, cls, CHICKEN_new_gc_root()));")
	      ctx scheme-object-class)))
    (set! (jsobject-private obj) v)
    obj))

(define (value->js ctx v)
  (cond
   ((eq? v (void))
    ((foreign-lambda jsvalue "JSValueMakeUndefined" jscontext) ctx))
   ((null? v)
    ((foreign-lambda jsvalue "JSValueMakeNull" jscontext) ctx))
   ((boolean? v)
    ((foreign-lambda jsvalue "JSValueMakeBoolean" jscontext bool) ctx v))
   ((number? v)
    (number->js ctx v))
   ((string? v)
    (string->js ctx v))
   ((symbol? v)
    (string->js ctx (symbol->string v)))
   ((jso? v)
    (jso-pointer v))
   (else
    (object->js ctx v))))

(define (make-jsargs ctx vs)
  (apply pointer-vector (map (cut value->js ctx <>) vs)))

(define (jso-new obj . vs)
  (let-location ((exn jsvalue #f))
    (let* ((ctx (jso-context obj))
	   (args (make-jsargs ctx vs))
	   (val ((foreign-safe-lambda*
		  jsobject ((jscontext ctx) (jsobject obj)
			    (size_t nargs) (nonnull-pointer-vector args)
			    ((c-pointer jsvalue) exn))
		  "C_return(JSObjectCallAsConstructor(ctx, obj, nargs, (const JSValueRef *)args, exn));")
		 ctx (jso-pointer obj)
		 (pointer-vector-length args) args
		 (location exn))))
      (if exn
	  (error 'jso-new (js->string ctx exn))
	  (js->value ctx val)))))

(define (jso-apply obj . vs)
  (let-location ((exn jsvalue #f))
    (let* ((ctx (jso-context obj))
	   (args (make-jsargs ctx (apply cons* vs)))
	   (val ((foreign-safe-lambda*
		  jsobject ((jscontext ctx) (jsobject obj) (jsobject this)
			    (size_t nargs) (nonnull-pointer-vector args)
			    ((c-pointer jsvalue) exn))
		  "C_return(JSObjectCallAsFunction(ctx, obj, this, nargs, (const JSValueRef *)args, exn));")
		 ctx (jso-pointer obj) (jso-this obj)
		 (pointer-vector-length args) args
		 (location exn))))
      (if exn
	  (error 'jso-apply (js->string ctx exn))
	  (js->value ctx val)))))

(define (jso-exists? obj name)
  (let ((ctx (jso-context obj))
	(this (jso-pointer obj)))
    ((foreign-safe-lambda
      bool "JSObjectHasProperty"
      jscontext jsobject jsstring)
     ctx this (string->jsstring (->string name)))))

(define-values (jso-ref jso-set!)
  (letrec ((jso-ref
	    (lambda (obj name)
	      (let-location ((exn jsvalue #f))
		(let* ((ctx (jso-context obj))
		       (this (jso-pointer obj))
		       (val ((foreign-safe-lambda
			      jsobject "JSObjectGetProperty"
			      jscontext jsobject jsstring
			      (c-pointer jsvalue))
			     ctx this (string->jsstring (->string name))
			     (location exn))))
		  (if exn
		      (error 'jso-ref (js->string ctx exn))
		      (js->value ctx val this))))))
	   (jso-set!
	    (lambda (obj name v . attrs)
	      (let-location ((exn jsvalue #f))
		(let ((ctx (jso-context obj))
		      (this (jso-pointer obj)))
		  ((foreign-safe-lambda
		    void "JSObjectSetProperty"
		    jscontext jsobject jsstring
		    jsvalue int
		    (c-pointer jsvalue))
		   ctx this (string->jsstring (->string name))
		   (value->js ctx v)
		   (fold
		    (lambda (attr n)
		      (bitwise-ior
		       n
		       (case attr
			 ((read-only)
			  (foreign-value "kJSPropertyAttributeReadOnly" int))
			 ((dont-enum hidden)
			  (foreign-value "kJSPropertyAttributeDontEnum" int))
			 ((dont-delete fixed)
			  (foreign-value "kJSPropertyAttributeDontDelete" int))
			 (else
			  (error 'jso-set! "unknown attribute" attr)))))
		    0 attrs)
		   (location exn))
		  (if exn
		      (error 'jso-set! (js->string ctx exn))))))))
    (values (getter-with-setter jso-ref jso-set!) jso-set!)))

(define (jso-delete! obj name)
  (let-location ((exn jsvalue #f))
    (let* ((ctx (jso-context obj))
	   (this (jso-pointer obj))
	   (ok? ((foreign-safe-lambda
		  bool "JSObjectDeleteProperty"
		  jscontext jsobject jsstring
		  (c-pointer jsvalue))
		 ctx this (string->jsstring (->string name))
		 (location exn))))
      (if exn
	  (error 'jso-delete! (js->string exn))
	  ok?))))

(define (jso-names obj)
  (set-finalizer!
   ((foreign-safe-lambda
     jsnames "JSObjectCopyPropertyNames"
     jscontext jsobject)
    (jso-context obj) (jso-pointer obj))
   (foreign-lambda void "JSPropertyNameArrayRelease" jsnames)))

(define jsnames-length
  (foreign-lambda
   size_t "JSPropertyNameArrayGetCount"
   jsnames))

(define jsnames-ref
  (foreign-lambda
   jsstring "JSPropertyNameArrayGetNameAtIndex"
   jsnames size_t))

(define-syntax :jso
  (syntax-rules (index)
    ((:jso cc key (index i) obj)
     (:do
      cc
      (let ((names (jso-names obj)) (n 0))
	(set! n (jsnames-length names)))
      ((i 0)) (< i n)
      (let ((key (jsstring->string (jsnames-ref names i)))))
      #t
      ((add1 i))))
    ((:jso cc key obj)
     (:jso cc key (index i) obj))))

(define (jso-keys obj)
  (list-ec (:jso key obj) key))

(define (xexpr->jso xexpr document)
  (define make-element
    (jso-ref document 'createElement))
  (define make-attribute
    (jso-ref document 'createAttribute))
  (define make-text
    (jso-ref document 'createTextNode))
  (define (make-entity v)
    (let ((node (make-element 'span)))
      (set! (jso-ref node 'innerHTML) (string-append "&" (->string v) ";"))
      (jso-ref node 'firstChild)))
  (define (append-child! node child)
    ((jso-ref node 'appendChild) child))
  (define (set-attribute! attrmap attr)
    ((jso-ref attrmap 'setNamedItem) attr))
  (define (content->jso xexpr)
    (cond
     ((symbol? xexpr)
      (make-entity xexpr))
     ((and (integer? xexpr) (positive? xexpr))
      (make-entity (string-append "#" (number->string xexpr))))
     ((string? xexpr)
      (make-text xexpr))
     (else
      (element->jso xexpr))))
  (define (element->jso elt)
    (unless (and (pair? elt) (symbol? (car elt)) (list? (cdr elt)))
      (error 'xexpr->jso "not a proper element" elt))
    (let*-values (((tag attributes+contents)
		   (car+cdr elt))
		  ((node)
		   (make-element tag))
		  ((attributes contents)
		   (cond
		    ((null? attributes+contents)
		     (values '() '()))
		    ((and (list? (car attributes+contents))
			  (every list? (car attributes+contents)))
		     (car+cdr attributes+contents))
		    (else
		     (let-values (((attributes contents)
				   (partition
				    (lambda (elt)
				      (and (pair? elt) (eq? (car elt) '|@|)))
				    attributes+contents)))
		       (values (append-map cdr attributes) contents)))))
		  ((attrmap)
		   (jso-ref node 'attributes)))
      (for-each
       (lambda (xexpr)
	 (set-attribute! attrmap (attribute->jso xexpr)))
       attributes)
      (for-each
       (lambda (xexpr)
	 (append-child! node (content->jso xexpr)))
       contents)
      node))
  (define (attribute->jso attr)
    (unless (and (pair? attr) (symbol? (car attr)) (list? (cdr attr)))
      (error 'xexpr->jso "not a proper attribute" attr))
    (let*-values (((tag contents)
		   (car+cdr attr))
		  ((node)
		   (make-attribute tag)))
      (for-each
       (lambda (xexpr)
	 (append-child! node (content->jso xexpr)))
       contents)
      node))
  (content->jso xexpr))

(define (jso->xexpr node #!optional [at-attributes? #f])
  (define (node-list->list convert nodes)
    (list-ec (:range i (inexact->exact (jso-ref nodes 'length)))
	     (:let node (convert (jso-ref nodes i)))
	     (if node)
      node))
  (define (jso->content node)
    (case (inexact->exact (jso-ref node 'nodeType))
      ((1)
       (jso->element node))
      ((3 4)
       (jso-ref node 'data))
      ((5)
       (let ((v (jso-ref node 'nodeValue)))
	 (or (and (string-prefix? "#" v)
		  (string->number (substring/shared v 1)))
	     (string->symbol v))))
      ((11)
       (node-list->list jso->content (jso-ref node 'childNodes)))
      (else
       #f)))
  (define (jso->element node)
    (cons*
     (string->symbol (jso-ref node 'nodeName))
     ((if at-attributes? (cut cons '|@| <>) identity)
      (node-list->list jso->attribute (jso-ref node 'attributes)))
     (node-list->list jso->content (jso-ref node 'childNodes))))
  (define (jso->attribute node)
    (cons
     (string->symbol (jso-ref node 'nodeName))
     (node-list->list jso->content (jso-ref node 'childNodes))))
  (jso->content node))
