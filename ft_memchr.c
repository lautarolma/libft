/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:04:18 by laviles           #+#    #+#             */
/*   Updated: 2025/10/20 20:55:14 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((unsigned char *)s);
		s++;
		n--;
	}
	return (NULL);
}
/*
int	main()
{
	char		str[] = "asdfghj";
	size_t		n = 4;
	const void	* p = &str;
	int			c = 'd';

	printf("%s\n", (unsigned char *)ft_memchr(p, c, n));
	return (0);
}*/
