CC=gcc
CFLAGS=-Wall -std=gnu99 -g

target: bush

# Implicit rules
bush: bush.o

bush.o: bush.c

clean:
	rm -f bush *.o