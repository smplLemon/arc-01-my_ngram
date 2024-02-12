CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = my_ngram

all: $(TARGET)

$(TARGET): my_ngram.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(TARGET)
	del $(TARGET).exe
    
.PHONY: all clean