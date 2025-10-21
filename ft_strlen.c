/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:08:48 by laviles           #+#    #+#             */
/*   Updated: 2025/10/07 22:10:13 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char	*start;

	start = s;
	while (*start)
	{
		start++;
	}
	return (start - s);
}

/*
int main()
{
    char *s = "asvhnbv";
    printf("Adress of s = %p\n", &s);
    printf("Lenght de s = %ld\n", ft_strlen(s));
    printf("Adress of s = %p\n", &s);
    return (0);
}*/
