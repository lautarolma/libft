/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 02:51:24 by laviles           #+#    #+#             */
/*   Updated: 2025/10/16 05:09:30 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s) + 1;
	str = (char *)malloc(len);
	if (!str)
		return (NULL);
	ft_memcpy(str, s, len);
	return (str);
}
/*
int	main()
{
	const char	*src = "Hello world";
	char		*dst = ft_strdup(src);
	
	printf("%r", (int)c); 
	free(dst - 11);
	return (0);
}*/
