/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 10:28:07 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/19 13:23:49 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

int         ft_printf_p(va_list ap, int *info)
{
	char		*ptr;
	int			count;
	int			len;

	ptr = ft_ulltoa_base((unsigned long long)va_arg(ap, void*), 16);
	if (!ft_addncharbefore(1, 'x', &ptr) || !ft_addncharbefore(1, '0', &ptr))
		return (0);
	count = 0;
	len = ft_strlen(ptr);
	if (info[2] == -1)
		count += ft_printnchar(info[5] - len, ' ');
	write(1, ptr, len);
	count += len;
	if (info[2] != -1)
		count += ft_printnchar(info[5] - len, ' ');
	return (count);
}
