/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:48:06 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/11 17:20:25 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libprintf.h"

static int	ft_printf_s_length(char *format)
{
	int			i;

	i = 0;
	while (format[i] != 's' && format[i] != '.' && (!ft_isdigit(format[i])))
		i++;
	if (ft_isdigit(format[i]))
		return (ft_atoi(&format[i]));
	return (0);
}

static int	ft_printf_s_precision(char *format, char *str)
{
	int			i;

	i = 0;
	while (format[i] != 's' && format[i] != '.')
		i++;
	if (format[i] == '.')
		return (ft_atoi(&format[i + 1]));
	return (ft_strlen(str));
}

int			ft_printf_s(char *format, va_list ap)
{
	char		*str;
	int			length;
	int			precision;

	str = va_arg(ap, char*);
	length = ft_printf_s_length(format);
	precision = ft_printf_s_precision(format, str);
	if (format[1] == '-')
	{
		write(1, str, precision);
		while (precision < length--)
			ft_putchar (' ');
	}
	else
	{
		while (precision < length--)
			ft_putchar (' ');
		write(1, str, precision);
	}
	return ((int)ft_strlen(str) + precision);
}
