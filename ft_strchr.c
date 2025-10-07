#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
/*
int	main()
{
	const char	str[]	= "dsfghjmnhvdvjkdw";
	int			c		= 'x';

	printf("%s", ft_strchr(s, c));
}*/
