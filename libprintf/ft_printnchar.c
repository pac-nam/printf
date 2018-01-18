/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 16:44:15 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/18 14:22:30 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

int  ft_printnchar(int nb, char c)
{
	char        *str;

	if (nb < 1)
		return (0);
	if (!(str = (char*)malloc(nb + 1)))
		return (0);
	str[nb] = '\0';
	while (nb)
		str[--nb] = c;
	ft_putstr(str);
	ft_strdel(&str);
	return (nb);
}
