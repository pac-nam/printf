# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 10:34:52 by tbleuse           #+#    #+#              #
#    Updated: 2018/01/17 16:48:00 by tbleuse          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libprintf

FLAGS = -Wall -Wextra -Werror

POINT_C = ft_printf.c\
		  ft_m_count.c\
		  ft_last_char.c\
		  ft_take_infos.c\
		  ft_lltoa.c\
		  ft_addncharbefore.c\
		  ft_printnchar.c\
	printf_functions/ft_printf_error.c\
	printf_functions/ft_printf_s.c\
	printf_functions/ft_printf_di.c\
	printf_functions/ft_printf_p.c\
	printf_functions/ft_printf_ms.c\
	printf_functions/ft_printf_md.c\
	printf_functions/ft_printf_o.c\
	printf_functions/ft_printf_mo.c\
	printf_functions/ft_printf_u.c\
	printf_functions/ft_printf_mu.c\
	printf_functions/ft_printf_x.c\
	printf_functions/ft_printf_mx.c\
	printf_functions/ft_printf_c.c\
	printf_functions/ft_printf_mc.c\
	printf_functions/ft_printf_e.c\
	printf_functions/ft_printf_me.c\
	printf_functions/ft_printf_f.c\
	printf_functions/ft_printf_mf.c\
	printf_functions/ft_printf_g.c\
	printf_functions/ft_printf_mg.c\
	printf_functions/ft_printf_a.c\
	printf_functions/ft_printf_ma.c\
	printf_functions/ft_printf_n.c\
	printf_functions/ft_printf_modulo.c\
	printf_functions/ft_printf_error.c\
libft_functions/ft_atoi.c\
libft_functions/ft_bzero.c\
libft_functions/ft_isalnum.c\
libft_functions/ft_isalpha.c\
libft_functions/ft_isascii.c\
libft_functions/ft_isdigit.c\
libft_functions/ft_isprint.c\
libft_functions/ft_itoa.c\
libft_functions/ft_memalloc.c\
libft_functions/ft_memccpy.c\
libft_functions/ft_memchr.c\
libft_functions/ft_memcmp.c\
libft_functions/ft_memcpy.c\
libft_functions/ft_memdel.c\
libft_functions/ft_memmove.c\
libft_functions/ft_memset.c\
libft_functions/ft_realloc.c\
libft_functions/ft_putchar.c\
libft_functions/ft_putendl.c\
libft_functions/ft_putnbr.c\
libft_functions/ft_putstr.c\
libft_functions/ft_strcat.c\
libft_functions/ft_strchr.c\
libft_functions/ft_strclr.c\
libft_functions/ft_strcmp.c\
libft_functions/ft_strcpy.c\
libft_functions/ft_strdel.c\
libft_functions/ft_strdup.c\
libft_functions/ft_strequ.c\
libft_functions/ft_striter.c\
libft_functions/ft_striteri.c\
libft_functions/ft_strjoin.c\
libft_functions/ft_strlcat.c\
libft_functions/ft_strlen.c\
libft_functions/ft_strlen_c.c\
libft_functions/ft_strmap.c\
libft_functions/ft_strmapi.c\
libft_functions/ft_strncat.c\
libft_functions/ft_strncmp.c\
libft_functions/ft_strncpy.c\
libft_functions/ft_strnequ.c\
libft_functions/ft_strnew.c\
libft_functions/ft_strnstr.c\
libft_functions/ft_strrchr.c\
libft_functions/ft_strsplit.c\
libft_functions/ft_strstr.c\
libft_functions/ft_strsub.c\
libft_functions/ft_strtrim.c\
libft_functions/ft_swap.c\

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
