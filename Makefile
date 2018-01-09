# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 10:34:52 by tbleuse           #+#    #+#              #
#    Updated: 2018/01/09 15:35:50 by tbleuse          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = test_printf

LIB = libprintf

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :
	MAKE -C $(LIB)
	$(CC) $(FLAGS) -o $(NAME) main_printf.c -L./$(LIB) -lprintf

clean :
	MAKE clean -C $(LIB)

fclean :
	MAKE fclean -C $(LIB)
	rm -f $(NAME)

lib : all clean

re : fclean all
