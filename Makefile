CC = gcc
CFLAGS = -Wall -Wextra

TARGET = character_counter

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(TARGET)
