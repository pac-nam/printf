/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:56:34 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/18 17:32:17 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>
#include <wchar.h>

int		main(void)
{
	char		something;

	something = 83;
	printf("start|%S|end", (wchar_t*)"qwerty");
	return (0);
}
