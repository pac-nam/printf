/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 12:32:37 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/13 16:03:00 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*tmp1;
	const unsigned char	*tmp2;

	tmp1 = (const unsigned char*)s1;
	tmp2 = (const unsigned char*)s2;
	if (s1 == s2 || n == 0)
		return (0);
	while (n--)
	{
		if (*tmp1 != *tmp2)
			return (*tmp1 - *tmp2);
		if (n)
		{
			tmp1++;
			tmp2++;
		}
	}
	return (0);
}
