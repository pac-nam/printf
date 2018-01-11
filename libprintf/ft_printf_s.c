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

int	ft_printf_s(char *format, va_list ap, int length, int precision)
{
	char		*str;

	str = va_arg(ap, char*);
	if (precision == -1)
		precision = ft_strlen(str);
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
