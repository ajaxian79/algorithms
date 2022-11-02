CC = gcc
CFLAGS = -Wall -g

all: bin/twosum

bin/twosum: twosum.c main.c
	$(CC) $(CFLAGS) -o bin/twosum twosum.c main.c

clean:
	rm -f bin/twosum