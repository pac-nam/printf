# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 10:34:52 by tbleuse           #+#    #+#              #
#    Updated: 2018/02/21 11:26:08 by tbleuse          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = test_printf

PATH = ../

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :
	@MAKE -C $(PATH)
	@$(CC) $(FLAGS) -o $(NAME) main_printf.c -L./$(PATH) -lftprintf

test :
	@$(CC) $(FLAGS) -o $(NAME) main_printf.c -L./$(PATH) -lftprintf
	@./$(NAME)
	@rm -f $(NAME)

clean :
	@MAKE clean -C $(PATH)

fclean :
	@MAKE fclean -C $(PATH)
	@rm -f $(NAME)

lib : all clean

re : fclean all
