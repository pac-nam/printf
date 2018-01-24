/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 10:29:26 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/20 11:50:36 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

static int		ft_printf_x_rest(char *str, int *info)
{
	int		len;

	len = (int)ft_strlen(str);
	if (info[5] > len)
	{
		if (info[1] == -1)
			ft_printnchar(info[5] - len, ' ');
		if (info[1] != -1)
			ft_printnchar(info[5] - len, '0');
		return (info[5] - len);
	}
	return (0);
}

static int		ft_addoxbefore(char **str)
{
	char		*tmp;
	int			len;

	if (!str || !(*str))
		return (0);
	len = ft_strlen(*str);
	tmp = *str;
	if (!(*str = malloc(len + 3)))
		return (0);
	(*str)[0] = '0';
	(*str)[1] = 'x';
	(*str)[len + 2] = '\0';
	while (len >= 0)
	{
		(*str)[len + 2] = tmp[len];
		len--;
	}
	ft_strdel(&tmp);
	return (1);
}

int				ft_printf_x(unsigned long long nb, int *info)
{
	int			count;
	char		*str;

	count = 0;
	str = ft_ulltoa_base(nb, 16);
	if (!ft_addncharbefore(info[6] - (int)ft_strlen(str), '0', &str))
		return (0);
	if (info[0] != -1)
	{
		if (!ft_addoxbefore(&str))
			return (0);
	}
	if (info[2] == -1)
		count += ft_printf_x_rest(str, info);
	ft_putstr(str);
	count += (int)ft_strlen(str);
	if (info[2] != -1)
		count += ft_printf_x_rest(str, info);
	ft_strdel(&str);
	return (count);
}
