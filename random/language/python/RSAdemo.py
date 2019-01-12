#!/usr/bin/env python

from rsa import *

(pub_key, priv_key) = newkeys(256) #4096 safer

userInput = raw_input("type something (under 21 bytes): ") 

print ("your input: " + userInput)
encryption = encrypt(userInput, pub_key)
print ("encryption: " + encryption)
decryption = decrypt(encryption, priv_key)
print ("decryption: " + decryption)
