#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	if (start >= end)
		return (ft_calloc(1, sizeof(char)));
	while (end > start && ft_strchr(set, s1[end -1]))
		end--;
	trimmed = malloc((end - start + 1) * sizeof(char));
	if (!trimmed)
		return (NULL);
	i = -1;
	while ((start + ++i) < end)
		trimmed[i] = s1[start + i];
	trimmed[i + 1] = '\0';
	return (trimmed);
}
/*
int	main()
{
	const char	src[]		= "+-+-+-+Hello World+-+-+"; // de start=7 a end n=17
	const char	target[]	= "+-";
	char		*trimmed	= ft_strtrim(src, target);

	printf("%s", trimmed);
	free(trimmed);
	return (0);
}*/
