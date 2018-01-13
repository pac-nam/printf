/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:45:45 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/13 16:08:24 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*dest;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
		i++;
	dest = (char*)malloc((sizeof(char)) * (i + 1));
	if (dest == NULL)
		return (NULL);
	dest[i] = '\0';
	i--;
	while (i >= 0)
	{
		dest[i] = f(s[i]);
		i--;
	}
	return (dest);
}
