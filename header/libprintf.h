/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 14:32:23 by tbleuse           #+#    #+#             */
/*   Updated: 2018/02/08 15:44:04 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H
# include <stdarg.h>
# include <wchar.h>
# include "../libft/libft.h"

int			ft_printf(const char *str, ...);
int			ft_last_char_index(char *str);
int			ft_printnchar(int nb, char c);
int			ft_addncharbefore(int n, char c, char **str);
char		ft_last_char(char *str);
char		*ft_lltoa(long long n);
char		*ft_ulltoa_base(unsigned long long n, int base);
void		ft_take_infos(char *format, int **infos);
int			ft_wctomb(char *s, wchar_t wchar);
int			ft_wcstombs(char *s, wchar_t *pwcs, int n);
size_t		ft_wc_strlen(wchar_t *str);

#endif
