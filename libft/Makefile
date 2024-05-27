# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pudry <pudry@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 11:40:33 by paul              #+#    #+#              #
#    Updated: 2024/05/27 13:26:00 by pudry            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RESET = \\033[0m
GREEN = \\033[1;32m

INCLUDES = includes/

# compilateur
CC = gcc
# flags du compilateur
CFLAGS = -Wall -Wextra -Werror
# name du fichier / dossier retourné
NAME = libft.a

# source : nom des fichiers
SRC1 = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
	ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
	ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
	ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
	ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

# Reprise des noms du fichier et remplacement du .c en .o
OBJ1 = $(SRC1:.c=.o)

SRC = $(addprefix src/, $(SRC1))
OBJ = $(addprefix objet/, $(OBJ1))

SRC_bonus1 = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			ft_lstmap.c

OBJ_bonus1 = $(SRC_bonus1:.c=.o)
OBJ_bonus = $(addprefix objet/, $(OBJ_bonus1))

# cette ligne dit comment générer le fichier name avec les objets
# c'est une fonction.

# fonction pour générer le fichier Libft.a
all: $(NAME)
	@echo "${GREEN}Libft compilation success${RESET}"

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

# bonus: $(OBJ_bonus)
# 	@ar rcs $(NAME) $(OBJ_bonus)

# fonction nettoyage fichier objet
clean:
	@rm -f $(OBJ) $(OBJ_bonus)
	@echo "${GREEN}Libft clean${RESET}"

# nettoyage fichier objet + delete libft.a
fclean: clean
	@rm -f $(NAME)
	@echo "${GREEN}Libft fclean${RESET}"

# delete all file et compile again
re: fclean all

# règle implicite pour compiler .c en .o
objet/%.o: src/%.c
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDES)

# Ligne pour éviter que ces fonctions puissent être considérées comme fichier
.PHONY: clean fclean all re bonus
