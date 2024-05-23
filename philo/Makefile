# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pudry <pudry@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 09:01:54 by pudry             #+#    #+#              #
#    Updated: 2023/12/14 14:29:30 by pudry            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo
CC = GCC
FLAGS = -Wall -Wextra -Werror -fsanitize=address

SRC = ft_input.c ft_utils.c gen_philo.c main.c philos.c philos_action.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

.c.o:
	$(CC) $(FLAGS) -c -o $@ $<

$(NAME) : $(OBJ)
	$(CC) $(OBJ) $(FLAGS) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean clean all

gen_obj :
	$(CC) $(FLAGS) -c $(SRC)

push :
	git add *
	git commit -m "auto push"
	git push

.PHONY : clean fclean re all
