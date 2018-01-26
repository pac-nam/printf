/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_mc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 10:24:41 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/26 15:41:31 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

int			ft_printf_mc(va_list ap, int *info)
{
	int			count;
	wchar_t		c;

	count = 0;
	c = (wchar_t)va_arg(ap, wint_t);
	if (info[2] == -1)
		count += ft_printnchar(info[5] - 1, ' ');
	write(1, &c, 1);
	if (info[2] != -1)
		count += ft_printnchar(info[5] - 1, ' ');
	return (count + 1);
}
