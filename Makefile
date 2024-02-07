CC = gcc
CFLAGS = -g -Wall -Wextra -Werror
COURCES = my_gram.c
TARGET = my_gram

$(TARGET):$(COURCES)
 $(CC) $(CFLAGS) -o $@ $^
clean:
 rm -f *.o
fclean: clean
 rm -f $(TARGET)