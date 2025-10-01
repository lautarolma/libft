#include "libft.h"
#include <stdio.h>
#include <string.h>

void*	ft_memmove(void* dest, const void* src, size_t n)
{
	char*		d;
	const char*	s;
	size_t		i;

	if (!dest || !src || n == 0)
		return (dest);

	s = (const char*)src;
	d = (char*)dest;
	i = 0;

	if (d > s)
	{
		while (n)
		{
			d[n-1] = s[n-1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main()
{
	char		str[]	=  "Helo world";
	void*		dest = &str[0];
	const void*	src = &str[0];
	size_t		n = 0;

	printf("src = %s\n", (char*)src);
	printf("dest = %s\n", (char*)ft_memmove(dest, src, n * sizeof(char)));
	return (0);
}*/
