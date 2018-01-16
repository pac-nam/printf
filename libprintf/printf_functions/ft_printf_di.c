/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 10:25:14 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/16 17:58:38 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

static int	ft_printf_di_flagless(char *str, int *info)
{
	char		tmp;
	int			i;

	i = -1;
	if (info[3] && str[0] != '-')
	{
		tmp = str;
		if (!(str = (char*)malloc(ft_strlen(str) + 2)))
			return (0);
		str[0] = '+';
		while (tmp[++i] != '\0')
			str[i + 1] = tmp[i];
		ft_strdel(&tmp);
	}
	return (ft_strlen(str));
}

int         ft_printf_di(va_list ap, int *info)
{
	char	*str;
	int		count;

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
	count = ft_printf_di_flagless(str, info);
	ft_strdel(&str);
	return(count);
}
