TARGET = my_ngram
CC = gcc
SRC = my_ngram.c
BAYROQLAR = -Wall -Wextra -Xato

hammasi: $(TARGET)
$(TARGET): $(SRC)
$(CC) $(bayroqlar) -o $(TARGET) $(SRC)


toza:
rm -r $(TARGET)
.PHONY: fclean

fclean :
rm -rf $(TARGET)