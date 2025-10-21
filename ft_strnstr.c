/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 21:58:46 by laviles           #+#    #+#             */
/*   Updated: 2025/10/07 21:58:53 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && (i + j < len) && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return (&((char *)big)[i]);
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	const char	*little	=	"carancho";
	const char	*big	=	"comadrejacaranchocamaleon";
	size_t		len		=	20;

	printf("%s", ft_strnstr(big, little, len));
	return(0);
}*/
