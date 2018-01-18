/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 10:25:14 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/18 17:25:59 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

static int	ft_printf_di_rest(char *str, int *info)
{
	int		len;

	len = (int)ft_strlen(str);
	if (info[5] > len)
	{
		if (info[1] != 0)
			ft_printnchar(info[5] - len, ' ');
		else
			ft_printnchar(info[5] - len, '0');
		return (info[5] - len);
	}
	return (0);
}

static int	ft_printf_di_second(char **str, int *info)
{
	int		count;

	count = 0;
	if (!ft_addncharbefore(info[6] - (int)ft_strlen(*str), '0', str))
		return (0);
	if (info[3] != -1)
		if (!ft_addncharbefore(1, '+', str))
			return (0);
	if (info[4] != -1)
		if (!ft_addncharbefore(1, ' ', str))
			return (0);
	if (info[2] == -1)
		count += ft_printf_di_rest(*str, info);
	ft_putstr(*str);
	count += (int)ft_strlen(*str);
	if (info[2] != -1)
		count += ft_printf_di_rest(*str, info);
	ft_strdel(str);
	return (count);
}

int         ft_printf_di(va_list ap, int *info)
{
	char	*str;

	if (info[7] == 0)
		str = ft_itoa(va_arg(ap, int));
	if (info[7] == 1)
		str = ft_lltoa((long long)(signed char)va_arg(ap, int));
	if (info[7] == 2)
		str = ft_lltoa((long long)(short)va_arg(ap, int));
	if (info[7] == 3)
		str = ft_lltoa((long long)va_arg(ap, long));
	if (info[7] == 4)
		str = ft_lltoa((long long)va_arg(ap, long long));
	if (info[7] == 5)
		str = ft_lltoa((long long)(intmax_t)va_arg(ap, long long));
	if (info[7] == 6)
		str = ft_lltoa((long long)va_arg(ap, unsigned long long));
	return (ft_printf_di_second(&str, info));
}
