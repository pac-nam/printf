/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 16:48:06 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/13 14:48:25 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

int			ft_printf_error(va_list ap, int *info)
{
	ap = NULL;
	info[0] = 0;
	ft_putstr("error printf");
	return (0);
}
