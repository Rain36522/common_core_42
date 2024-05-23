# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pudry <pudry@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/07 14:20:57 by pudry             #+#    #+#              #
#    Updated: 2024/01/10 14:15:11 by pudry            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


FLAGS = -pedantic -std=c++98 -Wall -Wextra -Werror
NAME = FlagTrap
CC = c++

SRC = ClapTrap.cpp SclavTrap.cpp FragTrap.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

.c.o:
	$(CC) -c -o $@ $< $(FLAGS)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAGS) -o $(NAME)

clean :
	rm $(OBJ)

fclean : clean
	rm $(NAME)

re : fclean all

.PHONY : all clean fclean re

