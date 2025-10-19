#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int i, char *s))
{
	unsigned int	i;

	if (!s || !f)
		return;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	ft_to_upper(unsigned int i, char *s)
{
	(void)i;
	*s = (int)ft_toupper(*s);
}
int	main()
{
	char	s[] = "A tu propio Ritmo";

	ft_striteri(s, ft_to_upper);
	printf("%s\n", s);
	return (0);
}*/
