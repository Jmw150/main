combinator-birds
================
Raymond Smullyan's combinator birds for Scheme.

Description
-----------
This is a simple library of combinators I wrote while working through
"To Mock A Mockingbird", in order to play with the logic in Scheme.

Usage
-----
Each bird from the book is provided as a combinator procedure. When
called with one or more arguments, it returns another combinator. When
called with no arguments, it returns two values: its name, and the
equivalent lambda expression.

License
-------
This software is written by Evan Hanson <evhan@foldling.org> and placed
in the public domain. All warranties are disclaimed.
