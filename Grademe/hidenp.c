#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	j = 0;
	char	*str1 = argv[1];
	char	*str2 = argv[2];

	if (argc == 3)
	{
		while (str2[j])
		{
			if (str2[j] == str1[i])
				i++;
			if (!str1[i])
				 return (write(1, "1\n", 2), 0);
			j++;
		}
		write(1, "0", 1);
	}
	return (write(1, "\n", 1), 0);
}
