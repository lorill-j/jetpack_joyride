##
## Makefile for Makefile in /home/jimmy
## 
## Made by LORILLARD jimmy
## Login   <lorill_j@etna-alternance.net>
## 
## Started on  Mon Apr 24 15:07:32 2017 LORILLARD jimmy
## Last update Wed Apr 26 01:42:09 2017 LORILLARD jimmy
##

NAME		=	jetpack_joyride

SRC 		= src/lib/my_putchar.c \
	        src/lib/my_putstr.c \
		src/lib/my_strlen.c \
		src/lib/my_put_nbr.c \
		src/lib/xmalloc.c \
		src/map_generator.c \
		src/jetpack_joyride.c


OBJ			=	$(SRC:%.c=%.o)

CC			=	gcc -LSDLmain -lSDL

CFLAGS			=   	-Wall -Werror -Wpedantic

RM			=	rm -f

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
				$(RM) $(OBJ)

fclean:			clean
				$(RM) $(NAME)

re:			fclean all

PHONY:			all clean fclean re
