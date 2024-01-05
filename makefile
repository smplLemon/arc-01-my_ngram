CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = dastur

SRCS = main.c

OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
 $(CC) $(CFLAGS) -o $@ $(OBJS)

%.o: %.c
 $(CC) $(CFLAGS) -c $< -o $@

clean:
 rm -f $(OBJS)

fclean: clean
 rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
