# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paul <paul@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 09:01:54 by pudry             #+#    #+#              #
#    Updated: 2023/10/27 19:40:51 by paul             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pushswap.aout
CC = gcc
FLAGS = -Wall -Wextra -Werror
LIBFT = libft/libft.a
BLUE = \\033[1;34m
WHITE = \\033[0;37m
YELLOW = \\033[0;33m
RED = \\033[1;31m
GREEN = \\033[1;32m
BRWN = \\033[0; 33m

SRC = ft_lst.c ft_lst2.c ft_lst3.c main.c ft_treat_input.c ft_utils.c \
ft_utils2.c ft_algorithm.c ft_treat_input2.c

all : header
	@make -C libft/
	$(CC) $(FLAGS) $(SRC) $(LIBFT) -o $(NAME)
	./$(NAME) 164 1664 1157 1824 1812

fclean :
	rm -f $(NAME)
	@make fclean -C libft/

re : fclean all

header :
	@echo "${GREEN}"
	@echo "			   __________"
	@echo "			 . ---------- ."
	@echo "		 	 | .--------. |"
	@echo "			 | | ${BLUE}COMPILE${GREEN}| |       __________       ___"
	@echo "			 | | ${BLUE}FILE${GREEN}   | |      /__________\\    {~._.~}"  
	@echo "		.--------|  --------  |------|    --=-- |-----( Y )---."
	@echo "		|         ----,-.-----       |o ======  |    ()~*~()  | "
	@echo "		|       ______|_|_______     |__________|    (_)-(_)  | "
	@echo "		|      /  %%%%%%%%%%%%  \\                             | "
	@echo "		|     /  %%%%%%%%%%%%%%  \\                            | "
	@echo "		|     ^^^^^^^^^^^^^^^^^^^^                            | "
	@echo "		+-----------------------------------------------------+"
	@echo "		^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ "
	@echo "${BLUE}"
	@echo "\n<------------COMPILING OBJECT------------>\n"
	@echo "${WHITE}"



.PHONY : fclean re all