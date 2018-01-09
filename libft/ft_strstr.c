/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:35:32 by tbleuse           #+#    #+#             */
/*   Updated: 2017/11/16 16:47:43 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int				i;
	int				j;
	int				save;

	i = 0;
	j = 0;
	save = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[i] != '\0')
	{
		while (haystack[i] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char*)&haystack[save]);
			i++;
			j++;
		}
		save++;
		i = save;
		j = 0;
	}
	return (NULL);
}
