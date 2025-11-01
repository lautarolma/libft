/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:27:06 by laviles           #+#    #+#             */
/*   Updated: 2025/11/01 18:44:55 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_trimmer(char const *s1, char *trimmed, size_t start, size_t end)
{
	int		i;

	i = 0;
	while (start < end)
		trimmed[i++] = s1[start++];
	trimmed[i] = '\0';
	return (trimmed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	if ((!s1 || !set) || (!s1 && !set))
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	if (start >= end)
		return (ft_calloc(1, sizeof(char)));
	trimmed = malloc((end - start + 1));
	if (!trimmed)
		return (NULL);
	ft_trimmer(s1, trimmed, start, end);
	return (trimmed);
}
/*
int	main()
{
	const char	src[]		= "+-+-+-+He+-llo World+-+-+";
	//char s1[] = "";
	const char	target[]	= "+-";
	char		*trimmed	= ft_strtrim(src, target);

	printf("%s\n", trimmed);
	free(trimmed);
	return (0);
}*/
