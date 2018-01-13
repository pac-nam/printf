/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 13:56:12 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/13 13:18:12 by tbleuse          ###   ########.fr       */
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

/*
**0|1|2|3|4|   5  |    6    |  7 |  8 |
**#|0|-|+| |length|precision|size|type|
*/

int 		ft_printf(const char *format, ...)
{
	int			i;
	int			count;
	int			*infos;
	char		*str;
	va_list		ap;

	i = 0;
	count = 0;
	if (!(infos = (int*)malloc(sizeof(int) * 9)))
		return (0);
	str = ft_strdup(format);
	va_start(ap, format);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_take_infos(&str[i], &infos);
			count += (ft_printf_tab[infos[8]])(ap, infos);
			i = i + ft_last_char_index(&str[i]) + 1;
		}
		else
		{
			count += ft_print_str(str, &i);
		}
	}
	ft_memdel((void**)&infos);
	ft_strdel(&str);
	va_end(ap);
	return (count);
}
