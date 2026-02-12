#include <unistd.h>

void	ft_putnmb(int n)
{
	if (n > 9)
		ft_putnmb(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

void	paramsum(char **av)
{
	int		i = 0;

	while (av[i])
		i++;
	i--;
	ft_putnmb(i);
}

int	main(int ac, char **av)
{
	if (ac > 1)
		paramsum(av);
	if (ac == 1)
		write(1, "0", 1);
	return (write(1, "\n", 1), 0);
}
