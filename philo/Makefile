# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pudry <pudry@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 09:01:54 by pudry             #+#    #+#              #
#    Updated: 2023/12/09 18:39:07 by pudry            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo
CC = GCC
FLAGS = -Wall -Wextra -Werror

all : gen_obj $(NAME)

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
