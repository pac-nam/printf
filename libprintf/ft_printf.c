/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 13:56:12 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/11 15:50:40 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libprintf.h"
#include "header/function_array.h"

static int	ft_print_str(const char *format, int *index)
{
	int		i;

	i = ft_strlen_c(&format[*index], '%');
	write(1, &format[*index], i);
	*index += i;
	return (i);
}

int 		ft_printf(const char *format, ...)
{
	int			index;
	int			count;
	char		*str;
	va_list		ap;

	index = 0;
	count = 0;
	str = ft_strdup(format);
	va_start(ap, format);
	while (str[index])
	{
		if (str[index] == '%')
		{
			count += (ft_printf_tab[(int)str[index +
					ft_last_char(&str[index])]])(&str[index], ap);
			index = index + ft_last_char(&str[index]) + 1;
		}
		else
		{
			count += ft_print_str(str, &index);
		}
	}
	ft_strdel(&str);
	va_end(ap);
	return (count);
}
