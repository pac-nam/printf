/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:38:27 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/12 15:44:16 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

char		ft_last_char(char *str)
{
	int     i;

	i = 1;
	while (str[i] != 's' && str[i] != 'S' && str[i] != 'p' && str[i] != 'd' &&
			str[i] != 'D' && str[i] != 'i' && str[i] != 'o' && str[i] != 'O' &&
			str[i] != 'u' && str[i] != 'U' && str[i] != 'x' && str[i] != 'X' &&
			str[i] != 'c' && str[i] != 'C' && str[i] != 'e' && str[i] != 'E' &&
			str[i] != 'f' && str[i] != 'F' && str[i] != 'g' && str[i] != 'G' &&
			str[i] != 'a' && str[i] != 'A' && str[i] != 'n' && str[i] != '%' &&
			str[i] != '\0')
		i++;
	if (str[i] == '\0')
	{
		ft_putendl("printf error");
		return (0);
	}
	return (str[i]);
}

int			ft_last_char_index(char *str)
{
	int		i;

	i = 1;
	while (str[i] != 's' && str[i] != 'S' && str[i] != 'p' && str[i] != 'd' &&
			str[i] != 'D' && str[i] != 'i' && str[i] != 'o' && str[i] != 'O' &&
			str[i] != 'u' && str[i] != 'U' && str[i] != 'x' && str[i] != 'X' &&
			str[i] != 'c' && str[i] != 'C' && str[i] != 'e' && str[i] != 'E' &&
			str[i] != 'f' && str[i] != 'F' && str[i] != 'g' && str[i] != 'G' &&
			str[i] != 'a' && str[i] != 'A' && str[i] != 'n' && str[i] != '%' &&
			str[i] != '\0')
		i++;
	if (str[i] == '\0')
	{
		ft_putendl("printf error");
		return (0);
	}
	return (i);
}