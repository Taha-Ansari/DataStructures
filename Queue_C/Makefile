# compiler for this build is gcc
CC = gcc
# -g for debugging information in binary
# -Wall for additional compiler warnings
FLAGS = -g -Wall

all: compile execute

compile: queue.c
	$(CC) $(FLAGS) queue.h queue.c main.c -o main

execute:
	./main

clean:
	rm main
