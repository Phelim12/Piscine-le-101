# Piscine-le-101

FLAGS=-Wall -Werror -Wextra
SRCS=./srcs/
INCLUDES=./includes/
NAME=ft_putchar ft_putstr ft_strcmp ft_strlen ft_swap
FILEO=$(FILEC:.c=.o)
NAME=libft.a

all: create

create:
	gcc -c $(filter ./srcs/%.c,$(NAME))
clean:
	rm -rf $(FILEO)
fclean: clean
	rm -rf $(NAME)
re: fclean all

http://icps.u-strasbg.fr/people/loechner/public_html/enseignement/GL/make.pdf
