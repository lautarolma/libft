/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:12:38 by laviles           #+#    #+#             */
/*   Updated: 2025/10/21 19:27:28 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*end;
	int		len;

	len = (ft_strlen(s));
	end = (char *)s + len;
	if ((unsigned char)c == '\0')
		return (&((char *)s)[len]);
	while (end >= s)
	{
		if (*end == (unsigned char)c)
			return (end);
		end--;
	}
	return (NULL);
}
/*
int	main()
{
	const char	s[] = "123456789";
	int			c	= '\0';

	printf("%s\n", ft_strrchr(s, c));
	printf("%s\n", strrchr(s, c));
	return (0);
}*/
