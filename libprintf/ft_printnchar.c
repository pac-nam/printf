/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 16:44:15 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/17 16:48:27 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

int  ft_printnchar(int nb, char c)
{
	char        *str;

	if (nb <= 0 || (!(str = (char*)malloc(nb + 1))))
		return (0);
	str[nb] = '\0';
	nb = 0;
	while (str[nb])
		str[nb++] = c;
	write(1, str, nb);
	ft_strdel(&str);
	return (nb);
}
