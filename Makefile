OBJ = nm.o
TARGET = main.exe
CC =gcc
CFLAGS = -Wall -Wextra -Werror
.PHONY: all clean fclean re
  all: $(TARGET)

$(TARGET): $(OBJ)
  $(CC) $(CFLAGS) -o $@ $^
.c.o:
  $(CC) -c $^  

clean:
  rm -f $(TARGET) $(OBJ)

fclean: clean
  rm -f $(TARGET)

re: fclean all
