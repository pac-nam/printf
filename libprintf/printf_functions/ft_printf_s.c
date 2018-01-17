/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:48:06 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/17 16:46:32 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

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
		i = ft_printnchar(info[5] - info[6], ' ');
	}
	else
	{
		i = ft_printnchar(info[5] - info[6], ' ');
		write(1, str, info[6]);
	}
	return (info[6] + i);
}
