CC := gcc
CFLAGS := -Wall -Wextra

TARGET :=my_ngram
SRCS :=my_ngram.c
OBJS := $(SRCS:.c=.o)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS) $(TARGET)
