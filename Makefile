CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

SRCS = ft_putchar.c ft_putnbr.c ft_putstr.c ft_puthexa.c ft_printptr.c ft_putunbr.c ft_putuhexa.c ft_printf.c ft_strchr.c

OFILES =	$(SRCS:.c=.o)

$(NAME): $(OFILES)

all: $(NAME)

%.o: %.c 
	$(CC) -c $(FLAGS) $< -o $@
	ar rcs $(NAME) $@

clean:
	rm -rf  $(OFILES) 

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:	clean
.SECONDARY: $(OFILES)
