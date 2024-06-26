# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pudry <pudry@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 08:09:16 by pudry             #+#    #+#              #
#    Updated: 2023/11/03 12:23:55 by pudry            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = gcc
FLAGS = -Wall -Wextra -Werror
LIBFT = libft/libft.a
PRINTF = printf/libftprintf.a

MLX = mlx/libmlx.a
INCLUDES = -I/opt/X11/include -Imlx
MLX_FLAGS = -Lmlx -lmlx -framework OpenGL -framework AppKit


BLUE = \\033[1;34m
WHITE = \\033[0;37m
YELLOW = \\033[0;33m
RED = \\033[1;31m
GREEN = \\033[1;32m
BRWN = \\033[0; 33m
GREY = \\033[1;30m

#utils/ft_check_map.c utils/ft_stock_map.c
SRC = src/ft_mouve_x.c src/ft_mouve_y.c src/ft_stock_map.c src/main.c
UTIL = utils/ft_check_map.c utils/ft_check_map2.c utils/ft_check_map_error.c \
	utils/ft_image.c utils/ft_image2.c utils/ft_img_player.c utils/ft_utils.c
GNL = gnl/get_next_line.c gnl/get_next_line_utils.c

# $(GNL:.c=.o)
OBJ = $(SRC:.c=.o) $(GNL:.c=.o) $(UTIL:.c=.o)

all : lib $(NAME) header

.c.o:
	$(CC) $(FLAGS) -c -o $@ $< $(INCLUDES)
	
$(NAME): $(OBJ)
	$(CC) $(OBJ) $(MLX_FLAGS) $(PRINTF) $(LIBFT) -o $(NAME)

lib :
	@make -C libft/
	@make -C printf/
	@make -C mlx/

clean :
	@rm -f $(OBJ)
	@make clean -C libft/
	@make clean -C printf/
	@make clean -C mlx/

fclean : clean
	@rm -f $(NAME)
	@make fclean -C libft/
	@make fclean -C printf/

re : fclean all

gen_obj :
	@$(CC) $(CFLAGS) -c $(SRC) $(GNL) $(SRC)

header :
	@echo "	      .-~~~-.        ${GREY}||${BLUE}::::::${RED}==========${WHITE}"
	@echo "	     /= ___  \       ${GREY}||${BLUE}::::::${WHITE}=========="
	@echo "	    |- /~~~\  |      ${GREY}||${BLUE}::::::${RED}==========${WHITE}"
	@echo "	    |=( ^.^ ) |      ${GREY}||${WHITE}================"
	@echo "	    \__\_=_/__/      ${GREY}||${RED}================${WHITE}"
	@echo "	     {_______}       ${GREY}||${WHITE}================"
	@echo "	   /  *       ~ --._ ${GREY}||${WHITE}"
	@echo "	  /= .     [] .     |  >"
	@echo "	 /  /|ooo     |  --^ ${GREY}||${WHITE}"
	@echo "	(   )\_______/       ${GREY}||${WHITE}"
	@echo "	 \..\//       \      ${GREY}||${WHITE}"
	@echo "	  ^-| ==    \_|      ${GREY}||${WHITE}"
	@echo "	    /         |      ${GREY}||${WHITE}"
	@echo "	   |=   >\  __/      ${GREY}||${WHITE}"
	@echo "	   \   \ |- --|      ${GREY}||${WHITE}"
	@echo "	    \ __| \___/      ${GREY}||${WHITE}"
	@echo "	     [__] _[__]      ${GREY}||${WHITE}"
	@echo "	   (    )(    )      ${GREY}||${WHITE}"
	@echo "	^^~ ^^^^^  ^^^^  ~^^^~^^~~~^^^~^^^~^^^~^^~^"




.PHONY : fclean re all header clean cnt check leak map