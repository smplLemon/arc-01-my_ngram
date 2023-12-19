TARGET = my_ngram
OBJ = my_ngram.o
CC = gcc
CFLAGS = -Wall -Wextra -Werror
.PHONY : all clean fclean re
all : $(TARGET)
$(TARGET) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^
.c.o : 
	$(CC) -c $^
clean :
	rm -f *o
fclean : clean
	rm -f $(TARGET)
re : fclean all