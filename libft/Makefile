# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pudry <pudry@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 11:40:33 by paul              #+#    #+#              #
#    Updated: 2024/06/13 18:13:50 by pudry            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RESET = \\033[0m
GREEN = \\033[1;32m
BLUE = \033[1;34m
INCLUDES = includes/

# compilateur
CC = gcc
# flags du compilateur
CFLAGS = -Wall -Wextra -Werror
# name du fichier / dossier retourné
NAME = libft.a

# source : nom des fichiers
SRC = $(wildcard src/*.c)

# Reprise des noms du fichier et remplacement du .c en .o
OBJ = $(SRC:src/%.c=objet/%.o)

# cette ligne dit comment générer le fichier name avec les objets
# c'est une fonction.

# fonction pour générer le fichier Libft.a
all: $(NAME)
	@echo "${GREEN}Libft compilation success"
	@echo "${BLUE}-I $(PWD)/includes -L $(PWD)/$(NAME) -lft"
	@echo "for header and librairie${RESET}"
	@echo "#include \"libft.h\""

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

# fonction nettoyage fichier objet
clean:
	@rm -f $(OBJ)
	@echo "${GREEN}Libft clean${RESET}"

# nettoyage fichier objet + delete libft.a
fclean: clean
	@rm -f $(NAME)
	@echo "${GREEN}Libft fclean${RESET}"

# delete all file et compile again
re: fclean all

# règle implicite pour compiler .c en .o
objet/%.o: src/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDES)

# Ligne pour éviter que ces fonctions puissent être considérées comme fichier
.PHONY: clean fclean all re
