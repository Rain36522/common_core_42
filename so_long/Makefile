# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pudry <pudry@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 08:09:16 by pudry             #+#    #+#              #
#    Updated: 2023/11/02 19:19:26 by pudry            ###   ########.fr        #
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

#utils/ft_check_map.c utils/ft_stock_map.c
SRC = test.c utils/ft_check_map.c utils/ft_stock_map.c utils/ft_image.c \
	utils/ft_check_map2.c utils/ft_utils.c utils/ft_img_player.c \
	utils/ft_mouve_x.c utils/ft_mouve_y.c utils/ft_image2.c utils/ft_check_map_error.c
GNL = gnl/get_next_line.c gnl/get_next_line_utils.c

# $(GNL:.c=.o)
OBJ = $(SRC:.c=.o) $(GNL:.c=.o)

all : header lib $(NAME)
	./$(NAME) ./map/map2.ber

leaks : header lib $(NAME)
	leaks --atExit -- ./$(NAME)

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
	@$(CC) $(CFLAGS) -c $(SRC) $(GNL)

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



.PHONY : fclean re all header clean cnt check leak map