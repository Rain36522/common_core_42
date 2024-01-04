
FLAGS = -std=c++98 -Wall -Wextra -Werror
NAME = megaphone
CC = c++

SRC = megaphone.cpp

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

