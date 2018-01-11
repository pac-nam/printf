/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:05:10 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/11 13:57:45 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (lst == NULL)
		return ;
	(f)(lst);
	if (lst->next != NULL)
		ft_lstiter(lst->next, (f));
}
