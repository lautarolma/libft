#include <stdlib.h>
#include <unistd.h>

void	print_ptr(char *w_ptr, int w_start_i, int w_end_i)
{
	while (w_start_i <= w_end_i)
	{
		write(1, &w_ptr[w_start_i], 1);
		w_start_i++;
	}
}

int	its_space(char c)
{
	return (c == ' ' || c == '\t');
}

int	main(int ac, char **av)
{
	int		start_idx;
	int		end_idx;
	int		i = 0;

	if (ac == 2)
	{
		while (av[1][i])
			i++;
		i--;
		while(i >= 0)
		{
			while (i >= 0 && its_space(av[1][i]))
				i--;
			end_idx = i;
			while (i >= 0 && !its_space(av[1][i]))
				i--;
			start_idx = i + 1;
			print_ptr(av[1], start_idx, end_idx);
			i--;
		if (i >= 0)
			write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
