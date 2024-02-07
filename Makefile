CC = gcc 
CGFLG = -g -Wall -Wextra -Werror
SOURCE = my_ngram.c
TARGET = my_ngram

$(TARGET):$(SOURCE)
	$(CC) $(CGFLG) -o $@ $^

.PHONY: fclean

fclean:
	@rm -r $(TARGET)