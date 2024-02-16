CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: ngram

ngram: main.o my_ngram.o
  $(CC) $(CFLAGS) -o ngram main.o my_ngram.o

main.o: main.c my_ngram.h
  $(CC) $(CFLAGS) -c main.c

my_ngram.o: my_ngram.c my_ngram.h
  $(CC) $(CFLAGS) -c my_ngram.c

clean:
  rm -f *.o ngram