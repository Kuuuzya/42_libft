# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skuznets <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 23:51:17 by skuznets          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2024/01/17 17:30:55 by skuznets         ###   ########.fr        #
=======
#    Updated: 2024/01/16 09:31:53 by skuznets         ###   ########.fr        #
>>>>>>> 25512b9b5ddb42f07d62ab5b0aa219ecd7325172
#                                                                              #
# **************************************************************************** #

SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c ft_bzero.c
OBJS = $(SRC:.c=.o)
NAME = libft.a
AR = ar rc
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
<<<<<<< HEAD
SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c ft_strrchr.c ft_strchr.c
OBJ = $(SRC:.c=.o)
INC = libft.h
=======
>>>>>>> 25512b9b5ddb42f07d62ab5b0aa219ecd7325172

all: $(NAME)
$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus