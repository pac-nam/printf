/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 16:07:01 by tbleuse           #+#    #+#             */
/*   Updated: 2017/11/22 12:04:14 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_char(char const *str)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	while (str[i] != '\0')
	{
		i++;
		len++;
	}
	i--;
	while (i >= 0 && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
	{
		i--;
		len--;
	}
	return (len);
}

static char	*ft_error(void)
{
	char	*str;

	if (!(str = (char*)malloc(sizeof(char) * 1)))
		return (NULL);
	str[0] = '\0';
	return (str);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	i = 0;
	j = 0;
	if (s == NULL)
		return (ft_error());
	len = ft_count_char(s);
	if (len < 0)
		len = 0;
	if (!(str = (char*)malloc((sizeof(char)) * (len + 1))))
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (j < len && s[i] != '\0')
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
