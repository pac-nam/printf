/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 07:29:58 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/11 14:12:35 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

void		ft_lstpushback(t_list **begin_list, void *data, size_t size)
{
	t_list		*tmp;

	tmp = *begin_list;
	if (begin_list != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = ft_lstnew(data, size);
	}
}
