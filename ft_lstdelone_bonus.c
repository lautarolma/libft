/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 00:27:25 by laviles           #+#    #+#             */
/*   Updated: 2025/10/31 22:55:54 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void	del(void *i)
{
	free(i);
}

int	main()
{
	t_list		*new1;
	const char	*val2;

	val2 = ft_strdup("aa");
	if (!val2)
		return (ft_putstr_fd("Alocation error" ,2), 1);
	new1 = ft_lstnew((void *)val2);
	if (!new1)
		return (ft_putstr_fd("Error: alocation", 2), 1);
	printf("El nodo contiene: %s\n", (char *)new1->content);
	ft_lstdelone(new1, del);
	return (0);
}*/
