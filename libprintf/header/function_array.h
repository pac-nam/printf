/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_array.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:37:18 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/12 17:49:10 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_ARRAY_H
# define FUNCTION_ARRAY_H
# include "libprintf.h"

int     ft_printf_error(va_list ap, t_printf *infos);
int     ft_printf_modulo(va_list ap, t_printf *infos);
int     ft_printf_ma(va_list ap, t_printf *infos);
int     ft_printf_mc(va_list ap, t_printf *infos);
int     ft_printf_md(va_list ap, t_printf *infos);
int     ft_printf_me(va_list ap, t_printf *infos);
int     ft_printf_mf(va_list ap, t_printf *infos);
int     ft_printf_mg(va_list ap, t_printf *infos);
int     ft_printf_mo(va_list ap, t_printf *infos);
int     ft_printf_ms(va_list ap, t_printf *infos);
int     ft_printf_mu(va_list ap, t_printf *infos);
int     ft_printf_mx(va_list ap, t_printf *infos);
int     ft_printf_a(va_list ap, t_printf *infos);
int     ft_printf_c(va_list ap, t_printf *infos);
int     ft_printf_di(va_list ap, t_printf *infos);
int     ft_printf_e(va_list ap, t_printf *infos);
int     ft_printf_f(va_list ap, t_printf *infos);
int     ft_printf_g(va_list ap, t_printf *infos);
int     ft_printf_n(va_list ap, t_printf *infos);
int     ft_printf_o(va_list ap, t_printf *infos);
int     ft_printf_p(va_list ap, t_printf *infos);
int     ft_printf_s(va_list ap, t_printf *infos);
int     ft_printf_u(va_list ap, t_printf *infos);
int     ft_printf_x(va_list ap, t_printf *infos);

int 	(*ft_printf_tab[128])(va_list ap, t_printf *infos) =
{ft_printf_error, ft_printf_s, ft_printf_ms, ft_printf_p, ft_printf_di,
ft_printf_md, ft_printf_o, ft_printf_mo, ft_printf_u, ft_printf_mu,
ft_printf_x, ft_printf_mx, ft_printf_c, ft_printf_mc, ft_printf_e,
ft_printf_me, ft_printf_f, ft_printf_mf, ft_printf_g, ft_printf_mg,
ft_printf_a, ft_printf_ma, ft_printf_n, ft_printf_modulo};

#endif
