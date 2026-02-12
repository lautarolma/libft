#include <unistd.h>

void	ft_putnbr(int nmb)
{
	long	n;

	n = (long)nmb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int	ft_atoi(char *str)
{
	long	n;
	int		sign;

	n = 0;
	sign = 1;
	while (*str >= 7 && *str <= 13)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		n = (n * 10) + (*str - '0');
		str++;
	}
	return (n * sign);
}

int	its_prime(int n)
{
	int		div;
	
	div = 2;
	if (n < 2)
		return (0);
	while (div <= n/2)
	{
		if (n % div == 0)
			return (0);
		div++;
	}
	return (1);
}
/*
int	main(int ac, char **av)
{
	int		nbr;
	int		sum = 0;
	int		prime = 2;

	if (ac == 2 && ft_atoi(av[1]) >= 0)
	{
		nbr = ft_atoi(av[1]);
		while (prime <= nbr)
		{
			if (its_prime(prime))
				sum += prime;
			prime++;
		}
		ft_putnbr(sum);
		write(1, "\n", 1);
		return (0);
	}
	write(1, "0\n", 2);
	return (1);
}*/
