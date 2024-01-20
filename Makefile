CC = gcc
CFLAGS = -g -Wall -Wextra -Werror
SOURCES = my_ngram.c
TARGET = my_ngram

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean

clean:
	rm -f $(TARGET)
