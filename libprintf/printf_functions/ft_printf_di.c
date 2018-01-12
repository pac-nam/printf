/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 10:25:14 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/12 17:24:57 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libprintf.h"

int         ft_printf_di(char *format, va_list ap, int length, int precision)
{
	int			i;

	i = 0;
	while (format[i] != 'h' && format[i] != 'l' && format[i] != 'j' &&
			format[i] != 'z' && format[i] 'd' && format[i] 'i')
		i++;
	if (format[i] == 'd' || format[i] == 'i')
		return (ft_printf_di_di(format, ap, length, precision));
	if (format[i] == 'h' && format[i] == 'h')
		return (ft_printf_di_hh(format, ap, length, precision));
	if (format[i] == 'h')
		return (ft_printf_di_h(format, ap, length, precision));
	if (format[i] == 'l' && format[i] == 'l')
		return (ft_printf_di_ll(format, ap, length, precision));
	if (format[i] == 'l')
		return (ft_printf_di_l(format, ap, length, precision));
	if (format[i] == 'j')
		return (ft_printf_di_j(format, ap, length, precision));
	if (format[i] == 'z')
		return (ft_printf_di_z(format, ap, length, precision));
	return (0);
}
