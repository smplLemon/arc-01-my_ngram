CFLAGS = -Wall -Wextra -Werror
OUTNAME = my_ngram
TARGET = my_ngram.c


all : start

start : $(TARGET)
 gcc $(CFLAGS) $(TARGET) -o $(OUTNAME)
 ./$(OUTNAME)

clean:
 rm -rf *.out $(OUTNAME)

fclean: clean
 rm -f compilication

re: fclean all
