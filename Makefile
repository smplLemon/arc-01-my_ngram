CC = gcc

CFLAGS = -Wall -g -Wextra -Werror -std=c99

TARGET = my_ngram

SRC = my_ngram.c

all: $(TARGET)

$(TARGET): my_ngram.o
	# Команда, которую make выполнит, чтобы создать цель
	$(CC) $(CFLAGS) -o $(TARGET) my_ngram.o

my_ngram.o: my_ngram.c
	# Команда, которую make выполнит, чтобы создать объектный файл
	$(CC) $(CFLAGS) -c my_ngram.c

clean:
	rm -f $(TARGET) *.o