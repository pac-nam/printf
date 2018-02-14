/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 13:56:12 by tbleuse           #+#    #+#             */
/*   Updated: 2018/02/14 16:06:54 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"
#include "../header/function_array.h"
#include "../header/bonus_printf.h"

static int	ft_print_str(const char *format, int *index)
{
	int		i;

	i = ft_strlen_c(&format[*index], '%');
	write(1, &format[*index], i);
	*index += i;
	return (i);
}

static void	ft_printf_function_array(int(*((*f)[]))(va_list, int*))
{
	(*f)[0] = &ft_printf_s;
	(*f)[1] = &ft_printf_di;
	(*f)[2] = &ft_printf_ouxmx;
	(*f)[3] = &ft_printf_ms;
	(*f)[4] = &ft_printf_md;
	(*f)[5] = &ft_printf_p;
	(*f)[6] = &ft_printf_momu;
	(*f)[7] = &ft_printf_c;
	(*f)[8] = &ft_printf_mc;
	(*f)[9] = &ft_printf_e;
	(*f)[10] = &ft_printf_me;
	(*f)[11] = &ft_printf_f;
	(*f)[12] = &ft_printf_mf;
	(*f)[13] = &ft_printf_g;
	(*f)[14] = &ft_printf_mg;
	(*f)[15] = &ft_printf_a;
	(*f)[16] = &ft_printf_ma;
}

/*
**0|1|2|3|4|   5  |    6    |  7 |  8 |  9 |
**#|0|-|+| |length|precision|size|type|char|
*/

static int	ft_printf_next(char *str, va_list ap, int *count)
{
	int			*info;
	int			(*ft_printf_tab[17])(va_list, int*);

	if (!(info = (int*)malloc(sizeof(int) * 10)))
		return (0);
	ft_printf_function_array(&ft_printf_tab);
	ft_take_infos(str, &info);
	if (info[9] == '%')
		return (*count += ft_printf_modulo(&info));
	if (info[9] == 'n')
		return (ft_printf_n(ap, *count));
	if (info[9] != '\0')
		*count += (ft_printf_tab[info[8]])(ap, info);
	ft_memdel((void**)&info);
	return (1);
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
			ft_printf_next(&str[i], ap, &count);
			i = i + ft_last_char_index(&str[i]) + 1;
		}
		else
			count += ft_print_str(str, &i);
	}
	ft_strdel(&str);
	va_end(ap);
	return (count);
}
