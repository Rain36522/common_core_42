
all: bsq


bsq: check_error.o dictio_init.o ft_found_square.o ft_split.o ft_util.o ft_write_square.o main.o
	gcc -Wall -Wextra -Werror check_error.o dictio_init.o ft_found_square.o ft_split.o ft_util.o ft_write_square.o main.o


%.o:%.c
	gcc -Wall -Wextra -Werror -o check_error.c dictio_init.c ft_found_square.c ft_split.c ft_util.c ft_write_square.c main.c

fclean:
	rm -rf a.out

.PHONY: all fclean
