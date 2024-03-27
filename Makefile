CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = my_ngram
SRC = my_ngram.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

.Phony:fclean

fclean:
	rm -f $(TARGET)