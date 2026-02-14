#include <unistd.h>

int	its_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	its_uper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	int	i = 1;
	int	j = 0;

	if (ac > 1)
	{
		while (av[i]) 
		{
			while (av[i][j])
			{
				if (its_uper(av[i][j]))
					av[i][j] += 32;
				if (j == 0 && its_lower(av[i][j])) 
					av[i][j] -= 32;
				else if ((its_lower(av[i][j]) && av[i][j - 1] == ' ') || (av[i][j -1] == '\t'))
					av[i][j] -= 32;
				write(1, &av[i][j], 1);
				j++;
			} 
			write(1, "\n", 1);
			i++;
			j = 0;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
