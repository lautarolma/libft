/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 22:02:24 by laviles           #+#    #+#             */
/*   Updated: 2025/10/07 22:02:27 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isascii(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
int	main()
{
	unsigned char c = '2';
	printf("%c, It's ASCII? = %d\n", c,ft_isascii((unsigned char) c));
	return (0);
}*/
