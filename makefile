CC = gcc
DEBUG_FLAGS = -g -Wall -Werror
MATH_FLAG = -lm

all: ./bin/ctsp

./bin/ctsp: ./bin/main.o ./bin/config.o
	${CC} ${DEBUG_FLAGS}  $^ -o $@ -lm

./bin/main.o: ./src/main.c
	${CC} ${DEBUG_FLAGS}  -c $^ -o $@ -lm

./bin/config.o: ./src/config.c
	${CC} ${DEBUG_FLAGS}  -c $^ -o $@ -lm

clean:
	rm ./bin/*

.PHONY:
	all clean
