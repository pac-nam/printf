/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:22:59 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/18 17:24:43 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf/header/libprintf.h"
#include <stdio.h>

int			main(void)
{
	char	*str = "start|%#30X|end\n";
	ft_printf("printf :\n");
	printf(str, 78);
	ft_printf("ft_printf :\n");
	ft_printf(str, 78);
	return (0);
}
