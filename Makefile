CC=gcc
CFLAGS=-Wall -Wextra -std=c99
TARGET=ngram
OBJS=ngram.o

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

ngram.o: ngram.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(TARGET) $(OBJS)
