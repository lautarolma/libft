/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:10:31 by laviles           #+#    #+#             */
/*   Updated: 2025/10/07 22:10:32 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	size_t			i;

	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if ((tmp1[i] != tmp2[i]) || !tmp1[i] || !tmp2[i])
			return (tmp1[i] - tmp2[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	const char	s1[]	= "asdf\0'g";
	const char	s2[]	= "asdf";
	size_t		n	= 7;

	printf("%d", ft_strncmp(s1, s2, n));
	return (0);
}*/
