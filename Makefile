TARGET = my_ngram
SRC = my_ngram.c
CFLAGS = -Wall -Wextra -Werror

all: $(TARGET)

$(TARGET): $(SRC)
	gcc $(CFLAGS) -o $@ $<

clean:
	rm -f $(TARGET)

fclean: clean

re: fclean all