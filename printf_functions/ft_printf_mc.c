/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_mc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 10:24:41 by tbleuse           #+#    #+#             */
/*   Updated: 2018/02/08 12:47:35 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

int			ft_printf_mc(va_list ap, int *info)
{
	int			count;
	wchar_t		c;
	char		*str;

	count = 0;
	c = (wchar_t)va_arg(ap, wint_t);
	if (!(str = (char*)malloc(5)))
		return (0);
	str[4] = '\0';
	count += ft_wctomb(str, c);
	if (info[2] == -1)
		count += ft_printnchar(info[5] - 1, ' ');
	ft_putstr(str);
	if (info[2] != -1)
		count += ft_printnchar(info[5] - 1, ' ');
	return (count + 1);
}
