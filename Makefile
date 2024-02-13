CC = gcc
CFLAGS = -g -Wall -Wextra -Werror
SOURCES = my_ngram_modified.c
TARGET = my_ngram_modified

$(TARGET) : $(SOURCES)
 $(CC) $(CFLAGS) -o $@ $^

.PHONY: clean

clean:
 rm -f $(TARGET)