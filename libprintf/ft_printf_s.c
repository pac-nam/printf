/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:48:06 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/10 18:22:15 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int		ft_printf_s(char *format, va_list ap)
{
	int		i;
	int		nb;
	int		spaces;
	char	*str;

	str = va_arg(ap, char*);
	i = 0;
	nb = 0;
	spaces = 0;
	while (format[i] != 's' && format[i] != '.' && ft_isdigit(format[i]))
		i++;
	if (ft_isdigit(format[i]))
	{
		spaces = ft_atoi(&format[i])
		while (ft_isdigit(format[i]))
			i++;
	}
	if (format[i] == '.' && )
	{
		str = ft_strsub(str, 0, ft_atoi(&format[++i]));
		while (ft_isdigit(format[i]))
			i++;
	}
	if (format[1] == '-')
	
}
