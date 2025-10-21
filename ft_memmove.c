/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:06:12 by laviles           #+#    #+#             */
/*   Updated: 2025/10/21 21:55:08 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*start;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	start = (unsigned char *)dest;
	if (n == 0)
		return (dest);
	if (dest > src)
	{
		while (n >= 1)
		{
			start[n - 1] = ((const char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		i = -1;
		while (++i < n)
			start[i] = ((const char *)src)[i];
	}
	return (dest);
}
/*
int	main()
{
	char		str[]	=  "Hello world";
	void		*dest = &str[4];
	const void	*src = &str[0];
	size_t		n = 0;

	printf("src = %s\n", (char *)src);
	//printf("dest = %s\n", (char *)ft_memmove(dest, src, n * sizeof(char)));
	printf("dest = %s\n", (char *)memmove(NULL, NULL, n * sizeof(char)));
	return (0);
}*/
