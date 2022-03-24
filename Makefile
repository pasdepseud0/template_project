##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Compile
##

SRC		=	src/main.c

NAME	=	template

CFLAGS 	=	-g -Wall -Wextra -I includes

OBJ		=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)


clean:
	rm -f *~
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
