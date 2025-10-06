/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 21:15:39 by laviles           #+#    #+#             */
/*   Updated: 2025/10/06 21:18:45 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

int main()
{
	const char	str1[] = "adfghkj";
	const char	*src = str1;
	char		str2 = {0};
	char		*dst = &str2;
	size_t			size = 4;

	printf("%d", strlcat(dst, src, size));
	return (0);
}
