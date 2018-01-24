/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:22:59 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/24 16:17:32 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf/header/libprintf.h"
#include <stdio.h>

int			main(void)
{
	char	*str = "start|%15.10s|end\n";
	int		count;

	ft_printf("printf :\n");
	count = printf(str, "12345678910111213");
	ft_printf("score : %d\n\n", count);
	ft_printf("ft_printf :\n");
	count = ft_printf(str, "12345678910111213");
	ft_printf("score : %d\n\n", count);
	return (0);
}
