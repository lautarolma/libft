/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:07:02 by laviles           #+#    #+#             */
/*   Updated: 2025/10/07 22:07:11 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*tmp;
	size_t	i;

	tmp = (char *)s;
	i = 0;
	while (i < n)
	{
		tmp[i] = c;
		i++;
	}
	return (s);
}
/*
int	main()
{
	char	str[] = "Hell, no again!";
	void*	s = &str;
	int		c = '0';
	size_t	n = 4;

	printf("Antes str = %s\n", (char *)s);
	ft_memset(s, c, n);
	printf("Antes str = %s\n", (char *)s);
	return (0);
}*/
