/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:22:59 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/17 17:29:25 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf/header/libprintf.h"
#include <stdio.h>

int			main(void)
{
	ft_printf("printf :\n");
	printf("start|%-+10.8zd|end\n", (size_t)123456789123456);
	ft_printf("ft_printf :\n");
	ft_printf("start|%-+10.8zd|end\n", (size_t)123456789123456);
	return (0);
}
