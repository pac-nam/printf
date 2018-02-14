/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ms.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:48:06 by tbleuse           #+#    #+#             */
/*   Updated: 2018/02/14 12:55:44 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

int				ft_printf_ms(va_list ap, int *info)
{
	wchar_t		*wcs;
	char		*str;
	int			count;

	wcs = va_arg(ap, wchar_t*);
	if (info[6] == -1)
		info[6] = ft_wcslen(wcs);
	str = NULL;
	if (!ft_wcs_convert(str, wcs, info[6]))
		return (0);
	if (info[2] == -1)
		count = ft_printnchar(info[5] - info[6], ' ');
	write(1, str, ft_strlen(str));
	if (info[2] != -1)
		count = ft_printnchar(info[5] - info[6], ' ');
	return (info[6] + count);
}
