/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wchar_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 15:40:16 by tbleuse           #+#    #+#             */
/*   Updated: 2018/02/14 17:33:47 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libprintf.h"

size_t		ft_wcslen(wchar_t *str)
{
	size_t		i;

	i = 0;
	while (str[i] != L'\0')
		++i;
	return (i);
}

static int	ft_conv_utf8(int wbytes, wchar_t wchar, char *s)
{
	if (wbytes == 2)
	{
		s[1] = 0x80 | (wchar & 0x3F);
		s[0] = 0xC0 | (wchar >> 6 & 0x1F);
	}
	else if (wbytes == 3)
	{
		s[2] = 0x80 | (wchar & 0x3F);
		s[1] = 0x80 | (wchar >> 6 & 0x3F);
		s[0] = 0xE0 | (wchar >> 12 & 0x0F);
	}
	else if (wbytes == 4)
	{
		s[3] = 0x80 | (wchar & 0x3F);
		s[2] = 0x80 | (wchar >> 6 & 0x3F);
		s[1] = 0x80 | (wchar >> 12 & 0x3F);
		s[0] = 0xF0 | (wchar >> 18 & 0x07);
	}
	return (wbytes);
}

int			ft_wc_convert(char *s, wchar_t wchar)
{
	if ((wchar < 0) || (wchar >= 0xD800 && wchar <= 0xDFFF) ||
			(wchar > 0x10FFFF))
		return (-1);
	if ((wchar >> 7) == 0)
	{
		s[0] = (unsigned char)wchar;
		return (1);
	}
	if ((wchar >> 11) == 0)
		return (ft_conv_utf8(2, wchar, s));
	if ((wchar >> 16) == 0)
		return (ft_conv_utf8(3, wchar, s));
	if ((wchar >> 21) == 0)
		return (ft_conv_utf8(4, wchar, s));
	return (-1);
}

int			ft_wcs_convert(char *s, wchar_t *pwcs, int n)
{
	char	tmp[sizeof(wchar_t)];
	int		offset;
	int		i;

	offset = 0;
	while (*pwcs != L'\0' && n != 0)
	{
		if ((i = ft_wc_convert(tmp, *pwcs)) == -1)
			return (-1);
		if (i > n)
			break ;
		ft_memcpy(s + offset, tmp, i);
		offset += i;
		++pwcs;
		n -= i;
	}
	if (n > 0)
		s[offset] = '\0';
	return (offset);
}
