 CC = gcc
 CFLAGS = -g -Wall -Wextra -Werror
 SOURCE = my_ngram.c
 TARGET = my_ngram
OBJS = $(SRCS:=.c)
EXECUTABLE = program

.PHONY: all clean
 all: $(TARGET)

$(TARGET): $(OBJ)
 	gcc $(CFLAGS) -o $(TARGET) $(OBJ)

$(OBJ): $(SRC)
 	gcc $(CFLAGS) -c $(SRC)


 .PHONY: fclean

clean:
	@rm -r *.o

 fclean: clean
 	@rm -r $(TARGET)

 re: fclean all
