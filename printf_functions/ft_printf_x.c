/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 10:29:26 by tbleuse           #+#    #+#             */
/*   Updated: 2018/02/01 12:38:38 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

static int		ft_printf_x_rest(char *str, int *info, int nb)
{
	int		len;
	int		to_add;

	to_add = 0;
	len = (int)ft_strlen(str);
	if (info[5] > len)
	{
		if (info[1] == -1)
			ft_printnchar(info[5] - len, ' ');
		if (info[1] != -1)
		{
			if (info[0] != -1 && nb != 0)
			{
				write(1, "0x", 2);
				to_add = 2;
				info[0] = -1;
				info[5] -= 2;
			}
			ft_printnchar(info[5] - len, '0');
		}
		return (info[5] - len + to_add);
	}
	return (0);
}

int				ft_printf_x(unsigned long long nb, int *info)
{
	int			count;
	char		*str;

	count = 0;
	if (nb == 0)
	str = ft_ulltoa_base(nb, 16);
	if (!ft_addncharbefore(info[6] - (int)ft_strlen(str), '0', &str))
		return (0);
	if (info[2] == -1)
		count += ft_printf_x_rest(str, info, nb);
	if (info[0] != -1 && nb != 0)
	{
		write(1, "0x", 2);
		count += 2;
		info[0] = -1;
		info[5] -= 2;
	}
	ft_putstr(str);
	count += (int)ft_strlen(str);
	if (info[2] != -1)
		count += ft_printf_x_rest(str, info, nb);
	ft_strdel(&str);
	return (count);
}
