#include "libft.h"
//#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*tmp;
	size_t	i;

	tmp = (char)*s;
	i = 0;
	while (i < n)
	{
		tmp[i] = c;
		i++;
	}
	return (s);
}
/*
int	main()
{
	char	str[] = "Hell, no again!";
	void*	s = &str;
	int		c = '0';
	size_t	n = 3;

	printf("Antes str = %s\n", (char*)s);
	ft_memset(s, c, n);
	printf("Antes str = %s\n", (char*)s);
	return (0);
}*/
