# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pudry <pudry@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 09:37:59 by pudry             #+#    #+#              #
#    Updated: 2024/02/16 13:02:34 by pudry            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -pedantic -std=c++98 -Wall -Wextra -Werror
NAME = PmergeMe
CC = c++

SRC = main.cpp vector_solve.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)
	./PmergeMe 1 3 2

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
