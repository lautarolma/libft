NAME	= libft.a
CC		= cc
SRCS	= ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c
   
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

