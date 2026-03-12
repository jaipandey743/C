CC = gcc
CFLAGS = -Wall -Wextra -O2

run:
	$(CC) $(file).c -o $(file)
	./$(file).exe