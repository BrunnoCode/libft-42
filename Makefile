NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I

SRCS = ft_strlen.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_strcpy.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
