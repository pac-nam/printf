/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ms.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:48:06 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/25 17:35:22 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"
#include <wchar.h>

static size_t	ft_strlen_wchar_t(wchar_t *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int				ft_printf_ms(va_list ap, int *info)
{
	wchar_t		*str;
	int			count;

	str = va_arg(ap, wchar_t*);
	if (info[6] == -1)
		info[6] = ft_strlen_wchar_t(str);
	if (info[2] == -1)
		count = ft_printnchar(info[5] - info[6], ' ');
	write(1, str, info[6] * sizeof(wchar_t));
	if (info[2] != -1)
		count = ft_printnchar(info[5] - info[6], ' ');
	return (info[6] + count);
}
