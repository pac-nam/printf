/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_special_endl.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 10:27:59 by tbleuse           #+#    #+#             */
/*   Updated: 2017/12/18 13:30:24 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put_special_endl(char const *s)
{
	int			i;

	i = -1;
	if (s)
	{
		while (s[++i] != '\0')
			if (ft_isprint(s[i]))
				write(1, &s[i], 1);
	}
	write(1, "\n", 1);
}
