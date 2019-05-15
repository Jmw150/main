#!/bin/sh

set -e
cd '/home/jordan/.chicken-install/cache/bind'

mkdir -p ${DESTDIR}'/usr/local/lib/chicken/9'
install -m 644 '/home/jordan/.chicken-install/cache/bind/cplusplus-object.static.o' ${DESTDIR}'/usr/local/lib/chicken/9/cplusplus-object.o'
install -m 644 '/home/jordan/.chicken-install/cache/bind/cplusplus-object.link' ${DESTDIR}'/usr/local/lib/chicken/9/cplusplus-object.link'

mkdir -p ${DESTDIR}'/usr/local/lib/chicken/9'
rm -f ${DESTDIR}'/usr/local/lib/chicken/9/cplusplus-object.so'
install -m 755 '/home/jordan/.chicken-install/cache/bind/cplusplus-object.so' ${DESTDIR}'/usr/local/lib/chicken/9/cplusplus-object.so'

mkdir -p ${DESTDIR}'/usr/local/lib/chicken/9'
rm -f ${DESTDIR}'/usr/local/lib/chicken/9/cplusplus-object.import.so'
install -m 755 '/home/jordan/.chicken-install/cache/bind/cplusplus-object.import.so' ${DESTDIR}'/usr/local/lib/chicken/9/cplusplus-object.import.so'

mkdir -p ${DESTDIR}'/usr/local/lib/chicken/9'
install -m 644 '/home/jordan/.chicken-install/cache/bind/bind-translator.static.o' ${DESTDIR}'/usr/local/lib/chicken/9/bind-translator.o'
install -m 644 '/home/jordan/.chicken-install/cache/bind/bind-translator.link' ${DESTDIR}'/usr/local/lib/chicken/9/bind-translator.link'

mkdir -p ${DESTDIR}'/usr/local/lib/chicken/9'
rm -f ${DESTDIR}'/usr/local/lib/chicken/9/bind-translator.so'
install -m 755 '/home/jordan/.chicken-install/cache/bind/bind-translator.so' ${DESTDIR}'/usr/local/lib/chicken/9/bind-translator.so'

mkdir -p ${DESTDIR}'/usr/local/lib/chicken/9'
rm -f ${DESTDIR}'/usr/local/lib/chicken/9/bind-translator.import.so'
install -m 755 '/home/jordan/.chicken-install/cache/bind/bind-translator.import.so' ${DESTDIR}'/usr/local/lib/chicken/9/bind-translator.import.so'

mkdir -p ${DESTDIR}'/usr/local/lib/chicken/9'
install -m 644 '/home/jordan/.chicken-install/cache/bind/bind.static.o' ${DESTDIR}'/usr/local/lib/chicken/9/bind.o'
install -m 644 '/home/jordan/.chicken-install/cache/bind/bind.link' ${DESTDIR}'/usr/local/lib/chicken/9/bind.link'

mkdir -p ${DESTDIR}'/usr/local/lib/chicken/9'
rm -f ${DESTDIR}'/usr/local/lib/chicken/9/bind.so'
install -m 755 '/home/jordan/.chicken-install/cache/bind/bind.so' ${DESTDIR}'/usr/local/lib/chicken/9/bind.so'

mkdir -p ${DESTDIR}'/usr/local/lib/chicken/9'
rm -f ${DESTDIR}'/usr/local/lib/chicken/9/bind.import.so'
install -m 755 '/home/jordan/.chicken-install/cache/bind/bind.import.so' ${DESTDIR}'/usr/local/lib/chicken/9/bind.import.so'

mkdir -p ${DESTDIR}'/usr/local/bin'
rm -f ${DESTDIR}'/usr/local/bin/chicken-bind'
install -m 755 '/home/jordan/.chicken-install/cache/bind/chicken-bind' ${DESTDIR}'/usr/local/bin/chicken-bind'

mkdir -p ${DESTDIR}'/usr/local/lib/chicken/9'
rm -f ${DESTDIR}'/usr/local/lib/chicken/9/bind.egg-info'
cat >${DESTDIR}'/usr/local/lib/chicken/9/bind.egg-info' <<ENDINFO
((installed-files
   "/usr/local/lib/chicken/9/bind.o"
   "/usr/local/lib/chicken/9/bind.link"
   "/usr/local/lib/chicken/9/bind.so"
   "/usr/local/lib/chicken/9/bind.import.so"
   "/usr/local/lib/chicken/9/bind-translator.o"
   "/usr/local/lib/chicken/9/bind-translator.link"
   "/usr/local/lib/chicken/9/bind-translator.so"
   "/usr/local/lib/chicken/9/bind-translator.import.so"
   "/usr/local/lib/chicken/9/cplusplus-object.o"
   "/usr/local/lib/chicken/9/cplusplus-object.link"
   "/usr/local/lib/chicken/9/cplusplus-object.so"
   "/usr/local/lib/chicken/9/cplusplus-object.import.so"
   "/usr/local/bin/chicken-bind")
 (version "1.2.4")
 (synopsis "Automatically generate bindings from C/C++ declarations")
 (category ffi)
 (license "public domain")
 (dependencies silex matchable coops srfi-1 regex)
 (test-dependencies test)
 (author "[[felix winkelmann]]")
 (components
   (host (extension bind (component-dependencies bind-translator))
         (extension bind-translator (component-dependencies grammar))
         (generated-source-file
           grammar
           (source "c.l.scm")
           (custom-build "gen-lexer"))
         (extension cplusplus-object)
         (program chicken-bind (component-dependencies bind-translator)))))
ENDINFO
