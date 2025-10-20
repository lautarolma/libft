/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:59:13 by laviles           #+#    #+#             */
/*   Updated: 2025/10/20 15:00:00 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*fstr;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	fstr = ft_calloc(len + 1, 1);
	if (!fstr)
		return (NULL);
	i = -1;
	while (s[++i])
		fstr[i] = f(i, s[i]);
	return (fstr);
}
/*
char	ft_to_upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

int	main()
{
	char const	*s = "";
	char		*fstr = ft_strmapi(s, ft_to_upper);
	
	(void)s;
	if (fstr)
	{
		printf("s* Afther strmapi -> %s", fstr);
		free(fstr);
	}	
	return (0);
}*/
