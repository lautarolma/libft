/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:48:40 by laviles           #+#    #+#             */
/*   Updated: 2025/10/21 03:02:58 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>

size_t	ft_nwords(const char *s, char c)
{
	size_t	i;
	size_t	nwords;

	nwords = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] != c && i == 0) || (s[i] != c && s[i - 1] == c))
			nwords++;
		i++;
	}
	return (nwords);
}

size_t	ft_wstart(char *start, char c)
{
	size_t	i;

	i = 0;
	while (start[i] && start[i] == c)
		i++;
	return (i);
}

size_t	ft_wlen(char *start, char c)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (start[i] && start[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

char	*ft_walocator(char **array, char *start, size_t len, size_t i)
{
	array[i] = ft_substr(start, 0, len);
	if (!array[i])
	{
		while ((int)i >= 0)
		{
			free (array[i]);
			i--;
		}
		free (array);
		start = NULL;
		return (start);
	}
	i++;
	start += len;
	return (start);
}

char	**ft_split(char const *s, char c)
{
	char		**array;
	char		*start;
	size_t		nwords;
	size_t		i;
	size_t		len;

	if (s == NULL)
		return (NULL);
	nwords = ft_nwords(s, c);
	array = malloc((nwords + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = -1;
	array[nwords] = NULL;
	start = (char *)s;
	while (++i < nwords)
	{
		start = &start[ft_wstart(start, c)];
		len = ft_wlen(start, c);
		start = ft_walocator(array, start, len, i);
		if (!start)
			return (NULL);
	}
	return (array);
}
/*
int main()
{
	char const	*str = "  Don't  said words   you're going to   regreat  ";
	char		c = ' ';
	char	**split = ft_split(str, c);
	size_t	i = 0;

//	printf("%s\n", (char *)split);
	while (split[i])
	{
		printf("%ld %s\n", i, split[i]);
		i++;
	}
	return (0);
}*/
