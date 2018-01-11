/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 11:48:48 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/11 13:59:06 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*tmp;
	size_t				i;

	tmp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (tmp[i] == (unsigned char)c)
			return (&tmp[i]);
		i++;
	}
	return (NULL);
}
