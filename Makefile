# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbenzzin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/29 03:37:04 by hbenzzin          #+#    #+#              #
#    Updated: 2021/12/29 05:18:15 by hbenzzin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC = ft_printf.c \
	  ft_putstr.c \
	  ft_putchar.c \
	  ft_putnbr.c \
	  ft_unsigned.c \
	  ft_pointeur.c \
	  ft_convert.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ) ft_printf.h
	ar rc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< 

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re : fclean all
