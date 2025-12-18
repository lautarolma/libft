/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:49:49 by laviles           #+#    #+#             */
/*   Updated: 2025/12/18 18:34:28 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strpbrk(const char *s1, const char *s2)
{
	int		j;

	while (*s1)
	{
		j = 0;
		while (s2[j])
		{
			if (*s1 == s2[j])
				return (s1);
			j++;
		}
		s1++;
	}
	return (NULL);
}
/*
int main(void)
{
    const char *s1 = "Only for you";
    const char *set1 = "aeiou"; // Busca la primera vocal
    const char *set2 = "*+/";   // No existe en s1
    const char *set3 = " -";    // Busca espacios o guiones

    printf("--- TEST FT_STRPBRK ---\n");
    printf("String original: \"%s\"\n", s1);

    printf("\nCaso 1 (Buscando vocales '%s'):\n", set1);
    printf("Resultado real:     '%s\n", ft_strpbrk(s1, set1));

    printf("\nCaso 2 (Buscando inexistentes '%s'):\n", set2);
    if (ft_strpbrk(s1, set2) == NULL)
        printf("Resultado: NULL (Correcto)\n");

    printf("\nCaso 3 (Buscando espacios/guion '%s'):\n", set3);
    const char *res = ft_strpbrk(s1, set3);
    printf("Encontrado: \"%s\"\n", res);

    return (0);
}*/
