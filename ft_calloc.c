/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 01:20:35 by laviles           #+#    #+#             */
/*   Updated: 2025/10/11 05:01:27 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>
//#include <unistd.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, (nmemb * size));
	return (p);
}
/*
int	main()
{
	size_t	nelements	= 4;
	size_t	size		= 2;
	void	*p = ft_calloc(nelements, size);
	int		total = (nelements * size);
	void	*start = p;

	printf("%p\n", &p);
	while (total > 0)
	{
		printf("%01x\n", *(char *)p);
		p++;
		total--;
	}
	free(start);
	return (0);
}*/
