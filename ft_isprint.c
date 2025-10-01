#include "libft.h"
//#include <stdio.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*
int	main()
{
	unsigned char c = 'x';
	printf("%c It's an printable caracter? = %d\n", c, ft_isprint(c));
}*/
