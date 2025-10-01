#include "libft.h"
//#include <stdio.h>

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
/*
int	main()
{
	unsigned char	c = 'U';
	printf("%c is alphanumeric? = %d", c, ft_isalnum(c));
	return (0);
}*/
