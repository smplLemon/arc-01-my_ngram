G = gcc
TARGET = my_ngram
SRC = my_ngram.c
FLAGC = -Wall -Wextra -Werror

$(TARGET) : $(SRC)
 $(G) -o $(TARGET) $(SRC)
.PHONY: fclean

fclean:
 @rm -rf $(TARGET)


