/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 14:32:23 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/10 12:28:04 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "../libft/libft.h"

int			ft_printf(const char *str, ...);
int			ft_sprade(char *format, va_list ap);

#endif
