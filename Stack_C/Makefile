# compiler for this build is gcc
CC = gcc
# -g for debugging information in binary
# -Wall for additional compiler warnings
FLAGS = -g -Wall

all: compile execute

compile: stack.c
	$(CC) $(FLAGS) stack.h stack.c main.c -o main

execute:
	./main

clean:
	rm main