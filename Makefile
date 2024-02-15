SRCS = my_ngram.c
OBJ = $(SRCS:.c=.o)
TARGET = main.exe
CC = gcc
CFLAGS = -Wall -Wextra -Werror
.PHONY: all clean fclean re

all: $(TARGET)

$(TARGET): $(OBJ)
    $(CC) $(CFLAGS) -o $@ $^

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -f $(OBJ)

fclean: clean
    rm -f $(TARGET)

re: fclean all
