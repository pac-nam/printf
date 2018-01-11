/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 11:32:33 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/11 13:59:38 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*tmp;
	const char	*tmp2;

	i = 0;
	tmp = dst;
	tmp2 = src;
	while (i < n)
	{
		tmp[i] = tmp2[i];
		i++;
	}
	return (dst);
}
