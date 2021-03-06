# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 10:34:52 by tbleuse           #+#    #+#              #
#    Updated: 2018/02/21 11:43:44 by tbleuse          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libftprintf

TEST_NAME = test_printf

FLAGS = -Wall -Wextra -Werror

PRINTF_SRC_NAME = ft_printf.c	\
		ft_m_count.c			\
		ft_last_char.c			\
		ft_take_infos.c			\
		ft_lltoa.c				\
		ft_ulltoa_base.c		\
		ft_addncharbefore.c		\
		ft_printnchar.c			\
		ft_printf_s.c			\
		ft_printf_di.c			\
		ft_printf_o.c			\
		ft_printf_u.c			\
		ft_printf_p.c			\
		ft_printf_ms.c			\
		ft_printf_md.c			\
		ft_printf_x.c			\
		ft_printf_mx.c			\
		ft_printf_c.c			\
		ft_printf_mc.c			\
		ft_printf_n.c			\
		ft_printf_b.c			\
		ft_printf_momu.c		\
		ft_printf_bouxmx.c		\
		ft_printf_modulo.c		\
		ft_wchar_functions.c	\

LIBFT_SRC_NAME = ft_atoi.c		\
		ft_bzero.c				\
		ft_isalnum.c			\
		ft_isalpha.c			\
		ft_isascii.c			\
		ft_isdigit.c			\
		ft_isprint.c			\
		ft_itoa.c				\
		ft_lstadd.c				\
		ft_lstdel.c				\
		ft_lstdelone.c			\
		ft_lstiter.c			\
		ft_lstmap.c				\
		ft_lstnew.c				\
		ft_memalloc.c			\
		ft_memccpy.c			\
		ft_memchr.c				\
		ft_memcmp.c				\
		ft_memcpy.c				\
		ft_memdel.c				\
		ft_memmove.c			\
		ft_memset.c				\
		ft_realloc.c			\
		ft_putchar.c			\
		ft_putchar_fd.c			\
		ft_putendl.c			\
		ft_putendl_fd.c			\
		ft_putnbr.c				\
		ft_putnbr_n.c			\
		ft_putnbr_fd.c			\
		ft_putstr.c				\
		ft_putstr_fd.c			\
		ft_strcat.c				\
		ft_strchr.c				\
		ft_strclr.c				\
		ft_strcmp.c				\
		ft_strcpy.c				\
		ft_strdel.c				\
		ft_strdup.c				\
		ft_strequ.c				\
		ft_striter.c			\
		ft_striteri.c			\
		ft_strjoin.c			\
		ft_strlcat.c			\
		ft_strlen.c				\
		ft_strlen_c.c			\
		ft_strmap.c				\
		ft_strmapi.c			\
		ft_strncat.c			\
		ft_strncmp.c			\
		ft_strncpy.c			\
		ft_strnequ.c			\
		ft_strnew.c				\
		ft_strnstr.c			\
		ft_strrchr.c			\
		ft_strsplit.c			\
		ft_strstr.c				\
		ft_strsub.c				\
		ft_strtrim.c			\
		ft_tolower.c			\
		ft_toupper.c			\
		ft_swap.c				\
		ft_sqrt.c				\
		ft_lstsize.c			\
		ft_lstrev.c				\
		ft_lstpushback.c		\
		ft_gnl.c				\

PRINTF_SRC = $(addprefix printf_functions/, $(PRINTF_SRC_NAME))
LIBFT_SRC = $(addprefix libft/, $(LIBFT_SRC_NAME))

OBJ = $(LIBFT_SRC:.c=.o) $(PRINTF_SRC:.c=.o)

all : $(NAME) $(NAME).a

$(NAME) : $(OBJ)

%.a :
	@ar rc $(NAME).a $(OBJ)
	@ranlib $(NAME).a
	@echo "$(NAME) have been compiled"

%.o : %.c
	@$(CC) -c $(FLAGS) $< -o $@

clean :
	@/bin/rm -f $(OBJ)
	@echo "objects have been deleted"

fclean : clean
	@/bin/rm -f $(NAME).a
	@echo "$(NAME) have been deleted"

re : fclean all

test : all
	@$(CC) $(FLAGS) -o $(TEST_NAME) test_zone/main_printf.c $(NAME).a
	@./$(TEST_NAME)
	@rm -f $(TEST_NAME)

.PHONY : all clean fclean re
