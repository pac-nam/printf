# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 10:34:52 by tbleuse           #+#    #+#              #
#    Updated: 2018/01/20 12:59:57 by tbleuse          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libftprintf

LIBFT = -L/libft -lft

MAKELIBFT = make -C libft/

FLAGS = -Wall -Wextra -Werror

POINT_C = ft_printf.c\
		  ft_m_count.c\
		  ft_last_char.c\
		  ft_take_infos.c\
		  ft_lltoa.c\
		  ft_ulltoa_base.c\
		  ft_addncharbefore.c\
		  ft_printnchar.c\
	  printf_functions/ft_printf_s.c\
	  printf_functions/ft_printf_di.c\
	  printf_functions/ft_printf_o.c\
	  printf_functions/ft_printf_u.c\
	  printf_functions/ft_printf_p.c\
	  printf_functions/ft_printf_ms.c\
	  printf_functions/ft_printf_md.c\
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
	  printf_functions/ft_printf_momu.c\
	  printf_functions/ft_printf_ouxmx.c\
	  printf_functions/ft_printf_error.c\
	  printf_functions/ft_printf_modulo.c\

POINT_O = $(POINT_C:.c=.o)

all : $(LIBFT) $(NAME)

$(LIBFT) :
	$(MAKELIBFT) all

$(NAME) : $(POINT_O) $(NAME).a

%.a: $(POINT_O)
	ar rc $(NAME).a $(POINT_O)
	ranlib $(NAME).a

%.o: %.c
	$(CC) -c $(FLAGS) $< -o $@

clean :
	/bin/rm -f $(POINT_O)
	$(MAKELIBFT) clean

fclean : clean
	/bin/rm -f $(NAME).a
	$(MAKELIBFT) fclean

lib : all clean

re : fclean all

.PHONY : all clean fclean re

coffee:
	@clear
	@echo ""
	@echo "                   ("
	@echo "                      )     ("
	@echo "               ___...(-------)-....___"
	@echo '           .-""       )    (          ""-.'
	@echo "      .-''''|-._             )         _.-|"
	@echo '     /  .--.|   `""---...........---""`   |'
	@echo "    /  /    |                             |"
	@echo "    |  |    |                             |"
	@echo "     \  \   |                             |"
	@echo "      '\ '\ |                             |"
	@echo "        '\ '|                             |"
	@echo "        _/ /\                             /"
	@echo "       (__/  \                           /"
	@echo '    _..---""` \                         /`""---.._'
	@echo " .-'           \                       /          '-."
	@echo ":               '-.__             __.-'              :"
	@echo ':                  ) ""---...---"" (                :'
	@echo "\'._                '"--...___...--"'              _.'"
	@echo '   \""--..__                              __..--""/'
	@echo "     '._     """----.....______.....----"""         _.'"
	@echo '         ""--..,,_____            _____,,..--"""'''
	@echo '                      """------"""'
	@sleep 0.5
	@clear
	@echo ""
	@echo "                 ("
	@echo "                   )      ("
	@echo "               ___..(.------)--....___"
	@echo '           .-""       )   (           ""-.'
	@echo "      .-''''|-._      (       )        _.-|"
	@echo '     /  .--.|   `""---...........---""`   |'
	@echo "    /  /    |                             |"
	@echo "    |  |    |                             |"
	@echo "     \  \   |                             |"
	@echo "      '\ '\ |                             |"
	@echo "        '\ '|                             |"
	@echo "        _/ /\                             /"
	@echo "       (__/  \                           /"
	@echo '    _..---""` \                         /`""---.._'
	@echo " .-'           \                       /          '-."
	@echo ":               '-.__             __.-'              :"
	@echo ':                  ) ""---...---"" (                :'
	@echo "\'._                '"--...___...--"'              _.'"
	@echo '   \""--..__                              __..--""/'
	@echo "     '._     """----.....______.....----"""         _.'"
	@echo '         ""--..,,_____            _____,,..--"""'''
	@echo '                      """------"""'
	@sleep 0.5
	@clear
	@echo ""
	@echo "               ("
	@echo "                   )     ("
	@echo "               ___..(.------)--....___"
	@echo '           .-""      )    (           ""-.'
	@echo "      .-''''|-._      (       )        _.-|"
	@echo '     /  .--.|   `""---...........---""`   |'
	@echo "    /  /    |                             |"
	@echo "    |  |    |                             |"
	@echo "     \  \   |                             |"
	@echo "      '\ '\ |                             |"
	@echo "        '\ '|                             |"
	@echo "        _/ /\                             /"
	@echo "       (__/  \                           /"
	@echo '    _..---""` \                         /`""---.._'
	@echo " .-'           \                       /          '-."
	@echo ":               '-.__             __.-'              :"
	@echo ':                  ) ""---...---"" (                :'
	@echo "\'._                '"--...___...--"'              _.'"
	@echo '   \""--..__                              __..--""/'
	@echo "     '._     """----.....______.....----"""         _.'"
	@echo '         ""--..,,_____            _____,,..--"""'''
	@echo '                      """------"""'
	@sleep 0.5
	@clear
	@echo ""
	@echo "             (         ) "
	@echo "               )        ("
	@echo "               ___)...----)----....___"
	@echo '           .-""      )    (           ""-.'
	@echo "      .-''''|-._      (       )        _.-|"
	@echo '     /  .--.|   `""---...........---""`   |'
	@echo "    /  /    |                             |"
	@echo "    |  |    |                             |"
	@echo "     \  \   |                             |"
	@echo "      '\ '\ |                             |"
	@echo "        '\ '|                             |"
	@echo "        _/ /\                             /"
	@echo "       (__/  \                           /"
	@echo '    _..---""` \                         /`""---.._'
	@echo " .-'           \                       /          '-."
	@echo ":               '-.__             __.-'              :"
	@echo ':                  ) ""---...---"" (                :'
	@echo "\'._                '"--...___...--"'              _.'"
	@echo '   \""--..__                              __..--""/'
	@echo "     '._     """----.....______.....----"""         _.'"
	@echo '         ""--..,,_____            _____,,..--"""'''
	@echo '                      """------"""'
