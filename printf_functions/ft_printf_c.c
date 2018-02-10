/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 10:24:41 by tbleuse           #+#    #+#             */
/*   Updated: 2018/02/10 17:47:12 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"
#include "../header/function_array.h"

int			ft_printf_c(va_list ap, int *info)
{
	int		count;
	char	c;

	count = 0;
	if (info[7] == 3)
		return (ft_printf_mc(ap, info));
	c = (char)va_arg(ap, int);
	if (info[2] == -1)
		count += ft_printnchar(info[5] - 1, ' ');
	write(1, &c, 1);
	write(1, &c, 1);
	write(1, &c, 1);
	if (info[2] != -1)
		count += ft_printnchar(info[5] - 1, ' ');
	return (count + 1);
}
