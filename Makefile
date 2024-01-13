TARGET = my_ngram
CC = gcc
SRC = my_ngram.c


$(TARGET) : my_ngram.c
  $(CC) $(SRC) -o $(TARGET) 

clean : 
  rm TARGET *.exe