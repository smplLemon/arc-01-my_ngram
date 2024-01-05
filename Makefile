CC = gcc
CFLAGS = -Wall -Wextra -Werror

TARGET = my_ngram

SRCS = my_ngram.c

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(TARGET)

.PHONY:fclean

fclean: 
	rm -rf $(TARGET)

