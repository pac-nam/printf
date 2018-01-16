/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   limit.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 15:29:44 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/16 16:32:50 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int		main(void)
{
	size_t		s;
	char		*i;

	i = NULL;
	s = 46844646;
/*	printf("intmax : %d\n", INT_MAX);
	printf("longmax : %ld\n", LONG_MAX);
*/	if (s > i)
		i++;
	return (0);
}
