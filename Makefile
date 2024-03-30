CC = gcc
CFLAGS = -Wall -Wextra -Werror

TARGET = my_ngram
SRCS = my_ngram.c
OBJS = $(SRCS:.c=.o)

.PHONY: all clean fclean re

all: $(TARGET)

$(TARGET): $(OBJS)
 $(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

%.o: %.c
 $(CC) $(CFLAGS) -c $< -o $@

clean:
 rm -f $(OBJS)

fclean: clean
 rm -f $(TARGET)

re: fclean all