/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_modulo.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 10:26:58 by tbleuse           #+#    #+#             */
/*   Updated: 2018/02/01 14:58:09 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

int	ft_printf_modulo(int **info)
{
	int		count;

	count = 1;
	if ((*info)[2] == -1)
		count += ft_printnchar((*info)[5] - 1, ' ');
	write(1, "%", 1);
	if ((*info)[2] != -1)
		count += ft_printnchar((*info)[5] - 1, ' ');
	ft_memdel((void**)info);
	return (count);
}
