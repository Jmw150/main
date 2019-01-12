#!/usr/bin/env python

from rsa import *

(pub_key, priv_key) = newkeys(4096) #4096 safer

pubkeyfile = open("/home/jordan/publicKey", 'w')
pubkeyfile.write(str(pub_key)) 
pubkeyfile.close()

privkeyfile = open("/home/jordan/privateKey", 'w')
privkeyfile.write(str(priv_key))
privkeyfile.close()
