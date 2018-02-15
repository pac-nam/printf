/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_momu.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 10:35:38 by tbleuse           #+#    #+#             */
/*   Updated: 2018/02/15 17:30:02 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"
#include "../header/function_array.h"

int			ft_printf_momu(va_list ap, int *info)
{
	info[7] = 3;
	info[9] = info[9] + 32;
	return (ft_printf_bouxmx(ap, info));
}
