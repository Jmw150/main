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

objects = graph.o main.o

default: graph

graph: $(objects) 
	$(CLINKER) $(OPTFLAGS) -o graph $(objects) $(LIBS)

graph.o : graph.cc graph.h
	$(CC) $(CFLAGS) $(INCLUDE_DIRS) -c graph.c

wstring.o : wstring.cc
	$(CC) $(CFLAGS) $(INCLUDE_DIRS) -c wstring.cc

main.o : main.cc graph.h
	$(CC) $(CFLAGS) $(INCLUDE_DIRS) -c main.c

clean :
	rm *.o
	rm graph



