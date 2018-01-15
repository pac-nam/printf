/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_modifier.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 13:56:16 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/15 14:08:28 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LENGTH_MODIFIER_H
# define LENGTH_MODIFIER_H
# include "libft.h"

typedef union u_printf_union
{
	signed char		hh;
	short			h;
	long			l;
	long long		ll;
	intmax_t		j;
	size_t			z;
}

#endif
