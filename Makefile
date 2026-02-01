# ============================================================================ #
#                                 LIBFT PROJECT                                #
#                           42 Madrid | by <laviles>                          #
# ============================================================================ #

# == Compilation Settings ==================================================== #

NAME		= 	libft.a

CC			= 	cc

INCLUDES = -I. -I get_next_line -I printf

CFLAGS		=	-Wall -Wextra -Werror -I $(GNL_DIR) -I $(PRINTF_DIR) $(INCLUDES)

# == directories ============================================================= #

GNL_DIR = ./get_next_line/
GNL_SRCS = $(GNL_DIR)get_next_line.c $(GNL_DIR)get_next_line_utils.c $(GNL_DIR)get_next_line_utils_bonus.c $(GNL_DIR)get_next_line_bonus.c

PRINTF_DIR = ./printf/
PRINTF_SRCS = $(PRINTF_DIR)ft_printf.c $(PRINTF_DIR)ft_printf_utils.c

# == Sources ================================================================= #

SRCS		=	ft_atoi.c ft_bzero.c ft_calloc.c \
				ft_isalnum.c ft_isalpha.c ft_isascii.c \
				ft_isdigit.c ft_isprint.c ft_itoa.c \
				ft_memchr.c ft_memcmp.c ft_memcpy.c \
				ft_memmove.c ft_memset.c ft_split.c \
				ft_strchr.c ft_strdup.c ft_strjoin.c \
				ft_strlcat.c ft_strlcpy.c ft_strlen.c \
				ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
				ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
				ft_strncmp.c ft_strnstr.c ft_strrchr.c \
				ft_strtrim.c ft_substr.c ft_tolower.c \
				ft_toupper.c ft_strtok.c ft_strpbrk.c ft_print_bits.c \
				ft_strcmp.c $(GNL_SRCS) $(PRINTF_SRCS)

OBJS			= 	$(SRCS:.c=.o)

BONUS_SRCS	=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
            	ft_lstclear_bonus.c ft_lstiter_bonus.c \
				ft_lstmap_bonus.c

BONUS_OBJS	=	$(BONUS_SRCS:.c=.o)

# == Rules =================================================================== #

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: $(NAME) all clean fclean re bonus
