/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushfront.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 16:45:03 by tbleuse           #+#    #+#             */
/*   Updated: 2017/11/17 11:33:56 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstpushfront(t_list **begin_list, void *data, size_t size)
{
	t_list		*new;

	if (begin_list != NULL)
	{
		new = ft_lstnew(data, size);
		new->next = *begin_list;
		*begin_list = new;
	}
}
