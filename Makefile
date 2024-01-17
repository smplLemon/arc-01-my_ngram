CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = word_count
all: $(TARGET)

$(TARGET): word_count.c
	$(CC) $(CFLAGS) -o $@ $^
clean:
	rm -f $(TARGET)

