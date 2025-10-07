#include "libft.h"
//#include <stdio.h>
//#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = 0;
	src_len = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	if (dst_len >= size)
		return (size + ft_strlen(src));
	while ((dst_len + src_len < size -1) && src[src_len])
	{
		dst[dst_len + src_len] = src[src_len];
		src_len++;
	}
	dst[dst_len + src_len] = '\0';
	return (dst_len + ft_strlen(src));
}
/*
int	main()
{
	const char	str_src[]	= " mundo";
	char		str_dst[22] = "Hola";
	size_t		size		= 22;
	const char	*p_src		= str_src;
	char		*p_dst		= str_dst;

	printf("lengt = %ld\n", ft_strlcat(p_dst, p_src, size));
	printf("Dst = %s\n", p_dst);

	return (0);
}*/
