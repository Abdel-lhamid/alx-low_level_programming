CC = gcc
CFLAGS = -Wall -pedantic -Werror -Wextra -std=gnu89
SRC = 2-strlen.c _putchar.c 3-islower.c 4-isalpha.c 6-abs.c 0-isupper.c 1-isdigit.c 9-strcpy.c 100-atoi.c 0-strcat.c 1-strncat.c 2-strncpy.c 3-strcmp.c 0-memset.c 1-memcpy.c 2-strchr.c 3-strspn.c 4-strpbrk.c 5-strstr.c
OBJ = $(SRC:.c=.o)
LIBNAME = libdynamic.so

all: $(LIBNAME)

$(LIBNAME): $(OBJ)
	$(CC) -shared -o $(LIBNAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIBNAME)

re: fclean all

.PHONY: all clean fclean re
