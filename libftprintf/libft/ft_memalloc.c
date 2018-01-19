/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 11:27:23 by tbleuse           #+#    #+#             */
/*   Updated: 2017/11/16 16:38:15 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*locate;
	char	*locate2;
	size_t	i;

	locate = (void*)malloc((sizeof(void)) * (size));
	locate2 = locate;
	i = 0;
	if (locate == NULL)
		return (NULL);
	while (i < size)
	{
		locate2[i] = 0;
		i++;
	}
	return (locate);
}
