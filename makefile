SRC = nm.c
TARGET = nm
CC = gcc
CFLAGS = -Wall -Wextra -Werror

$(TARGET): $(SRC)
  $(CC) $(CFLAGS) -o $@ $^  

.PHONY: 
  fclean

fclean:
  rm -rf ./nm.exe

re: fclean