# compiler for this build is gcc
CC = gcc
# -g for debugging information in binary
# -Wall for additional compiler warnings
FLAGS = -g -Wall

all: compile execute

compile: linkedList.c
	$(CC) $(FLAGS) binaryTree.h binaryTree.c main.c -o main

execute:
	./main

clean:
	rm linkedList
