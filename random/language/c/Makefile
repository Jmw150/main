

# pi to 300 digits
pi : pi.c
	gcc pi.c -o pi

# fast factorial
factorial : factorial.c
	gcc -o factorial factorial.c -lgmp

choose : choose.c
	gcc -o choose choose.c -lgmp

# gamma cumulative distribution from probability
# -lgmp is a bit of software bloat...
gammaCD : gammaCD.c
	gcc -o gammaCD gammaCD.c -lm -lgmp

clean :
	rm pi factorial choose gammaCD
