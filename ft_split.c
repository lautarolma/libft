/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 00:20:51 by laviles           #+#    #+#             */
/*   Updated: 2025/10/12 05:00:20 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_findwords(char const *s, char c)
{
	size_t	n_words;
	size_t	i;
	char	**array;

	if (!s || !c)
		return (NULL);
	n_words = 0;
	while (s[i])
	{
		if (i == 0 && (s[i] != c || s[i - 1] == c))
			n_words++;
		i++;
	}
	array = malloc((n_words + 1) * sizeof(char));
	if (!array)
		return (NULL);
	array = ft_word_store
}

char **ft_split(char const *s, char c)
{
	
}
int	main()
{
	char const	*s	= "Hello, world, Madrid!";
	char		c	= ", ";
	char		**array_strs

	free (array_strs);
	return (0);	
}
