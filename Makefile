CC = gcc 
CFGLAS = -g -Wall -Wextra -Werror
SOURCE = my_ngram.c
TARGET = my_ngram

$(TARGET):$(SOURCE)
	$(CC) $(CFGLAS) -o $@ $^

.PHONY: fclean

fclean:
	@rm -r $(TARGET)
	