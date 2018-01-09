# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 10:34:52 by tbleuse           #+#    #+#              #
#    Updated: 2018/01/05 11:11:44 by tbleuse          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

FLAGS = -Wall -Wextra -Werror

POINT_C = ft_atoi.c\
ft_bzero.c\
ft_isalnum.c\
ft_isalpha.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_itoa.c\
ft_lstadd.c\
ft_lstdel.c\
ft_lstdelone.c\
ft_lstiter.c\
ft_lstmap.c\
ft_lstnew.c\
ft_memalloc.c\
ft_memccpy.c\
ft_memchr.c\
ft_memcmp.c\
ft_memcpy.c\
ft_memdel.c\
ft_memmove.c\
ft_memset.c\
ft_realloc.c\
ft_putchar.c\
ft_putchar_fd.c\
ft_putendl.c\
ft_put_special_endl.c\
ft_putendl_fd.c\
ft_putnbr.c\
ft_putnbr_n.c\
ft_putnbr_fd.c\
ft_putstr.c\
ft_putstr_fd.c\
ft_strcat.c\
ft_strchr.c\
ft_strclr.c\
ft_strcmp.c\
ft_strcpy.c\
ft_strdel.c\
ft_strdup.c\
ft_strequ.c\
ft_striter.c\
ft_striteri.c\
ft_strjoin.c\
ft_strlcat.c\
ft_strlen.c\
ft_strlen_c.c\
ft_strmap.c\
ft_strmapi.c\
ft_strncat.c\
ft_strncmp.c\
ft_strncpy.c\
ft_strnequ.c\
ft_strnew.c\
ft_strnstr.c\
ft_strrchr.c\
ft_strsplit.c\
ft_strstr.c\
ft_strsub.c\
ft_strtrim.c\
ft_tolower.c\
ft_toupper.c\
ft_swap.c\
ft_sqrt.c\
ft_lstsize.c\
ft_lstrev.c\
ft_lstpushfront.c\
ft_lstpushback.c

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
