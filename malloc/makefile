CC = clang
CFLAGS = -Wall -Wextra -Werror -g
TARGET = memory_test
SRCS = main.c functions.c

build:
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -rf $(TARGET) $(TARGET).dSYM
