# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pudry <pudry@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 09:37:59 by pudry             #+#    #+#              #
#    Updated: 2024/02/16 18:03:10 by pudry            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -pedantic -std=c++98 -Wall -Wextra -Werror
NAME = PmergeMe
CC = c++
INPUT = 3 99 37 94 76 77 17 46 53 84 

SRC = main.cpp vector_solve.cpp deque_solve.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)
	./PmergeMe $(INPUT)

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
