/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:00:36 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/11 14:10:56 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s || !(str = (char*)malloc((sizeof(char)) * (len + 1))))
		return (NULL);
	while (i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
