CC = gcc

all: client.c
	${CC} client.c -o h && ./h