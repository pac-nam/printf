/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 10:28:07 by tbleuse           #+#    #+#             */
/*   Updated: 2018/02/15 18:58:26 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

static int		ft_printf_p_zero(char **ptr, int *info)
{
	int		count;

	count = 0;
	if (info[2] == -1)
		count += ft_printnchar(info[5] - 2, ' ');
	count += write(1, "0x", 2);
	if (info[2] != -1)
		count += ft_printnchar(info[5] - 2, ' ');
	ft_strdel(ptr);
	return (count);
}

int				ft_printf_p(va_list ap, int *info)
{
	char		*ptr;
	int			count;
	int			len;

	ptr = ft_ulltoa_base((unsigned long long)va_arg(ap, void*), 16);
	if (*ptr == '0' && info[6] == 0)
		return (ft_printf_p_zero(&ptr, info));
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
	ft_strdel(&ptr);
	return (count);
}
