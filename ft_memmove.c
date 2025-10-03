#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*start;
	size_t		i;

	start = (unsigned char *)dest;
	if (n == 0)
		return (dest);
	i = 0;
	if (dest > src)
	{
		while (n >= 1)
		{
			start[n - 1] = ((const char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			start[i] = ((const char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main()
{
	char		str[]	=  "Hello world";
	void		*dest = &str[4];
	const void	*src = &str[0];
	size_t		n = 6;

	printf("src = %s\n", (char *)src);
	printf("dest = %s\n", (char *)memmove(dest, src, n * sizeof(char)));
	return (0);
}*/
