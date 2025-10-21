/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 06:40:08 by laviles           #+#    #+#             */
/*   Updated: 2025/10/11 06:40:10 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*dst;
	size_t		i;
	size_t		slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_calloc(1, sizeof(char)));
	if (len > slen - start)
		len = (slen - start);
	dst = (char *)malloc(len + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[len] = '\0';
	return (dst);
}
/*
int	main()
{
	const char		*src	= "asdhelloasd";
	char			*dst;
	unsigned int	start	= 2;
	size_t			len		= 2;
	
	dst = ft_substr(src, start, len);
	printf("%s", dst);
	free(dst);
	return (0);
}*/
