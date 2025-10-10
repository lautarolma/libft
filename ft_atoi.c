#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int sign;
	int nmb;

	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	sign = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	nmb = 0;
	while (ft_isdigit(nptr[i]))
	{
		nmb = (nmb * 10) + (nptr[i] - '0');
		i++; 
	}
	return (nmb * sign);
}

int	main()
{
	const char	str[]	= "\t\n -32- -132505";
	const char	*nptr	= str;

	printf("%d\n", ft_atoi(nptr));
	return (0);
}
