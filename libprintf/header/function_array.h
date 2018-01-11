/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_array.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:37:18 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/11 11:04:39 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_ARRAY_H
# define FUNCTION_ARRAY_H
# include "libprintf.h"

int (*ft_printf_tab[128])(char *str, va_list ap) =
{NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
/*
**ft_10 under
*/
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
/*
**ft_20 under
*/
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
/*
**ft_30 under
*/
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
ft_printf_modulo,
NULL,
NULL,
/*
**ft_40 under
*/
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
/*
**ft_50 under
*/
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
/*
**ft_60 under
*/
NULL,
NULL,
NULL,
NULL,
NULL,
ft_printf_ma,
NULL,
ft_printf_mc,
ft_printf_md,
ft_printf_me,
/*
**ft_70 under
*/
ft_printf_mf,
ft_printf_mg,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
ft_printf_mo,
/*
**ft_80 under
*/
NULL,
NULL,
NULL,
ft_printf_ms,
NULL,
ft_printf_mu,
NULL,
NULL,
ft_printf_mx,
NULL,
/*
**ft_90 under
*/
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
ft_printf_a,
NULL,
ft_printf_c,
/*
**ft_100 under
*/
ft_printf_di,
ft_printf_e,
ft_printf_f,
ft_printf_g,
NULL,
ft_printf_di,
NULL,
NULL,
NULL,
NULL,
/*
**ft_110 under
*/
ft_printf_n,
ft_printf_o,
ft_printf_p,
NULL,
NULL,
ft_printf_s,
NULL,
ft_printf_u,
NULL,
NULL,
/*
**ft_120 under
*/
ft_printf_x,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL};

#endif
