# based on http://perl.plover.com/lambda/jfp/lambda-church.pl
#
# requires python 2.1 (perhaps 2.0)
#
# CHANGES:
#
# 8 jan 2002: changed to_int to a more obscure lambda statement
# 17 december 2012: restored from web.archive.org, updated, reposted

#from __future__ import nested_scopes

true = lambda x: lambda y: x
false = lambda x: lambda y: y
if_then_else = lambda a: lambda b: lambda c: (a)(b)(c)


# pair = cons? cons = if_then_else
pair = lambda a: lambda b: lambda c: (c)(a)(b)

# head = true, tail = false?

head = (lambda x: x)(true)
tail = (lambda x: x)(false)

first = head
second = tail

zero = lambda f: lambda x: x
succ = lambda n: lambda f: lambda x: f(n(f)(x))

n0 = zero
n1 = succ(n0)
n2 = succ(n1)
n3 = succ(n2)
n4 = succ(n3)
n5 = succ(n4)

is_zero = lambda n: n(lambda k: false)(true)

if_then_else(is_zero(n0))(1)(2)
if_then_else(is_zero(n1))(1)(2)

add = lambda m,n: lambda f: lambda x: (m(f))(n(f)(x))

mul = lambda m,n: lambda f: m(n(f))
pred = lambda n: lambda f: lambda x: n(lambda g: lambda h: h(g(f)))(lambda u: x)(lambda u: u)

fac = lambda n: n(lambda c: lambda q:
q(succ(c(true)))(mul(c(true), c(false)))
)(lambda q: succ(zero))(false)


# up until here all we ave used is lambda. No operators, literal numbers,
# and so on. Only lambda, arguments and '='.
#
# however, the representation on my computer for n5 is
# <function <lambda> at 0x2f1bcf8> which has no meaning to 
# a human programmer of course.
#
# This is why we need a  bridge between the pure lambda world and the
# programmer readable python world: convert a numeral to an actual 
# integer.
# Use it to test the lambda functions

to_int = lambda n: n(lambda x:x+1)(0)

print to_int(if_then_else(true)(n1)(n2))
print to_int(if_then_else(false)(n1)(n2))

print to_int(n3)

print to_int(add(n1,n1))
print to_int(add(n1,n2))
print to_int(add(n3,n2))
print to_int(add(n3,succ(n2)))

print to_int(fac(n5))
print to_int(mul(n4,n5))
