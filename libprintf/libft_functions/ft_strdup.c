/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:49:49 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/13 16:05:56 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char	*ft_strdup(const char *s1)
{
	int		x;
	int		lenght;
	char	*str;

	x = 0;
	lenght = 0;
	while (s1[lenght] != '\0')
		lenght++;
	str = (char*)malloc((sizeof(char)) * lenght + 1);
	if (str == NULL)
		return (NULL);
	while (x < lenght)
	{
		str[x] = s1[x];
		x++;
	}
	str[x] = '\0';
	return (str);
}
