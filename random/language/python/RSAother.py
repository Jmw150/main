# Python implementation of RSA encryption

import Crypto
from Crypto.PublicKey import RSA 
from Crypto import Random
import ast

# create random number to make keys
random_number = Random.new().read 

# make public and private key
key = RSA.generate(4096, random_number) 

# changing keys so they can be stored 
publickey = key.publickey() 

f = open ('publicKey', 'w')
f.write(str(publickey)) 
f.close()

# input from terminal or whatever
userMessage = 'hello' # raw_input('to encrypt:')

# checking that this is indeed the message
print 'unencrypted:\n', userMessage

# break into base 32 chunks
encrypted = publickey.encrypt(userMessage, 32) 

# printing out encrypted text
print 'encrypted:\n', encrypted 

# write ciphertext to file
f = open ('encryption', 'w')
f.write(str(encrypted)) 
f.close()

# reading encrypted code from file
f = open('encryption', 'r')
readEncryption = f.read()

# decrypting
decrypted = key.decrypt(ast.literal_eval(str(encrypted)))

# printing decryption
print 'decrypted\n', decrypted

