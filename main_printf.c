/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:22:59 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/16 17:29:27 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf/header/libprintf.h"
#include <stdio.h>

int			main(void)
{
	ft_printf("printf :\n");
	printf("start|%d|end\n", 123456);
	ft_printf("ft_printf :\n");
	ft_printf("start|%d|end\n", 123456);
	return (0);
}
