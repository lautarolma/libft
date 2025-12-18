/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:37:37 by laviles           #+#    #+#             */
/*   Updated: 2025/12/18 18:23:44 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtok(char *str, char *delim)
{
	static char	*buffer;
	char		*start;

	if (str)
		buffer = str;
	if (!buffer || *buffer == '\0')
		return (NULL);
	while (*buffer && ft_strchr(delim, *buffer))
			buffer++;
	if (*buffer == '\0')
		return (buffer = NULL);
	start = buffer;
	while (*buffer && !ft_strchr(delim, *buffer))
		buffer++;
	if (*buffer != '\0')
	{				
		*buffer = '\0';
		buffer++;
	}
	else
		buffer = (NULL);
	return (start);
}
/*
int main(void)
{
    // Usamos un array de char (modificable), no un string literal
    char str[] = "...Hola...Mundo.esto.es..42.Madrid...";
    char *delim = ".";
    char *token;
    int i = 1;

    printf("--- TEST FT_STRTOK ---\n");
    printf("Cadena a procesar: \"%s\"\n", str);
    printf("Delimitador: \"%s\"\n\n", delim);

    // Primera llamada con la string
    token = ft_strtok(str, delim);
    
    if (!token)
        printf("Error: No se encontró ningún token.\n");

    while (token)
    {
        printf("Token %d: [%s]\n", i++, token);
        // Llamadas sucesivas con NULL
        token = ft_strtok(NULL, delim);
    }

    printf("\nFin del test. Si el Token 1 fue 'Hola' y el último 'Madrid', es correcto.\n");
    return (0);
}*/
