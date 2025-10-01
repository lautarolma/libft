#include "libft.h"
//#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
int	main()
{
	int c = EOF;
	printf("%c will be %c\n",c , ft_tolower((unsigned char)c));
}*/
