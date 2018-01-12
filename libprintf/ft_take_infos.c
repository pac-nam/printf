/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_infos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:37:11 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/12 17:54:36 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libprintf.h"

static int		ft_printf_infos_z_len_pre(t_printf **infos, char *str, int max)
{
	int			i;

	i = 0;
	while (ft_isdigit(str[i]) && str[i] != '.' && str[i] != 'h' &&
			str[i] != 'l' && str[i] != 'j' && str[i] != 'z' && i < max)
		i++;
	if (str[i] == '0')
		(*infos)->zero = 0;
	i = 0;
	while ((str[i] <= '1' || str[i] >= '9') && str[i] != '.' &&
			str[i] != 'h' && str[i] != 'l' && str[i] != 'j' &&
			str[i] != 'z' && i < max)
		i++;
	if (ft_isdigit(str[i]))
		(*infos)->length = ft_atoi(&str[i]);
	i = 0;
	while (str[i] != '.' && str[i] != 'h' && str[i] != 'l' &&
			str[i] != 'j' && str[i] != 'z' && i < max)
		i++;
	if (str[i] == '.')
		(*infos)->precision = (ft_atoi(&str[i + 1]));
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
	if (c == 'S')
		return (2);
	if (c == 'p')
		return (3);
	if (c == 'd' || c == 'i')
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

int				ft_take_info(char *format, t_printf **infos)
{
	int				max;

	if (*infos != NULL)
		free(infos);
	if (!(*infos = (t_printf*)malloc(sizeof(t_printf*))))
		return (0);
	max = ft_last_char_index(format);
	(*infos)->hash = 0;
	(*infos)->zero = 0;
	(*infos)->minus = 0;
	(*infos)->plus = 0;
	(*infos)->length = -1;
	(*infos)->precision = -1;
	(*infos)->size = ft_printf_size(format, max);
	if (ft_strnstr(format, "#", max))
		(*infos)->hash = 1;
	if (ft_strnstr(format, "-", max))
		(*infos)->minus = 1;
	if (ft_strnstr(format, "+", max))
		(*infos)->plus = 1;
	ft_printf_infos_z_len_pre(infos, format, max);
	(*infos)->type = ft_printf_type(format[max]);
	return (1);
}
