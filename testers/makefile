CC=cc
# CFLAGS=-Wall -Wextra -Werror
OBJ=ft_isalpha.o ft_memcmp.o ft_strdup.o ft_strnstr.o ft_atoi.o ft_isascii.o ft_memcpy.o ft_strlcat.o ft_strrchr.o ft_bzero.o ft_isdigit.o ft_memmove.o ft_strlcpy.o ft_tolower.o ft_calloc.o ft_isprint.o ft_memset.o ft_strlen.o ft_toupper.o ft_isalnum.o ft_memchr.o ft_strchr.o ft_strncmp.o ft_substr.o main.o


%.o: %.c
	$(CC) -c $< -o $@

main: $(OBJ) main.o
	$(CC) $^ -o $@







# something.c something2.c

# something.o: something.c
# 	cc -c something.c -o something.o

# something2.o: something2.c
# 	cc -c something2.c -o something2.o


# main: something.o something2.o main.c
# 	cc something.o something2.o main.c -o main


clean:
	rm *.o main
