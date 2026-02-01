#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	if (!s1 || !s2)
		return (0);
	while (*tmp1 == *tmp2 && *tmp1 != 0)
	{
		tmp1++;
		tmp2++;
	}
	return (*tmp1 - *tmp2);
}
/*
int	main()
{
	const char	s1[]	= "asdf";
	const char	s2[]	= "asdf'";
	size_t		n	= 7;

	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}*/
