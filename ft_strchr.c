/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:07:37 by laviles           #+#    #+#             */
/*   Updated: 2025/10/21 22:20:58 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*c_c;

	c_c = (char *)s;
	while (*c_c)
	{
		if (*c_c == (unsigned char)c)
			return (c_c);
		c_c++;
	}
	if ((unsigned char)c == 0)
		return (c_c);
	return (NULL);
}
/*
int	main()
{
	const char	str[]	= "dsfghjmnhvdvjkdw";
	int			c		= '\0';

	printf("%s|\n", ft_strchr(str, c));
	printf("%s|\n", strchr(str, c));
}*/
