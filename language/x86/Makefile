
run : test
	./test

test : test.o
	ld -o test test.o

test.o : test.s
	nasm -f elf64 -o test.o test.s

clean :
	rm test.o test
