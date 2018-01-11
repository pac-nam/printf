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

static int      ft_length(char *format)
{
        int                     i;

        i = 0;
        while (format[i] != 's' && format[i] != '.' && (!ft_isdigit(format[i])))
                i++;
        if (ft_isdigit(format[i]))
                return (ft_atoi(&format[i]));
        return (0);
}

static int      ft_precision(char *format)
{
        int                     i;

        i = 0;
        while (format[i] != 's' && format[i] != '.')
                i++;
        if (format[i] == '.')
                return (ft_atoi(&format[i + 1]));
        return (-1);
}

int 		ft_printf(const char *format, ...)
{
	int			i;
	int			count;
	char		*str;
	va_list		ap;

	i = 0;
	count = 0;
	str = ft_strdup(format);
	va_start(ap, format);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += (ft_printf_tab[(int)str[i + ft_last_char
			(&str[i])]])(&str[i], ap, ft_length(&str[i]),
			ft_precision(&str[i]));
			i = i + ft_last_char(&str[i]) + 1;
		}
		else
		{
			count += ft_print_str(str, &i);
		}
	}
	ft_strdel(&str);
	va_end(ap);
	return (count);
}
