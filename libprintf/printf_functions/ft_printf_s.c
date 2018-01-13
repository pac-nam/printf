/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:48:06 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/13 13:56:39 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

static int	ft_printf_s_space(int nb)
{
	char		*str;

	if (nb <= 0 || (!(str = (char*)malloc(nb + 1))))
		return (0);
	str[nb] = '\0';
	nb = 0;
	while (str[nb])
		str[nb] = ' ';
	write(1, str, nb);
	return (nb);
}

int			ft_printf_s(va_list ap, int *info)
{
	char		*str;
	int			i;

	if (info[6] == -1)
		info[6] = ft_strlen(str);
	str = va_arg(ap, char*);
	if (info[2] != -1)
	{
		write(1, str, info[6]);
		i = ft_printf_s_space(info[6] - info[5])
	}
	else
	{
		i = ft_printf_s_space(info[6] - info[5])
		write(1, str, info[6]);
	}
	return (info[6] + i);
}
