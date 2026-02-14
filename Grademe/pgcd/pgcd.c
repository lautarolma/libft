#include <stdlib.h>
#include <stdio.h>

/*
int	ft_atoi(char *str)
{
	int	i = 0;
	int	n = 0;

	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			n = (n * 10) + (str[i] -'0');
	}
	return (n);
}
*/
int	main(int ac, char **av)
{
	int	a;
	int	b;
	int	tmp;

	if(ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		if (a && b)
		{
			while (b != 0)
			{
				tmp = b;
				b = a % b;
				a = tmp;
			}
			printf("%d", a);
		}
	}
	printf("\n");
}
