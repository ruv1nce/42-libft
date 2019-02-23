NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	   ft_isdigit.c ft_isprint.c ft_lstnew.c ft_memccpy.c ft_memchr.c \
	   ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strcat.c \
	   ft_strchr.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strlcat.c \
	   ft_strlen.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnstr.c \
	   ft_strrchr.c ft_strstr.c ft_tolower.c ft_toupper.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all
