#include "libft.h"
//#include <stdio.h>
//#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	const void*	str1 = "ASDFGHJ";
	const void*	str2 = "ASDFGJKL";
	size_t		n = 5;
	printf("Result = %d\n",ft_memcmp(str1, str2, n));
	return (0);
}*/
