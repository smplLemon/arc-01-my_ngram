CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address

TARGET = my_ngram

MANBA = my_ngram.c

$(TARGET): $(MANBA)
 $(CC) $(CFLAGS) $^ -o $@

clean:
 rm -f $(TARGET)

.PHONY:fclean

fclean: 
 rm -rf $(TARGET)
