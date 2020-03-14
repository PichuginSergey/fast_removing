
CC = g++

CFLAGS = -c -Wall -std=c++0x

DIR = test/

all: test1

test1: test1.o
	$(CC) -o test1 test1.o

test1.o: $(DIR)test1.cpp
	$(CC) $(CFLAGS) $(DIR)test1.cpp

test2: test2.o
	$(CC) -o test2 test2.o

test2.o: $(DIR)test2.cpp
	$(CC) $(CFLAGS) $(DIR)test2.cpp
	
clean:
	rm -rf *.o