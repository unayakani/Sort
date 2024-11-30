CC = cc
SRC = main.c
FLAGS = -lraylib -lmath

all:
	$(CC) $(SRC) $(FLAGS)
