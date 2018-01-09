/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 13:56:12 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/09 16:58:32 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

static int	ft_print_str(const char *format, int *index)
{
	int		i;

	i = ft_strlen_c(&format[*index], '%') - 1;
	write(1, &format[*index], i);
	*index += i + 1;
	return (i);
}

int 		ft_printf(const char *format, ...)
{
	int			index;
	void		**big_tab;
	int			i;
	va_list		ap;

	index = 0;
	i = ft_count_arg(format);
	va_start(ap, format);
	if (!(big_tab = malloc(i)))
		return (0);
	while (index < i)
	{
		big_tab[index] = va_arg(ap, void*);
		index++;
	}
	while (format[index])
	{
		if (format[index] == '%')
		{
			count += *ft_sprade[which_fuction(&format[index])](va_arg(ap, )
		}
		else
		{
			ft_print_str(format, &index);
		}
	}
	return (count);
}
