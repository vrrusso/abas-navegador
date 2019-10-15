run: all 
	./t
all:main.o aba.o
	gcc main.o aba.o -o t -Wall
main.o: main.c aba.o
	gcc -c -g -Wall main.c -o main.o
aba.o: aba.c
	gcc -c -g -Wall aba.c -o aba.o
clean:
	rm *.o t

