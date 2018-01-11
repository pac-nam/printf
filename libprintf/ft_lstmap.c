/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:10:52 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/11 13:58:08 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_elem;

	if (lst == NULL)
		return (NULL);
	new_elem = (t_list*)malloc(sizeof(t_list));
	if (new_elem == NULL)
		return (NULL);
	new_elem = (f)(lst);
	if (lst->next != NULL)
		new_elem->next = ft_lstmap(lst->next, (f));
	else
		new_elem->next = NULL;
	return (new_elem);
}
