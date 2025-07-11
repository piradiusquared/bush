CC=gcc
CFLAGS=

target: all

all: bush.o

bush.o: bush.c

clean:
	rm -f all *.o