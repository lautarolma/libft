#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *)s == c)
			return ((unsigned char *)s);
		s++;
		n--;
	}
	return (NULL);
}
/*
int	main()
{
	char		str[] = "asdfghj";
	size_t		n = 4;
	const void	* p = &str;
	int			c = 'd';

	printf("%s\n", (unsigned char *)ft_memchr(p, c, n));
	return (0);
}*/
