

# _*_ Makefile _*_

CC=gcc
FLAGS= -Wall -g

all:  main.o myBank.o c2

c2: main.o myBank.o
	$(CC) $(FLAGS) main.o myBank.o -o c2
	
main.o: main.c myBank.h
	$(CC) $(FLAGS) -c main.c
myBank.o:  myBank.h
	$(CC) $(FLAGS) -c myBank.c

.PHONY: clean all

clean:
	 rm -f *.o c2 
