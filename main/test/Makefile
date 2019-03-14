CC          = gcc
CLINKER     = gcc
CCC         = g++
CCLINKER    = $(CCC)
INCLUDE_DIR = 
LIB_LIST    = -lm
CFLAGS  = $(INCLUDE_DIR)
CCFLAGS = $(CFLAGS)
OPTFLAGS    = -g
LIB_PATH    =
LIBS = $(LIB_PATH) $(LIB_LIST)

objects = main.o hidden.o


default: struct


struct: $(objects) 
	$(CLINKER) $(OPTFLAGS) -o struct $(objects) $(LIBS)

main.o : main.c main.h
	$(CC) $(CFLAGS) $(INCLUDE_DIRS) -c main.c

hidden.o : hidden.c main.h
	$(CC) $(CFLAGS) $(INCLUDE_DIRS) -c hidden.c

clean :
	rm *.o
	rm struct





clean :
	rm pi factorial choose gammaCD
