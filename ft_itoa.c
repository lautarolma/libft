/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:15:46 by laviles           #+#    #+#             */
/*   Updated: 2025/11/01 18:33:38 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ncounter(int n)
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

static void	ft_screator(int n, char *strnb, int len)
{
	if (n < 0)
	{
		n *= -1;
		strnb[0] = '-';
	}
	strnb[len] = '\0';
	while (n != 0)
	{
		len--;
		strnb[len] = (n % 10) + '0';
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	char	*strnb;
	int		len;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = ft_ncounter(n);
	if (n < 0)
		len++;
	strnb = malloc((len + 1) * sizeof(char));
	if (!strnb)
		return (NULL);
	ft_screator(n, strnb, len);
	return (strnb);
}
/*
int	main()
{
	int test[] = {0, 5, -5, 10, -10, 12345, -12345, INT_MAX, INT_MIN};
	char * str; 
	int i = 0;
    
	while (i < 10) 
	{
		str = ft_itoa(test[i]);
		printf("%d -> %s\n", test[i], str);
		free(str);
		i++;
	}
	return (0);
}

int	main()
{
	int		n;
	char	*str;

	n = 0;
	str = ft_itoa(n);
	if (!str)
		return (1);
	printf("%s", str); 
	free(str);
	return (0);
}*/
