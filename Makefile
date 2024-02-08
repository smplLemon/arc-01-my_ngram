SRC = my_ngram.c
TARGET = main
CC = gcc
CFLAGS = -Wall -Wextra -Werror

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^	

.PHONY:
	fclean

fclean:
	rm -rf $(TARGET)

re: fclean