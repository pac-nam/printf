/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 16:44:15 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/20 12:04:22 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libprintf.h"

int		ft_printnchar(int nb, char c)
{
	char		*str;
	int			nb2;

	if (nb < 1)
		return (0);
	if (!(str = (char*)malloc(nb + 1)))
		return (0);
	nb2 = nb;
	str[nb] = '\0';
	while (nb)
		str[--nb] = c;
	ft_putstr(str);
	ft_strdel(&str);
	return (nb2);
}
