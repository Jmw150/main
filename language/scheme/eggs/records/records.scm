; "record.scm" record data types
; Written by David Carlton, carlton@husc.harvard.edu.
; Re-Written by Aubrey Jaffer, agj @ alum.mit.edu, 1996, 1997
;
; This code is in the public domain.

; Implements `record' data structures for Scheme.  Using only the
; opacity of procedures, makes record datatypes and
; record-type-descriptors disjoint from R4RS types and each other, and
; prevents forgery and corruption (modification without using
; RECORD-MODIFIER) of records.

;;2001-07-24  Aubrey Jaffer  <agj@alum.mit.edu>
;;  changed identifiers containing VECTOR to VECT or VCT.

;; Ported to CHICKEN by felix

(declare 
  (fixnum)
  (no-bound-checks) )

(module records

  (record-modifier 
	  record-accessor
	  record-constructor
	  record-predicate
	  make-record-type) 

(import scheme chicken)
(use srfi-1)

(define (rtd? x) (##sys#structure? x 'rtd))
(define (rtd-name rtd) (##sys#slot rtd 1))
(define (rtd-fields rtd) (##sys#slot rtd 2))
(define (rtd-length rtd) (##sys#slot rtd 3))

(define (has-duplicates? lst)
  (cond ((null? lst) #f)
	((memq (car lst) (cdr lst)) #t)
	(else (has-duplicates? (cdr lst)))))

(define make-record-type
  (lambda (type-name field-names)
    (if (string? type-name)
	(set! type-name (string->symbol type-name))
	(##sys#check-symbol type-name 'make-record-type) )
    (if (or (and (list? field-names) (has-duplicates? field-names))
	    (not (every symbol? field-names)))
	(error 'make-record-type "illegal field-names argument"
	       field-names))
    (##sys#make-structure
     'rtd
     type-name
     field-names
     (length field-names) ) ) )

(define record-predicate
  (lambda (rtd)
    (if (not (rtd? rtd))
	(error 'record-predicate "invalid argument - not a record type" rtd))
    (lambda (x) (##sys#structure? x (##sys#slot rtd 1))) ) )

(define record-constructor
  (lambda (rtd #!optional field-names)
    (if (not (rtd? rtd))
	(error 'record-constructor "illegal rtd argument" rtd))
    (if (or (not field-names)
	    (equal? field-names (rtd-fields rtd)))
	(let ((rec-length (rtd-length rtd)))
	  (lambda elts
	    (if (= (length elts) rec-length) #t
		(error 'record-constructor
		       "wrong number of arguments"
		       (rtd-name rtd)))
	    (apply ##sys#make-structure (rtd-name rtd) elts)))
	(let ((rec-length (rtd-length rtd))
	      (fields (rtd-fields rtd)) 
	      (name (rtd-name rtd)) )
	  (if (or (and (list? field-names) (has-duplicates? field-names))
		  (not (every (lambda (x) (memq x fields))
			      field-names)) )
	      (error
	       'record-constructor "invalid field-names argument"
	       fields))
	  (let ((field-length (length field-names))
		(offsets
		 (map (lambda (field) (add1 (list-index (cut eq? <> field) fields)))
		      field-names)))
	    (lambda elts
	      (unless (= (length elts) field-length)
		(error 'record-constructor
		       "wrong number of arguments"
		       (rtd-name rtd) ) )
	      (let ((result (##sys#allocate-vector (fx+ 1 rec-length) #f (void) #f)))
		(##core#inline "C_vector_to_structure" result)
		(##sys#setslot result 0 name)
		(for-each (lambda (offset elt)
			    (##sys#setslot result offset elt))
			  offsets
			  elts)
		result)))))))

(define record-accessor
  (lambda (rtd field-name)
    (if (not (rtd? rtd))
	(error 'record-accessor "invalid rtd argument" rtd))
    (let ((index (list-index (cut eq? field-name <>) (rtd-fields rtd)))
	  (name (rtd-name rtd)) )
      (if (not index)
	  (error 'record-accessor "invalid field-name argument"
		 field-name))
      (let ((i (fx+ index 1)))
	(lambda (x)
	  (##sys#check-structure x name '<rtd-accessor>)
	  (##sys#slot x i))))))

(define record-modifier
  (lambda (rtd field-name)
    (if (not (rtd? rtd))
	(error 'record-modifier "invalid rtd argument" rtd))
    (let ((index (list-index (cut eq? field-name <>) (rtd-fields rtd)))
	  (name (rtd-name rtd)))
      (if (not index)
	  (error 'record-modifier "invalid field-name argument"
		 field-name))
      (let ((i (fx+ index 1)))
	(lambda (x y)
	  (##sys#check-structure x name '<rtd-modifier>) 
	  (##sys#setslot x i y))))))

)
