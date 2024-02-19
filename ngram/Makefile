CC = gcc
CFLAGS = -g -Wall -Wextra -Werror
SOURCE = my_Ngram.c
TARGET = my_Ngram

$(TARGET): $(SOURCE)
    $(CC) $(CFLAGS) -o $@ $^

.PHONY: fclean

fclean:
    @rm -r $(TARGET)