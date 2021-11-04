# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: creyt <marvin@42lausanne.ch>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/21 13:25:05 by creyt             #+#    #+#              #
#    Updated: 2021/11/04 10:58:27 by creyt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEAD = libft.h
FLAGS = -Werror -Wextra -Wall
SRC = ft_atoi.c \
	  ft_bzero.c \
	  ft_calloc.c \
	  ft_isalnum.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_itoa.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_strchr.c \
	  ft_strdup.c \
	  ft_striteri.c \
	  ft_strjoin.c \
	  ft_strlcat.c \
	  ft_strlcpy.c \
	  ft_strlen.c \
	  ft_strmapi.c \
	  ft_strncmp.c \
	  ft_strnstr.c \
	  ft_strrchr.c \
	  ft_strtrim.c \
	  ft_substr.c \
	  ft_tolower.c \
	  ft_toupper.c

OBJ = $(SRC:%.c=%.o)

OPTION = -c

$(NAME):
		@gcc $(FLAGS) $(OPTION) $(SRC)
		@ar -rc  $(NAME) $(OBJ)

all: $(NAME)

clean:
		@rm -rf $(OBJ)

fclean : clean
		@rm -rf $(NAME)

re: fclean all
