#include "libft.h"
//#include <stdio.h>

int	ft_isalpha(int	c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
int	main()
{
	int	c = '*';
	printf("c = %d\n", c);
	printf("c = %c it's alpha? = %d", c, ft_isalpha(c));
	return (0);
}*/
