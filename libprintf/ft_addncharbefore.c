/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addncharbefore.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 15:59:51 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/17 16:24:09 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

char		**ft_addncharbefore(int n, char c, char **str)
{
	char		*tmp;
	int			i;
	int			len;

	if (!str || !(*str))
		return (NULL);
	i = 0;
	if (n < 1)
		return (str);
	len = ft_strlen(*str);
	tmp = *str;
	if (!(*str = malloc(len + n + 1)))
		return (NULL);
	(*str)[len + n] = '\0';
	while (i < n)
		(*str)[i++] = c;
	n = 0;
	while (len--)
		(*str)[i++] = tmp[n++];
	ft_strdel(&tmp);
	return (str);
}
