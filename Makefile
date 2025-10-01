NAME	= libft.a
CC		= cc
SRCS	= ft_isalpha.c ft_strlen.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_isalnum.c ft_toupper.c ft_tolower.c ft_memset.c ft_memcpy.c ft_strlcpy.c

OJS		= $(SRCS:.c=.o)
CFLAGS	= -Wall -Wextra -Werror -MMD -MP

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OJS) 

fclean:
	rm -f $(NAME)

re:
	fclean all

.PHONY: all clean fclean re

