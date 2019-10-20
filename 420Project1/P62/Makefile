CFLAGS=-std=c11 -Wall
LIBS=-lm
CC=mpicc
all: p62

p62: main.o
	$(CC) -o $@ $(CFLAGS) $^ $(LIBS)
