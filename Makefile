TARGET = My_ngram
OBJ = My_ngram.o
SRC = My_ngram.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all : $(TARGET)
$(TARGET) : $(OBJ)
	gcc $(CFLAGS) -o $(TARGET) $(OBJ) 


$(OBJ) : $(SRC)
	gcc $(CFLAGS) -c $(SRC)


clean:
	rm -f *.o


fclean: clean
	rm -f $(TARGET) *.exe


re: fclean all