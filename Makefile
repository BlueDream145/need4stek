##
## EPITECH PROJECT, 2017
## Makefile
## File description:
##
##

SRC	=	./src/commands.c \
		./src/converter.c \
		./src/engine_direction.c \
		./src/engine_speed.c \
		./src/engine.c \
		./src/main.c \
		./src/output.c \
		./src/reader.c \
		./src/string.c \
		./src/utils.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-Wall -Werror -Wextra -pedantic -std=c99 \
		-I include -ggdb3 -O0

LDFLAGS	+=	-lm

NAME	=	ia

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(CFLAGS) $(OBJ) $(LDFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
