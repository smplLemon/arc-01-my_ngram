SOURCES = my_ngram.c
TARGET = my_ngram
CC = gcc
CFLAGS = -g -Wall -Wextra -Werror

$(TARGET):$(SOURCES)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

.PHONY: fclean

fclean:
	@rm -r $(TARGET)