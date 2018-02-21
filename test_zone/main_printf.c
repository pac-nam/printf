/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:22:59 by tbleuse           #+#    #+#             */
/*   Updated: 2018/02/21 11:40:53 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <locale.h>
#include <limits.h>
#include <wchar.h>
#include <unistd.h>

int				ft_printf(const char *format, ...);

static void		ft_localset(void)
{
	char				*l;

	l = setlocale(LC_ALL, "en_US.UTF-8");
	if (l == NULL)
		printf("Locale not set\n");
	else
		printf("Locale set to %s\n", l);
}

int				main(void)
{
	char				*str = "tst1|%0-+3.2c| tst2|% #+4.6s| tst3|%-0#2.8d| tst4|%0-+8.4llx| tst5|%-05.7zu| tst6|%+- 6S|\n";
	char				tst1 = 'f';
	char				*tst2 = "hello";
	int					tst3 = -4534564;
	long long			tst4 = LLONG_MAX;
	unsigned long long	tst5 = 6146145846565;
	wchar_t				tst6[] = {5156, 645, 635, 564, 784, 1487, 148, 475, 0};
	int					count;
	int					count2;

	ft_localset();
	write(1, "printf :    |", 13);
	
	count = printf(str, tst1, tst2, tst3, tst4, tst5, tst6);
	
	ft_printf("--------------------------------------------------------\n");
	write(1, "ft_printf : |", 13);

	count2 = ft_printf(str, tst1, tst2, tst3, tst4, tst5, tst6);
	
	printf("score : %d|%d\n", count, count2);
	return (0);
}
