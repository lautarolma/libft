#include "libft.h"

void	ft_print_bits(unsigned char octet)
{
	unsigned char	bit;
	int				i;

	i = 7;
	while (i >= 0)
	{
		bit = (octet >> i) % 2 + '0';
		write(1, &bit, 1);
		i--;
	}
}
/*
int	main(void)
{
	unsigned char octet = 5;

	ft_print_bits(octet);
	write(1, "\n", 1);
	return (0);
}	
*/