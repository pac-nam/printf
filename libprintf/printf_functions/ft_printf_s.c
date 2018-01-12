/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:48:06 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/12 17:55:59 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

int	ft_printf_s(va_list ap, t_printf *infos)
{
	char		*str;

	str = va_arg(ap, char*);
	if (infos->precision == -1)
		infos->precision = ft_strlen(str);
	if (infos->minus)
	{
		write(1, str, infos->precision);
		while (infos->precision < infos->length--)
			ft_putchar (' ');
	}
	else
	{
		while (infos->precision < infos->length--)
			ft_putchar (' ');
		write(1, str, infos->precision);
	}
	return ((int)ft_strlen(str) + infos->precision);
}
