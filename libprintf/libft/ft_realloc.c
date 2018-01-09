/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 14:47:19 by tbleuse           #+#    #+#             */
/*   Updated: 2017/12/11 19:09:08 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_realloc(void *ptr, size_t size)
{
	void	*ptr2;

	if (!(ptr2 = malloc(size)))
		return (NULL);
	ptr2 = ft_memcpy(ptr2, ptr, ft_strlen((char*)ptr));
	ft_memdel(&ptr);
	return (ptr2);
}
