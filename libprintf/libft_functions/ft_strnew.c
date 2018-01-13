/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:49:16 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/13 16:09:03 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char		*ft_strnew(size_t size)
{
	char	*str;

	if (!(str = (char*)malloc(size + 1)))
		return (NULL);
	while (size > 0)
		str[size--] = '\0';
	str[size] = '\0';
	return (str);
}
