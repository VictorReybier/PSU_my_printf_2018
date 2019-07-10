##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

NAME =	libprintf.a

OBJ	=	$(SRC:.c=.o)

SRC	=	libprintf/my_printf.c			\
		libprintf/my_put_nbr.c		\
		libprintf/my_putchar.c		\
		libprintf/my_strlen.c			\
		libprintf/my_putstr.c			\
		libprintf/convertisseur.c 	\
		include/my.h				\
		libprintf/pourcentages.c		\

$(NAME) : $(OBJ)
		ar rc $(NAME) libprintf/*.o

all:	$(NAME)

clean:
		rm -f *.o
		rm -f libprintf/*.o

fclean:	clean
		rm -rf $(NAME)

re:		fclean all