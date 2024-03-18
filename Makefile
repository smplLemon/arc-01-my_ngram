CC = gcc
CFLAGS = -g -Wall -Wextra -Werror -O0 

SOURCES = my_ngram.c 
OBJECTS = $(SOURCES:.c=.o)
TARGET = my_ngram

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^ 


.PHONY: clean

clean:
	@rm -f $(TARGET) $(OBJECTS) core