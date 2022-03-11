CC=gcc
CFLAGS=-c -Wall -Werror -g

all: a04 

a04: bit_utils.o instructions.o a04.o
	${CC} $^ -o a04

bit_utils.o: bit_utils.c bit_utils.h
	$(CC) $(CFLAGS) bit_utils.c

instructions.o: instructions.c instructions.h bit_utils.h
	$(CC) $(CFLAGS) instructions.c

a04.o: a04.c instructions.h
	$(CC) $(CFLAGS) a04.c

run: a04
	./a04

clean:
	rm -f a04 *.o

