NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I $(INCL)

INCL = libft.h

SRCS = ft_strlen.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_strlcpy.c ft_isascii.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
