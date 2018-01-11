/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 07:56:53 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/11 13:58:19 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list			*link;

	if (!(link = malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		link->content = NULL;
		link->content_size = 0;
	}
	else
	{
		if (!(link->content = malloc(sizeof(content) * content_size)))
			return (NULL);
		ft_memcpy(link->content, content, content_size);
		link->content_size = content_size;
	}
	link->next = NULL;
	return (link);
}
