CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = my_ngram

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(TARGET)

fclean: clean

re: fclean all

.PHONY: all clean fclean re