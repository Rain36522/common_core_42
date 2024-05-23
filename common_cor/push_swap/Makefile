# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pudry <pudry@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 09:01:54 by pudry             #+#    #+#              #
#    Updated: 2023/11/06 09:12:42 by pudry            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
FLAGS = -Wall -Wextra -Werror
LIBFT = libft/libft.a
BLUE = \\033[1;34m
WHITE = \\033[0;37m
YELLOW = \\033[0;33m
RED = \\033[1;31m
GREEN = \\033[1;32m
BRWN = \\033[0; 33m

INPUT = 1658735832 -65227727 3

SRC = ft_algorithm.c ft_lst.c ft_lst2.c ft_lst3.c ft_treat_input.c \
ft_treat_input2.c ft_utils.c ft_utils2.c ft_utils3.c main.c

OBJ = ft_algorithm.o ft_lst.o ft_lst2.o ft_lst3.o ft_treat_input.o \
ft_treat_input2.o ft_utils.o ft_utils2.o ft_utils3.o main.o

all : header gen_obj
	@make -C libft/
	@$(CC) $(FLAGS) $(OBJ) $(LIBFT) -o $(NAME)

cnt : header gen_obj
	@make -C libft/
	@$(CC) $(FLAGS) $(SRC) $(LIBFT) -o $(NAME)
	@./$(NAME) $(INPUT) | wc -l

check : header gen_obj
	@make -C libft/
	@$(CC) $(FLAGS) $(OBJ) $(LIBFT) -o $(NAME)
	@./$(NAME) $(INPUT) | ./checker_Mac $(INPUT)

leak : header gen_obj
	@make -C libft/
	@$(CC) $(FLAGS) $(OBJ) $(LIBFT) -o $(NAME)
	@leaks -atExit -- ./$(NAME) $(INPUT)

clean :
	@rm -f $(OBJ)
	@make clean -C libft/

fclean : clean
	@rm -f $(NAME) 
	@make fclean -C libft/

re : fclean all

gen_obj :
	@$(CC) $(CFLAGS) -c $(SRC)

header :
	@echo "${GREEN}"
	@echo "		   __________"
	@echo "		 . ---------- ."
	@echo "		 | .--------. |"
	@echo "		 | | ${BLUE}COMPILE${GREEN}| |       __________       ___"
	@echo "		 | | ${BLUE}FILE${GREEN}   | |      /__________\\    {~${RED}.${GREEN}_${RED}.${GREEN}~}"  
	@echo "	.--------|  --------  |------|    --=-- |-----( Y )---."
	@echo "	|         ----,-.-----       |o ======  |    ()~*~()  | "
	@echo "	|       ______|_|_______     |__________|    (_)-(_)  | "
	@echo "	|      /  %%%%%%%%%%%%  \\                             | "
	@echo "	|     /  %%%%%%%%%%%%%%  \\                            | "
	@echo "	|     ^^^^^^^^^^^^^^^^^^^^                            | "
	@echo "	+-----------------------------------------------------+"
	@echo "	^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ "
	@echo "${BLUE}"
	@echo "\n<------------COMPILING OBJECT------------>\n"
	@echo "${WHITE}"



.PHONY : fclean re all header clean cnt check leak