# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pudry <pudry@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 09:01:54 by pudry             #+#    #+#              #
#    Updated: 2023/11/06 20:44:03 by pudry            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_CLT = client
NAME_SRV = serveur
CC = gcc
FLAGS = -Wall -Wextra -Werror
LIBFT = libft/libft.a
PRINTF = printf/libftprintf.a

BLUE = \\033[1;34m
WHITE = \\033[0;37m
YELLOW = \\033[0;33m
RED = \\033[1;31m
GREEN = \\033[1;32m
BRWN = \\033[0; 33m

SRC_SRV = ft_serv.c
SRC_CLT = ft_client.c ft_utils.c

OBJ_SRV = $(SRC_SRV:.c=.o)
OBJ_CLT = $(SRC_CLT:.c=.o)

all : header gen_obj
	@make -C libft/
	@$(CC) $(FLAGS) $(OBJ_SRV) $(LIBFT) -o $(NAME_SRV)
	@$(CC) $(FLAGS) $(OBJ_CLT) $(LIBFT) -o $(NAME_CLT)

gen_obj:
	@$(CC) $(CFLAGS) -c $(SRC_CLT) $(SRC_SRV)

clt : header gen_obj
	@make -C libft/
	@$(CC) $(FLAGS) $(OBJ_CLT) $(LIBFT) -o $(NAME_CLT)


srv : header gen_obj
	@make -C libft/
	@$(CC) $(FLAGS) $(OBJ_SRV) $(LIBFT) -o $(NAME_SRV)
	./$(NAME_SRV)


clean :
	@rm -f $(OBJ_CLT) $(OBJ_SRV)
	@make clean -C libft/
	@make clean -C printf/

fclean : clean
	@rm -f $(NAME_CLT) $(NAME_SRV) 
	@make fclean -C libft/
	@make clean -C printf/

re : fclean all

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