CC = gcc
CFLAGS = -g -Wall -Wextra -Werror
SOURCE = my_ngram.c
TARGET = a.exe

$(TARGET):$(SOURCE)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: fclean

fclean:
	@rm -r $(TARGET)
