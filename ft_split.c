#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_wstart(char const *s, char c)
{
	size_t	i;
	char	*start;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if ((s[i] != c && i == 0) || (s[i] != c && s[i - 1] == c))
		{
			start = (char *)(s + i);
			return (start);
		}
		i++;
	}
	return (NULL);
}

size_t	ft_wlen(char *start, char c)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (start[i++] != c)
		len++;
	return (len);
}

void	ft_walocator(char **array, char *start, size_t len, size_t i) 
{
	array[i] = ft_substr(start, 0, len + 1);
	if (!array[i])
	{
		while ((int)i >=0)
		{
			free (array[i]);
			i--;
		}
		free (array);
	}
	i++;
	start += len;
}

char	**ft_split(char const *s, char c)
{
	char		**array;
	char		*start;
	size_t		nwords;
	size_t		i;
	size_t		len;

	if (!s)
		return (NULL);
	nwords = 0;
	len = 0;
	while (s[len])
	{
		if ((s[len] != c && len == 0) || (s[len] != c && s[len - 1] == c))
			nwords++;
		len++;
	}
	array = malloc((nwords + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	while (i < nwords)
	{
		start = ft_wstart(s, c);
		len = ft_wlen(start, c);
		ft_walocator(array, start, len, i);
		i++;
	}
	return (array);
}

int main()
{
	char const	*str = "Despair, Hangover & Ecstasy";
	char		c = ' ';
	char	**split = ft_split(str, c);
	size_t	i = 0;

	while (split[i])
	{
		printf("%ld %s\n", i, split[i]);
		i++;
	}
	return (0);
}

//Contador de palabras = nwords
//Heap manager = memalocator
//
