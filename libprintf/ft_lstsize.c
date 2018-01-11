/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 18:55:31 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/11 14:12:01 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

int		ft_lstsize(t_list *begin_list)
{
	int		i;

	i = 1;
	if (begin_list == NULL)
		return (0);
	while (begin_list->next != NULL)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}
