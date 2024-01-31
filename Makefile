CC = gcc
CFLAGS = -Wall -Wextra -std=c99

TARGET = character_counter

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(TARGET)
