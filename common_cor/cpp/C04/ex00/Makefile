# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pudry <pudry@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/10 14:34:15 by pudry             #+#    #+#              #
#    Updated: 2024/01/10 16:41:51 by pudry            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



FLAGS = -pedantic -std=c++98 -Wall -Wextra -Werror
NAME = animal
CC = c++

SRC = Dog.cpp Cat.cpp Animal.cpp main.cpp WrongAnimal.cpp WrongCat.cpp

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

