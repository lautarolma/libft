/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:51:13 by laviles           #+#    #+#             */
/*   Updated: 2025/10/20 18:51:59 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
//#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	*nb;
	int		len;

	nb = ft_itoa(n);
	if (!nb)
		return ;
	len = ft_strlen(nb);
	write(fd, nb, len);
	free(nb);
}
/*
int	main()
{
	int	n	= 6;
	int	fd	= open("blue.txt", O_RDWR);
	ft_putnbr_fd(n, fd);
	printf("%d\n", close(fd));
}*/
