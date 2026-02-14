#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int i = 0;
	int	max;
	int min;
	int	size;
	int *range;

	if (start > end)
	{
		max = start;
		min = end;
	}
	else
	{
		max = end;
		min = start;
	}
	size = max - min;
	range = malloc(size * sizeof(int));
	while ((size - i) >= 0)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
int	main()
{
	int	start = -2;
	int	end = 5;

	printf("%d\n"ft_rrange(start, end));
	return (0);
}
