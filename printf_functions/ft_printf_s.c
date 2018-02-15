/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:48:06 by tbleuse           #+#    #+#             */
/*   Updated: 2018/02/15 18:13:04 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"
#include "../header/function_array.h"

int			ft_printf_s(va_list ap, int *info)
{
	char		*str;
	int			len;
	int			count;

	if (info[7] == 3)
		return (ft_printf_ms(ap, info));
	str = va_arg(ap, char*);
	if (!str)
		len = 6;
	else
		len = ft_strlen(str);
	if (info[6] == -1 || info[6] > len)
		info[6] = len;
	if (info[2] == -1)
		count = ft_printnchar(info[5] - info[6], ' ');
	if (!str)
		write(1, "(null)", 6);
	else
		write(1, str, info[6]);
	if (info[2] != -1)
		count = ft_printnchar(info[5] - info[6], ' ');
	return (info[6] + count);
}
