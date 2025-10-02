#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	if (size == 0)
		return (ft_strlen(src));
	ft_memcpy(dst, src, size - 1);
	dst[size - 1] = '\0';
	return (ft_strlen(src));
}
/*
int	main()
{
	size_t			size			= 7;
	const char		str[]			= "Hola mundo";
	const char*		src				= str;
	char			str_dst[14] = {0};
	char*			dst				= str_dst;
	
	printf("dst = %s\n", dst);
	printf("Size = %ld\n", ft_strlcpy(dst, src, size));
	printf("dst = %s\n", dst);
}*/
