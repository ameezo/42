CC=cc
CFLAGS=-Wall -Wextra -Werror
NAME=libftprintf.a
DEPS=ft_printf.h
SRC=ft_printf.c to_hex.c libft/ft_atoi.c libft/ft_itoa.c libft/ft_lstnew.c libft/ft_putendl_fd.c \
	libft/ft_strlcat.c libft/ft_substr.c libft/ft_bzero.c libft/ft_lstadd_back.c libft/ft_lstsize.c \
	libft/ft_putnbr_fd.c libft/ft_strlcpy.c libft/ft_tolower.c libft/ft_calloc.c libft/ft_lstadd_front.c \
	libft/ft_memchr.c libft/ft_putstr_fd.c libft/ft_strlen.c libft/ft_toupper.c libft/ft_isalnum.c \
	libft/ft_lstclear.c libft/ft_memcmp.c libft/ft_split.c libft/ft_strmapi.c libft/ft_isalpha.c \
	libft/ft_lstdelone.c libft/ft_memcpy.c libft/ft_strchr.c libft/ft_strncmp.c libft/ft_isascii.c \
	libft/ft_lstiter.c libft/ft_memmove.c libft/ft_strdup.c libft/ft_strnstr.c libft/ft_isdigit.c \
	libft/ft_lstlast.c libft/ft_memset.c libft/ft_striteri.c libft/ft_strrchr.c libft/ft_isprint.c \
	libft/ft_lstmap.c libft/ft_putchar_fd.c libft/ft_strjoin.c libft/ft_strtrim.c ft_persent_d.c \
	ft_persent_hex.c ft_persent_string.c ft_persent_u.c

OBJ=$(SRC:%.c=%.o)

all: $(NAME)


$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c $(DEPS)
	$(CC)  $(CFLAGS) -c $< -o $@

re:
	make fclean
	make all

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME) $(OBJ)

.PHONY: all clean fclean re
