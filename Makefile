CC=gcc
CFLAGS=-Wall -Wextra -std=c99
TARGET=My_ngram
OBJS=My_ngram.o

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

ngram.o: My_ngram.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(TARGET) $(OBJS)
