import sys

def argexists (string) :
    length = len(sys.argv)
    i = 1
    while i < length :
        if sys.argv[i] == string :
            return 1
        i += 1

if argexists("cat") :
    print ("cat")
