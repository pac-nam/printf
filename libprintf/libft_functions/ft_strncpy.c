/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:11:15 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/13 16:08:52 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		x;

	x = 0;
	while (src[x] != '\0' && x < len)
	{
		dst[x] = src[x];
		x++;
	}
	while (x < len)
	{
		dst[x] = '\0';
		x++;
	}
	return (dst);
}
