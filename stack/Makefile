main: main.o stack.o
	gcc -g -o main main.o stack.o

main.o: main.c stack.h
	gcc -c main.c
stack.o: stack.h stack.c
	gc -c stack.c
clean:
	rm *.o main
debug: main
	gdb main
