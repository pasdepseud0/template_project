##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## compile maze and solver
##

OBJ = $(SRC:.c=.o)

NAME3 = $(NAME) && $(NAME2)

CFLAGS = -Wall -Wextra -I includes/

all: $(NAME3)

$(NAME3): $(OBJ)
	make -C template/

clean:
		make clean -C template/

fclean: clean
		make fclean -C template/

debug: CFLAGS += -g

debug: re

re: fclean all