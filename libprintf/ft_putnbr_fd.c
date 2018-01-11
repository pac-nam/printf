/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:09:01 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/11 14:02:47 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb > -1 && nb < 10)
		ft_putchar_fd((nb + '0'), fd);
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd(((nb % 10) + '0'), fd);
	}
}
