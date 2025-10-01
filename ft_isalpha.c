#include "libft.h"
//#include <stdio.h>

int	ft_isalpha(int	c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
/*
int	main()
{
	int	c = '*';
	printf("c = %d\n", c);
	printf("c = %c it's alpha? = %d", c, ft_isalpha(c));
	return (0);
}*/
