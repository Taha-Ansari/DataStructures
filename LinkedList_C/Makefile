# compiler for this build is gcc
CC = gcc
# -g for debugging information in binary
# -Wall for additional compiler warnings
FLAGS = -g -Wall

all:
	$(compile execute)

compile:
	$(CC) $(FLAGS) linkedList.c -o linkedList

execute:
	./linkedList

clean:
	rm linkedList