# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skuznets <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 23:51:17 by skuznets          #+#    #+#              #
#    Updated: 2024/01/16 09:31:53 by skuznets         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c ft_bzero.c
OBJS = $(SRC:.c=.o)
NAME = libft.a
AR = ar rc
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus