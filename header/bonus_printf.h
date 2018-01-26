/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_printf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:37:18 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/26 12:21:23 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_PRINTF_H
# define BONUS_PRINTF_H
# include "libprintf.h"

int		ft_printf_ma(va_list ap, int *infos);
int		ft_printf_me(va_list ap, int *infos);
int		ft_printf_mf(va_list ap, int *infos);
int		ft_printf_mg(va_list ap, int *infos);
int		ft_printf_a(va_list ap, int *infos);
int		ft_printf_e(va_list ap, int *infos);
int		ft_printf_f(va_list ap, int *infos);
int		ft_printf_g(va_list ap, int *infos);

int		ft_printf_n(va_list ap, int count);

#endif
