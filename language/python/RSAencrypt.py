import Crypto
from Crypto.PublicKey import RSA #using the object to organize everything

public = open('publickey', 'r')
key = RSA.construct((public.read(),public.read())) #hopefully takes a word at a time

userinput = raw_input() # good for < style argument

encryption = key.publickey().encrypt(userInput) #why 32?

print encryption 
