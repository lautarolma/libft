/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:00:11 by laviles           #+#    #+#             */
/*   Updated: 2025/10/07 22:00:30 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	char	*tmp;
	int		c;

	tmp = (char *)s;
	c = '\0';
	ft_memset(tmp, c, len);
}
/*
int	main()
{
	char	str[] = "Hello world";
	size_t	n = 3;
	size_t	i = 0;

	printf("Str antes: %s\n", str);
	ft_bzero(str, n);
	write(1, "Str despues: ", 13);
	while (i < 11)
	{
		write(1, &str[i], 1);
		i++;
	}
		write(1, "\n", 1);
	return (0);
}*/
