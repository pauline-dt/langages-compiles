CC = gcc
CFLAGS = -Wall -Wextra -std=c11

all:
	$(CC) $(CFLAGS) hello.c -o hello
	$(CC) $(CFLAGS) test_options.c -o test_options
	$(CC) $(CFLAGS) types.c -o types
	$(CC) $(CFLAGS) calculs.c -o calculs
	$(CC) $(CFLAGS) fiche_interactive.c -o fiche_interactive
	$(CC) $(CFLAGS) convertisseur.c -o convertisseur

clean:
	rm -f hello test_options types calculs fiche_interactive convertisseur
	rm -f hello.i hello.s hello.o
