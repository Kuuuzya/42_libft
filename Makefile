# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skuznets <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 23:51:17 by skuznets          #+#    #+#              #
#    Updated: 2024/01/15 23:58:21 by skuznets         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft.a
AR = ar rc
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c
OBJ = $(SRC:.c=.o)
INC = libft.h

all: $(NAME)
clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re