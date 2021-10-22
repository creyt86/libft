# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/21 13:25:05 by creyt             #+#    #+#              #
#    Updated: 2021/10/22 10:10:24 by creyt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEAD = libft.h
FLAGS = -Werror -Wextra -Wall
SRC = ft_bzero.c ft_isalnum.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	  ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	  ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c \
	  ft_strlen.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c

OBJ = $(SRC:%.c=%.o)

$(NAME):
		@gcc $(FLAGS) $(OPTION) $(SRC)
		@ar $(NAME) $(OBJ)

all: $(NAME)

clean:
		@rm $(OBJ)

fclean : clean
		@rm $(NAME)

re: fclean all
