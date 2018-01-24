/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_md.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 10:35:38 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/20 11:54:42 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"
#include "../header/function_array.h"

int			ft_printf_md(va_list ap, int *info)
{
	info[7] = 3;
	return (ft_printf_di(ap, info));
}
