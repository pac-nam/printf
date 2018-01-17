/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 13:56:12 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/17 15:29:19 by tbleuse          ###   ########.fr       */
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

static void	ft_printf_function_array(int(*((*f)[]))(va_list, int*))
{
	(*f)[0] = &ft_printf_s;
	(*f)[1] = &ft_printf_di;
	(*f)[2] = &ft_printf_p;
	(*f)[3] = &ft_printf_ms;
	(*f)[4] = &ft_printf_md;
	(*f)[5] = &ft_printf_o;
	(*f)[6] = &ft_printf_mo;
	(*f)[7] = &ft_printf_u;
	(*f)[8] = &ft_printf_mu;
	(*f)[9] = &ft_printf_x;
	(*f)[10] = &ft_printf_mx;
	(*f)[11] = &ft_printf_c;
	(*f)[12] = &ft_printf_mc;
	(*f)[13] = &ft_printf_e;
	(*f)[14] = &ft_printf_me;
	(*f)[15] = &ft_printf_f;
	(*f)[16] = &ft_printf_mf;
	(*f)[17] = &ft_printf_g;
	(*f)[18] = &ft_printf_mg;
	(*f)[19] = &ft_printf_a;
	(*f)[20] = &ft_printf_ma;
	(*f)[21] = &ft_printf_n;
	(*f)[22] = &ft_printf_modulo;
	(*f)[23] = &ft_printf_error;
}

/*
**0|1|2|3|4|   5  |    6    |  7 |  8 |
**#|0|-|+| |length|precision|size|type|
*/

static int	ft_printf_next(char *str, va_list ap)
{
	int			*info;
	int			count;
	int			(*ft_printf_tab[24])(va_list, int*);

	if (!(info = (int*)malloc(sizeof(int) * 9)))
		return (0);
	ft_printf_function_array(&ft_printf_tab);
	ft_take_infos(str, &info);
	count = (ft_printf_tab[info[8]])(ap, info);
	ft_memdel((void**)&info);
	return (count);
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
			count += ft_printf_next(&str[i], ap);
			i = i + ft_last_char_index(&str[i]) + 1;
		}
		else
			count += ft_print_str(str, &i);
	}
	ft_strdel(&str);
	va_end(ap);
	return (count);
}
