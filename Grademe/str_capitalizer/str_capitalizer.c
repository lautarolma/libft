#include <unistd.h>

void	str_capitalizer(char *str)
{
	int		j = 0;

	while (str[j])
	{
		while (str[j] == ' ' || str[j] == '\t')
		{
			write(1, &str[j], 1);
			j++;
			if ((str[j - 1] == ' ' || str[j - 1] == '\t') && str[j] >= 'a' && str[j] <= 'z')
			{
				str[j] -= 32;
			}
		}
		if (j == 0 && str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] -= 32;
			write(1, &str[j], 1);
			j++;
		}
		if (j != 0 && !(str[j - 1] == ' ' || str[j - 1] == '\t') && str[j] >= 'A' && str[j] <= 'Z')
		{
			str[j] += 32;
		}
		if (str[j])
		{
			write(1, &str[j], 1);
			j++;
		}
	}
}

int	main(int ac, char **av)
{
	int		i = 1;

	if (ac < 2)
		return (write(1, "\n", 1), 1);
	while (av[i])
	{
		str_capitalizer(av[i]);
		write(1, &"\n", 1);
		i++;
	}
}
