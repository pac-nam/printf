/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:04:25 by tbleuse           #+#    #+#             */
/*   Updated: 2018/02/16 12:33:13 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"
#include <limits.h>

static int	ft_nb_lenght(long long nb)
{
	int		lenght;

	lenght = 0;
	if (nb <= 0)
		lenght = 1;
	while (nb != 0)
	{
		nb = nb / 10;
		lenght++;
	}
	return (lenght);
}

char		*ft_lltoa(long long n)
{
	char	*str;
	int		i;

	i = ft_nb_lenght(n);
	if (n == LLONG_MIN)
		return (ft_strdup("-9223372036854775808"));
	if (!(str = (char*)malloc(sizeof(*str) * (i + 1))))
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	str[i--] = '\0';
	while (n != 0)
	{
		str[i--] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
