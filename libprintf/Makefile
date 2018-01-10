# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 10:34:52 by tbleuse           #+#    #+#              #
#    Updated: 2018/01/10 16:41:13 by tbleuse          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libprintf

FLAGS = -Wall -Wextra -Werror

POINT_C = ft_printf.c\
		  ft_m_count.c\
		  ft_last_char.c\
		  ft_printf_modulo.c\
		  ft_printf_A.c\
		  ft_printf_C.c\
		  ft_printf_D.c\
		  ft_printf_E.c\
		  ft_printf_F.c\
		  ft_printf_G.c\
		  ft_printf_O.c\
		  ft_printf_S.c\
		  ft_printf_U.c\
		  ft_printf_X.c\
		  ft_printf_a.c\
		  ft_printf_c.c\
		  ft_printf_di.c\
		  ft_printf_e.c\
		  ft_printf_f.c\
		  ft_printf_g.c\
		  ft_printf_n.c\
		  ft_printf_o.c\
		  ft_printf_p.c\
		  ft_printf_s.c\
		  ft_printf_u.c\
		  ft_printf_x.c\

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
