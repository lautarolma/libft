/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:05:53 by laviles           #+#    #+#             */
/*   Updated: 2025/10/20 21:25:17 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((const char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int		main()
{
	char str[] = "ABCDEFGHIJK";
	void*	dest = &str[5];
	void*	src = &str[0];
	size_t	n = 4;

//	printf("src = %s\n", (char*)src);
//	printf("dst = %s\n",(char*)ft_memcpy(dest, src, n));
	printf("%s\n", ft_memcpy(((void*)0), ((void*)0), 3));
//	printf("%s\n", memcpy(((void*)0), ((void*)0), 3));
	return(0);	
}*/
