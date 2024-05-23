# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pudry <pudry@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/07 14:20:57 by pudry             #+#    #+#              #
#    Updated: 2024/01/08 15:14:49 by pudry            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


FLAGS = -std=c++98 -Wall -Wextra -Werror
NAME = unnecessary_violence
CC = c++

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

.cpp.o:
	$(CC) -c -o $@ $< $(FLAGS)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(FLAGS) -o $(NAME)

clean :
	rm $(OBJ)

fclean : clean
	rm $(NAME)

re : fclean all

.PHONY : all clean fclean re

