CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address

TARGET = ls

SRCS = ls.c

$(TARGET): $(SRCS)
 $(CC) $(CFLAGS) $^ -o $@

clean:
 rm -f $(TARGET)

.PHONY:fclean

fclean: 
 rm -rf $(TARGET)
