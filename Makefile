CFLAGS = -Wall -Wextra -Werror
TARGET = my_ngram
SRC = $(TARGET).c
OBJ = $(TARGET).o

all: $(TARGET)

$(TARGET): $(OBJ)
	gcc $(CFLAGS) -o $(TARGET) $(OBJ)

$(OBJ): $(SRC)
	gcc $(CFLAGS) -c $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(TARGET)

re: fclean all