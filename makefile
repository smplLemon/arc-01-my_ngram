CC = gcc
CFLAGS = -Wall -Wextra -Werror

my_ngram: my_ngram.o
	$(CC) $(CFLAGS) -o my_ngram my_ngram.o

my_ngram.o: my_ngram.c
	$(CC) $(CFLAGS) -c my_ngram.c

clean:
	rm -f my_ngram my_ngram.o
