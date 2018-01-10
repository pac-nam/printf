/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 13:56:12 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/10 12:50:21 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static int	ft_print_str(const char *format, int *index)
{
	int		i;

	i = ft_strlen_c(&format[*index], '%');
	write(1, &format[*index], i);
	*index += i + 1;
	return (i);
}

int 		ft_printf(const char *format, ...)
{
	int			index;
	int			count;
	va_list		ap;

	index = 0;
	va_start(ap, format)
	while (format[index])
	{
		if (format[index] == '%')
		{
			count += ft_sprade(format, &index, va)
		}
		else
		{
			count += ft_print_str(format, &index);
		}
	}
	va_end(ap);
	return (count);
}
