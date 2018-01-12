/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:22:59 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/12 17:45:10 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf/header/libprintf.h"
#include <stdio.h>

int			main(void)
{
	ft_printf("printf :\n");
	printf("start|%10.8s|end\n", "01235644456789");
	ft_printf("ft_printf :\n");
	ft_printf("start|%10.8s|end\n", "01235644456789");
	return (0);
}
