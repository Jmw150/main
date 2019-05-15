#!/bin/sh

set -e
PATH='/usr/local/bin':$PATH
export CHICKEN_CC='gcc'
export CHICKEN_CXX='g++'
export CHICKEN_CSC='/usr/local/bin/csc'
export CHICKEN_CSI='/usr/local/bin/csi'
cd '/home/jordan/.chicken-install/cache/bind'
chmod +x '/home/jordan/.chicken-install/cache/bind/gen-lexer'

'/usr/local/bin/chicken-do' 'c.l.scm' : '/home/jordan/.chicken-install/cache/bind/gen-lexer' '/home/jordan/.chicken-install/cache/bind/bind.egg'  : '/home/jordan/.chicken-install/cache/bind/gen-lexer'

'/usr/local/bin/chicken-do' '/home/jordan/.chicken-install/cache/bind/bind-translator.so' '/home/jordan/.chicken-install/cache/bind/bind-translator.import.scm' : 'bind-translator.scm' '/home/jordan/.chicken-install/cache/bind/bind.egg'   : '/usr/local/bin/csc' -host -D compiling-extension -J -s -setup-mode -I /home/jordan/.chicken-install/cache/bind -C -I/home/jordan/.chicken-install/cache/bind '-O2' '-d1' 'bind-translator.scm' -o '/home/jordan/.chicken-install/cache/bind/bind-translator.so'

'/usr/local/bin/chicken-do' '/home/jordan/.chicken-install/cache/bind/bind-translator.static.o' '/home/jordan/.chicken-install/cache/bind/bind-translator.link' : 'bind-translator.scm' '/home/jordan/.chicken-install/cache/bind/bind.egg'   : '/usr/local/bin/csc' -setup-mode -static -I /home/jordan/.chicken-install/cache/bind -emit-link-file '/home/jordan/.chicken-install/cache/bind/bind-translator.link' -host -D compiling-extension -c -unit bind-translator -D compiling-static-extension -C -I/home/jordan/.chicken-install/cache/bind '-O2' '-d1' 'bind-translator.scm' -o '/home/jordan/.chicken-install/cache/bind/bind-translator.static.o'

'/usr/local/bin/chicken-do' '/home/jordan/.chicken-install/cache/bind/bind-translator.import.so' : 'bind-translator.import.scm' : '/usr/local/bin/csc' -setup-mode -s -host -I /home/jordan/.chicken-install/cache/bind -C -I/home/jordan/.chicken-install/cache/bind '-O2' '-d0' 'bind-translator.import.scm' -o '/home/jordan/.chicken-install/cache/bind/bind-translator.import.so'

'/usr/local/bin/chicken-do' '/home/jordan/.chicken-install/cache/bind/chicken-bind' : 'chicken-bind.scm' '/home/jordan/.chicken-install/cache/bind/bind.egg'   : '/usr/local/bin/csc' -setup-mode -host -I /home/jordan/.chicken-install/cache/bind -C -I/home/jordan/.chicken-install/cache/bind '-O2' '-d1' 'chicken-bind.scm' -o '/home/jordan/.chicken-install/cache/bind/chicken-bind'

'/usr/local/bin/chicken-do' '/home/jordan/.chicken-install/cache/bind/cplusplus-object.so' '/home/jordan/.chicken-install/cache/bind/cplusplus-object.import.scm' : 'cplusplus-object.scm' '/home/jordan/.chicken-install/cache/bind/bind.egg'   : '/usr/local/bin/csc' -host -D compiling-extension -J -s -setup-mode -I /home/jordan/.chicken-install/cache/bind -C -I/home/jordan/.chicken-install/cache/bind '-O2' '-d1' 'cplusplus-object.scm' -o '/home/jordan/.chicken-install/cache/bind/cplusplus-object.so'

'/usr/local/bin/chicken-do' '/home/jordan/.chicken-install/cache/bind/cplusplus-object.static.o' '/home/jordan/.chicken-install/cache/bind/cplusplus-object.link' : 'cplusplus-object.scm' '/home/jordan/.chicken-install/cache/bind/bind.egg'   : '/usr/local/bin/csc' -setup-mode -static -I /home/jordan/.chicken-install/cache/bind -emit-link-file '/home/jordan/.chicken-install/cache/bind/cplusplus-object.link' -host -D compiling-extension -c -unit cplusplus-object -D compiling-static-extension -C -I/home/jordan/.chicken-install/cache/bind '-O2' '-d1' 'cplusplus-object.scm' -o '/home/jordan/.chicken-install/cache/bind/cplusplus-object.static.o'

'/usr/local/bin/chicken-do' '/home/jordan/.chicken-install/cache/bind/cplusplus-object.import.so' : 'cplusplus-object.import.scm' : '/usr/local/bin/csc' -setup-mode -s -host -I /home/jordan/.chicken-install/cache/bind -C -I/home/jordan/.chicken-install/cache/bind '-O2' '-d0' 'cplusplus-object.import.scm' -o '/home/jordan/.chicken-install/cache/bind/cplusplus-object.import.so'

'/usr/local/bin/chicken-do' '/home/jordan/.chicken-install/cache/bind/bind.so' '/home/jordan/.chicken-install/cache/bind/bind.import.scm' : 'bind.scm' '/home/jordan/.chicken-install/cache/bind/bind.egg'   : '/usr/local/bin/csc' -host -D compiling-extension -J -s -setup-mode -I /home/jordan/.chicken-install/cache/bind -C -I/home/jordan/.chicken-install/cache/bind '-O2' '-d1' 'bind.scm' -o '/home/jordan/.chicken-install/cache/bind/bind.so'

'/usr/local/bin/chicken-do' '/home/jordan/.chicken-install/cache/bind/bind.static.o' '/home/jordan/.chicken-install/cache/bind/bind.link' : 'bind.scm' '/home/jordan/.chicken-install/cache/bind/bind.egg'   : '/usr/local/bin/csc' -setup-mode -static -I /home/jordan/.chicken-install/cache/bind -emit-link-file '/home/jordan/.chicken-install/cache/bind/bind.link' -host -D compiling-extension -c -unit bind -D compiling-static-extension -C -I/home/jordan/.chicken-install/cache/bind '-O2' '-d1' 'bind.scm' -o '/home/jordan/.chicken-install/cache/bind/bind.static.o'

'/usr/local/bin/chicken-do' '/home/jordan/.chicken-install/cache/bind/bind.import.so' : 'bind.import.scm' : '/usr/local/bin/csc' -setup-mode -s -host -I /home/jordan/.chicken-install/cache/bind -C -I/home/jordan/.chicken-install/cache/bind '-O2' '-d0' 'bind.import.scm' -o '/home/jordan/.chicken-install/cache/bind/bind.import.so'
