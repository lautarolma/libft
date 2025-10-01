#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void*	ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;

	i = 0;

	while (i < n)
	{
		((unsigned char*)dest)[i] = ((const unsigned char*)src)[i];
		i++;
	}
	return (dest);	
}
/*
int		main()
{
	char str[] = "ABCDEFGHIJK";
	void*	dest = &str[5];
	void*	src = &str[0];
	size_t	n = 4;

	printf("src = %s\n", (char*)src);
	printf("dst = %s\n",(char*)ft_memcpy(dest, src, n));
	return(0);	
}*/
