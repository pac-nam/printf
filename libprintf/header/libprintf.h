/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 14:32:23 by tbleuse           #+#    #+#             */
/*   Updated: 2018/01/18 16:25:03 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft.h"

/*
typedef struct		s_printf
{
	int		hash;
	int		zero;
	int		minus;
	int		plus;
	int		length;
	int		precision;
	int		size;
	int		type;
}					t_printf;
*/

int		ft_printf(const char *str, ...);
int		ft_last_char_index(char *str);
int		ft_printnchar(int nb, char c);
char	ft_last_char(char *str);
void	ft_take_infos(char *format, int **infos);
char	*ft_lltoa(long long n);
char	*ft_ulltoa_base(long long n, int base);
char	**ft_addncharbefore(int n, char c, char **str);

#endif
