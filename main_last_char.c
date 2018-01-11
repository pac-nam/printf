/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_last_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 15:07:13 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/11 15:10:21 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf/header/libprintf.h"

int			main(int ac, char **av)
{
	if (ac < 2)
	{
		ft_putendl("wrong number of argument");
		return (0);
	}
	ft_putnbr(ft_last_char(av[1]));
	return (0);
}
