/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:15:46 by laviles           #+#    #+#             */
/*   Updated: 2025/10/16 05:39:51 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	ft_ncounter(int n)
{
	int		len;

	len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void	ft_screator(int n, char *strnb, int len)
{
	strnb[len] = '\0';
	if (n < 0)
		strnb[0] = '-';
	while (n > 0)
	{
		strnb[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
}



char	*ft_itoa(int n)
{
	char	*strnb;
	int		len;
	long	nb;

	nb = (long)n;
	if (nb == INT_MIN)
		return (ft_strdup("-2147483647"));
	if (nb == 0)
		return (ft_strdup("0"));
	len = ft_ncounter(nb);
	if (nb < 0)
	{
		len++;
		nb *= -1;
	}
	strnb = malloc((len + 1) * sizeof(char));
	if (!strnb)
		return NULL;
	ft_screator(nb, strnb, len);
	return (strnb);
}
/*
int	main()
{
	int test[] = {0, 5, -5, 10, -10, 12345, -12345, INT_MAX, INT_MIN};
	char * str;

	for (int i = 0; i < sizeof(test)/sizeof(int); i++)
	{
		str = ft_itoa(test[i]);
		printf("%d -> %s\n", test[i], str);
		free(str);
	}
	return (0);
}
*/
int	main()
{
	int		n;
	char	*str;

	n = 83648;
	str = ft_itoa(n);
	if (!str)
		return (1);
	printf("%s", str); 
	free(str);
	return (0);
}
