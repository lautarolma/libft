/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:12:38 by laviles           #+#    #+#             */
/*   Updated: 2025/10/07 22:12:39 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*end;

	end = (char *)s + ft_strlen(s);
	while (end > s)
	{
		if (*end == c)
			return (end);
		end--;
	}
	return (NULL);
}
/*
int	main()
{
	const char	s[] = "asxfgxxcvfvb";
	int			c	= 'x';

	printf("%s", ft_strrchr(s, c));
	return (0);
}*/
