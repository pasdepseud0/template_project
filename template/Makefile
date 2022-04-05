##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Compile generator
##

SRC		=	src/main.c	\

NAME    =	my_pipe

OBJ		=	$(SRC:.c=.o)

CFLAGS 	=	-g -Wall -Wextra -I includes

all: $(NAME) clean

$(NAME): $(OBJ)
	make -C lib/my
	gcc $(OBJ) -o $(NAME) -L lib/my -lmy

clean:
	make clean -C lib/my/
	rm -f *~
	rm -f $(OBJ)

fclean:	clean
	make fclean -C lib/my
	rm -f $(NAME)

debug: CFLAGS += -g

debug: re

re:	fclean all