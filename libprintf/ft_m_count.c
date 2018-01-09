/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_m_count.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 13:12:03 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/09 15:44:50 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int		ft_m_count(const char *format)
{
	int		i;
	int		m_count;
	int		save;

	m_count = 0;
	i = 0;
	save = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (save == 0)
			{
				m_count++;
				save = 1;
			}
			else
			{
				m_count--;
				save = 0;
			}
		}
		if (format[i] != '%')
			save = 0;
		i++;
	}
	return (m_count);
}
