G = gcc
SRC = my_ngram.c
TARGET = my_ngram
FLAGS = -Wall -Wextra -Werror 

$(TARGET) : $(SRC)
	@$(G) $(FLAGS) -o $(TARGET) $(SRC)

.PHONY : fclean

fclean :
	@rm -r $(TARGET)