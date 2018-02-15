/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_printf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:37:18 by tbleuse           #+#    #+#             */
/*   Updated: 2018/02/15 17:33:20 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_PRINTF_H
# define BONUS_PRINTF_H
# include "libprintf.h"

int		ft_printf_b(unsigned long long nb, int *infos);

int		ft_printf_n(va_list ap, int count);

#endif
