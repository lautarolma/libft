#include <unistd.h>

void	ft_puthexa(unsigned int n)
{
	if (n >= 16)
		ft_puthexa(n / 16);
	write(1, &"0123456789abcdef"[n % 16], 1);
}

int	main(int ac, char **av)
{
	unsigned int	n = 0;
	int				i = 0;

	if (ac != 2)
		return (write(1, "\n", 1), 1);
	while (av[1] && av[1][i] >= '0' && av[1][i] <= '9')
	{
		n = (n * 10) + (av[1][i] - '0');
		i++;
	}
	ft_puthexa(n);
	write(1, "\n", 1);
	return (0);
}
