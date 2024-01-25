CC = gcc
CFLAGS = -Wall -Wextra

TARGET = letter_counter
SRC = my_ngram.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)