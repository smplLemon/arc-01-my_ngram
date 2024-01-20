TARGET = my_ngram
SRC = my_ngram.c
CFLAGS = -Wall -Wextra -Werror

$(TARGET) : $(SRC)
  gcc $(CFLAGS) $@ $<

.PHONY : fclean

fclean :
  @rm -r $(TARGET)