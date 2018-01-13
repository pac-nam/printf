/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_infos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:37:11 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/13 15:55:35 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libprintf.h"

static int		ft_printf_infos_z_len_pre(int **info, char *str, int max)
{
	int			i;

	i = 0;
	while (ft_isdigit(str[i]) && str[i] != '.' && str[i] != 'h' &&
			str[i] != 'l' && str[i] != 'j' && str[i] != 'z' && i < max)
		i++;
	if (str[i] == '0')
		(*info)[1] = 1;
	i = 0;
	while (str[i] == '0' || (!ft_isdigit(str[i]) && str[i] != '.' &&
			str[i] != 'h' && str[i] != 'l' && str[i] != 'j' &&
			str[i] != 'z' && i < max))
		i++;
	if (ft_isdigit(str[i]))
		(*info)[5] = ft_atoi(&str[i]);
	i = 0;
	while (str[i] != '.' && str[i] != 'h' && str[i] != 'l' &&
			str[i] != 'j' && str[i] != 'z' && i < max)
		i++;
	if (str[i] == '.')
		(*info)[6] = (ft_atoi(&str[i + 1]));
	return (1);
}

static int		ft_printf_size(char *str, int max)
{
	int         i;

	i = 0;
	while (str[i] != 'h' && str[i] != 'l' &&
			str[i] != 'j' && str[i] != 'z' && i < max)
		i++;
	if (str[i] == 'h' && str[i] == 'h')
		return (1);
	if (str[i] == 'h')
		return (2);
	if (str[i] == 'l' && str[i] == 'l')
		return (3);
	if (str[i] == 'l')
		return (4);
	if (str[i] == 'j')
		return (5);
	if (str[i] == 'z')
		return (6);
	return (0);
}

static int      ft_printf_second_type(char c)
{
	if (c == 'C')
		return (13);
	if (c == 'e')
		return (14);
	if (c == 'E')
		return (15);
	if (c == 'f' || c == 'i')
		return (16);
	if (c == 'F')
		return (17);
	if (c == 'g')
		return (18);
	if (c == 'G')
		return (19);
	if (c == 'a')
		return (20);
	if (c == 'A')
		return (21);
	if (c == 'n')
		return (22);
	if (c == '%')
		return (23);
	return (0);
}

static int		ft_printf_type(char c)
{
	if (c == 's')
		return (1);
	if (c == 'd' || c == 'i')
		return (2);
	if (c == 'p')
		return (3);
	if (c == 'S')
		return (4);
	if (c == 'D')
		return (5);
	if (c == 'o')
		return (6);
	if (c == 'O')
		return (7);
	if (c == 'u')
		return (8);
	if (c == 'U')
		return (9);
	if (c == 'x')
		return (10);
	if (c == 'X')
		return (11);
	if (c == 'c')
		return (12);
	return (ft_printf_second_type(c));
}

void			ft_take_infos(char *format, int **info)
{
	int				i;
	int				max;

	i = 0;
	max = ft_last_char_index(format);
	while (i < 8)
		(*info)[i++] = -1;
	if (ft_strnstr(format, "#", max))
		(*info)[0] = 1;
	if (ft_strnstr(format, "-", max))
		(*info)[2] = 1;
	if (ft_strnstr(format, "+", max))
		(*info)[3] = 1;
	ft_printf_infos_z_len_pre(info, format, max);
	(*info)[7] = ft_printf_size(format, max);
	(*info)[8] = ft_printf_type(format[max]);
	if ((*info)[2] != -1 || (*info)[6] != -1)
		(*info)[1] = -1;
	if ((*info)[3] != -1)
		(*info)[4] = -1;
}
