/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lecamilo <lecamilo@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 00:28:43 by lcamilo-          #+#    #+#             */
/*   Updated: 2025/09/30 16:52:13 by lecamilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlenjoin(const char *s1, const char *s2, int len)
{
	char	*str;
	char	*ret;

	if (!(s1 && s2))
		return (0);
	str = malloc((ft_strlen(s1) + len + 1) * sizeof(char));
	ret = str;
	if (!str)
		return (0);
	while (*s1)
		*(str++) = *(s1++);
	while (len > 0)
	{
		*(str++) = *(s2++);
		len--;
	}
	*str = 0;
	return (ret);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize)
	{
		while (i < dstsize - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (ft_strlen(src));
}

char	*ft_strlendup(const char *s1, int size)
{
	char	*p;

	p = malloc((size + 1) * sizeof(char));
	if (!p)
		return (0);
	ft_strlcpy(p, s1, size + 1);
	return (p);
}
