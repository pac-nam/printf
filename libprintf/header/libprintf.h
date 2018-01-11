/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 14:32:23 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/11 13:07:39 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft.h"

int	ft_printf(const char *str, ...);
int	ft_printf_modulo(char *format, va_list ap, int length, int precision);
int	ft_printf_ma(char *format, va_list ap, int length, int precision);
int	ft_printf_mc(char *format, va_list ap, int length, int precision);
int	ft_printf_md(char *format, va_list ap, int length, int precision);
int	ft_printf_me(char *format, va_list ap, int length, int precision);
int	ft_printf_mf(char *format, va_list ap, int length, int precision);
int	ft_printf_mg(char *format, va_list ap, int length, int precision);
int	ft_printf_mo(char *format, va_list ap, int length, int precision);
int	ft_printf_ms(char *format, va_list ap, int length, int precision);
int	ft_printf_mu(char *format, va_list ap, int length, int precision);
int	ft_printf_mx(char *format, va_list ap, int length, int precision);
int	ft_printf_a(char *format, va_list ap, int length, int precision);
int	ft_printf_c(char *format, va_list ap, int length, int precision);
int	ft_printf_di(char *format, va_list ap, int length, int precision);
int	ft_printf_e(char *format, va_list ap, int length, int precision);
int	ft_printf_f(char *format, va_list ap, int length, int precision);
int	ft_printf_g(char *format, va_list ap, int length, int precision);
int	ft_printf_n(char *format, va_list ap, int length, int precision);
int	ft_printf_o(char *format, va_list ap, int length, int precision);
int	ft_printf_p(char *format, va_list ap, int length, int precision);
int	ft_printf_s(char *format, va_list ap, int length, int precision);
int	ft_printf_u(char *format, va_list ap, int length, int precision);
int	ft_printf_x(char *format, va_list ap, int length, int precision);
int	ft_last_char(char *str);

#endif
