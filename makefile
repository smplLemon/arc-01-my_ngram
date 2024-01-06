CC = gcc
CFLAGS = -Wall -Wextra

SRCS = my_ngram.c
OBJS = $(SRCS:.c=.o)
TARGET = program

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
 $(CC) $(CFLAGS) $^ -o $@

%.o: %.c
 $(CC) $(CFLAGS) -c $< -o $@

clean:
 rm -f $(OBJS) $(TARGET)
