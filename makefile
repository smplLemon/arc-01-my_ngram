TARGET = my_ngram
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = my_ngram.c
OBJ = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
    $(CC) $(CFLAGS) -o $(TARGET) $(OBJ)
$(OBJ): $(SRC)    $(CC) $(CFLAGS) -c $(SRC)
clean:
    rm -f $(OBJ)
fclean: clean    rm -f $(TARGET)
re: fclean all
