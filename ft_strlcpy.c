/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:08:28 by laviles           #+#    #+#             */
/*   Updated: 2025/10/07 22:08:29 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	if (size > ft_strlen(src))
		size = (ft_strlen(src) + 1);
	if (size == 0)
		return (ft_strlen(src));
	ft_memcpy(dst, src, size - 1);
	dst[size - 1] = '\0';
	return (ft_strlen(src));
}
/*
int	main()
{
	size_t			size			= 4;
	const char		str1[]			= "Hola mundo";
	const char		*src			= str1;
	char			str2[14] 		= {0};
	char			*dst			= str2;

	printf("dst = %s\n", dst);
	printf("Size = %ld\n", strlcpy(dst, src, size));
	printf("dst = %s\n", dst);
}*/
