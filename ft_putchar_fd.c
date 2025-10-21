/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:17:54 by laviles           #+#    #+#             */
/*   Updated: 2025/10/20 17:18:56 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main()
{
	int	fd_rw;

	fd_rw = open("blue.txt", O_RDWR);
	ft_putchar_fd('t', fd_rw);
	printf("fd value %d\n", fd_rw);
	return (0);
}*/
