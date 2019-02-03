
import Crypto
from Crypto.PublicKey import RSA #using the object to organize everything
from Crypto import Random # secure method of making a random number

random_number = Random.new().read 
key = RSA.generate(4096, random_number) 

f = open('publickey', 'w')
f.write('public_key ')
f.write(str(key.n))
f.write(' ')
f.write(str(key.e))
f.close()

f = open('privatekey', 'w')
f.write('private_key ')
f.write(str(key.p))
f.write(' ')
f.write(str(key.q))
f.write(' ')
f.write(str(key.d))
f.close()


userInput = raw_input()

encryption = key.publickey().encrypt(userInput, 32) #why 32?

print encryption



