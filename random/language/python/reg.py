
import re

a = "lolcats are the best evar!!1!"
b = 'lol'
c = 'catt'

f = re.compile('lol*')

print(f.match(a))

"""
eval("print('lol')")

com = lambda x : compile(x,'noname','exec') # lame needing extra stuff, also it is not allowing rename

lol = com("print('cat')")


exec(lol)
"""
