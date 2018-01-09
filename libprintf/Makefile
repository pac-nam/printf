# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 10:34:52 by tbleuse           #+#    #+#              #
#    Updated: 2018/01/09 15:26:52 by tbleuse          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libprintf

FLAGS = -Wall -Wextra -Werror

POINT_C = ft_printf.c\
		  ft_m_count.c\

POINT_O = $(POINT_C:.c=.o)

all : $(NAME)

$(NAME) : $(POINT_O) $(NAME).a

%.a: $(POINT_O)
	ar rc $(NAME).a $(POINT_O)
	ranlib $(NAME).a

%.o: %.c
	gcc -c $(FLAGS) $< -o $@

clean :
	/bin/rm -f $(POINT_O)

fclean : clean
	/bin/rm -f $(NAME).a

lib : all clean

re : fclean all
