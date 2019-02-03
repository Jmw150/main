from random import *

swordatt = lambda : randint(1,20)+11
sworddmg = lambda : randint(1,8)+7

monkatt = lambda : randint(1,20)+9
monkdmg = lambda : randint(1,6)+5

print(swordatt())
print(monkdmg())
print(swordatt())
print(sworddmg())

print(monkatt())
print(monkdmg())
print(monkatt())
print(monkdmg())