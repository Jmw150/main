;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
;;; CHICKEN modules for Raymond Smullyan's combinator birds.
;;;
;;; This software is written by Evan Hanson <evhan@foldling.org> and
;;; placed in the public domain. All warranties are disclaimed.
;;;

(module combinator-birds ()
  (import chicken scheme)
  (export bald-eagle becard blackbird bluebird bunting
          cardinal cardinal* cardinal** converse-warbler crossed-konstant-mocker
          dickcissel double-mockingbird dove dovekies
          eagle
          finch finch* finch**
          goldfinch
          hummingbird
          identity-bird identity-bird* idiot-bird idiot-bird*
          jay
          kestrel kite konstant-mocker
          lark
          mockingbird
          oracle-bird owl
          pairing phoenix psi-bird
          quacky-bird queer-bird quirky-bird quixotic-bird quizzical-bird
          robin robin* robin**
          sage-bird starling
          thrush turing-bird
          vireo vireo* vireo**
          warbler warbler* warbler**)
  (include "combinator-birds.scm"))

(module combinator-letters ()
  (import chicken scheme)
  (export B D E F G H I J K L M O Q R S T U V W Y)
  (include "combinator-birds.scm"))
