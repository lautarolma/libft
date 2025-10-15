/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:15:46 by laviles           #+#    #+#             */
/*   Updated: 2025/10/15 23:26:10 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
	if(n == -2147483648)
		return ((char *)ft_strdup("-2147483648"));
}

int	main()
{
	int		n;
	char	*str;

	n = -2147483648;
	printf("%s", ft_itoa(n));
}
