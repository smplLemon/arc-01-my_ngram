CC = gcc
CFLSGS = -g -Wall -Wextra -Werror
SOURCE = my_ngram.c
TARGET = my_ngram

$(TARGET): $(SOURCE)
    $(CC) $(CFLSGS) -o $@ $^

.PHONY: fclean

fclean:
    @rm -r $(TARGET)