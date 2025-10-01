#include "libft.h"
//#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*int	main()
{
	unsigned char c = '0';
	printf("%c its = %c", c, ft_toupper(c));
	return (0);
}*/
