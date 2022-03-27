##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## compile lib
##

OBJ = $(SRC:.c=.o)

NAME = libmy.a

CFLAGS = -Wall -Wextra -I includes

all: $(NAME)

$(NAME): $(OBJ)
	gcc -c *.c && ar rc libmy.a *.o

clean:
	rm -f *~
	rm -f *.o
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

debug: CFLAGS += -g

debug: re

re: fclean all