run: all 
	./t
all:main.o aba.o lista.o
	gcc main.o lista.o aba.o -o t -Wall
main.o: main.c aba.o lista.o
	gcc -c -g -Wall main.c -o main.o
lista.o: aba.o
	gcc -c -g -Wall lista.c -o lista.o
aba.o: aba.c
	gcc -c -g -Wall aba.c -o aba.o
clean:
	rm *.o t

