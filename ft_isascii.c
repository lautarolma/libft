#include "libft.h"
//#include <stdio.h>

int	ft_isascii(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
int	main()
{
	unsigned char c = '2';
	printf("%c, It's ASCII? = %d\n", c,ft_isascii((unsigned char) c));
	return (0);
}*/
