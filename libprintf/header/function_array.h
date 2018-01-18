/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_array.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:37:18 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/18 15:11:03 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_ARRAY_H
# define FUNCTION_ARRAY_H
# include "libprintf.h"

int     ft_printf_di(va_list ap, int *infos);
int     ft_printf_ouxmx(va_list ap, int *infos);
int     ft_printf_modulo(va_list ap, int *infos);
int     ft_printf_error(va_list ap, int *infos);

int     ft_printf_s(va_list ap, int *infos);
int     ft_printf_ma(va_list ap, int *infos);
int     ft_printf_mc(va_list ap, int *infos);
int     ft_printf_md(va_list ap, int *infos);
int     ft_printf_me(va_list ap, int *infos);
int     ft_printf_mf(va_list ap, int *infos);
int     ft_printf_mg(va_list ap, int *infos);
int     ft_printf_mo(va_list ap, int *infos);
int     ft_printf_ms(va_list ap, int *infos);
int     ft_printf_mu(va_list ap, int *infos);
int     ft_printf_a(va_list ap, int *infos);
int     ft_printf_c(va_list ap, int *infos);
int     ft_printf_e(va_list ap, int *infos);
int     ft_printf_f(va_list ap, int *infos);
int     ft_printf_g(va_list ap, int *infos);
int     ft_printf_n(va_list ap, int *infos);
int     ft_printf_p(va_list ap, int *infos);

int     ft_printf_o(unsigned long long nb, int *infos);
int     ft_printf_u(unsigned long long nb, int *infos);
int     ft_printf_x(unsigned long long nb, int *infos);
int     ft_printf_mx(unsigned long long nb, int *infos);

#endif
