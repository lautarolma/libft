#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*end;

	end = (char *)s + ft_strlen(s);
	while (end > s)
	{
		if (*end == c)
			return (end);
		end--;
	}
	return (NULL);
}
/*
int	main()
{
	const char	s[] = "asxfgxxcvfvb";
	int			c	= 'x';

	printf("%s", ft_strrchr(s, c));
	return (0);
}*/
