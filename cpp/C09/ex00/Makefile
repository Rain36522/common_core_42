# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pudry <pudry@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 09:37:59 by pudry             #+#    #+#              #
#    Updated: 2024/01/29 10:26:04 by pudry            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -pedantic -std=c++98 -Wall -Wextra -Werror
NAME = btc
CC = c++

SRC = main.cpp Exchange.cpp

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
