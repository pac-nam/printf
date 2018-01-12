/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di_di.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 11:57:37 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/12 13:07:20 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libprintf.h"
#include "header/printf_di.h"

static int	ft_printf_di_di_-(char *format, int nb, int length, int precision)
{

}

static int	ft_printf_di_di_no-(char *format, int nb, int length, int precision){

}

int			ft_printf_di_di(char *format, va_list ap, int length, int precision)
{
	int		nb;
	int		i;
	int		count;

	nb = va_arg(ap, int);
	i = 0;
	while (format[i] != '-' && format[i] != '.' &&
			format[i] != 'd' && format[i] != 'i')
		i++;
	if (format[i] == '-')
	{
		count = ft_printf_di_di_-(format, nb, length, precision);
	}
	else
	{
		count = ft_printf_di_di_no-(format, nb, length, precision);
	}
	return (count);
}
