/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 23:16:23 by laviles           #+#    #+#             */
/*   Updated: 2025/10/28 23:41:14 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;

	if (!lst)
		return (0);
	size = 1;
	while (lst->next != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
/*
int	main()
{
	int		size;
	t_list	*current;
	t_list	*root;
	t_list	*new1;
	t_list	*new2;
	int		val1;
	int		val2;
	int		val3;

	val1 = 54;
	val2 = 2;
	val3 = -2;
	val4 = 345;
	root = ft_lstnew(&val1);
	if (!root)
		return (ft_putstr_fd("Error: alocation", 2), 1);
	current = root;
	new1 = ft_lstnew(&val2);
	if (!new1)
		return (ft_putstr_fd("Error: alocation", 2), 1);
	root->next = new1;
	new2 = ft_lstnew(&val3);
	if (!new2)
		return (ft_putstr_fd("Error: alocation", 2), 1);
	new1->next = new2;
	new2->next = NULL;
	current = root;
	size = ft_lstsize(current);
	printf("La lista tiene %d nodos de size\n", size);
	while (root)
	{
		current = root->next;
		free(root);
		root = current;
	}
	return (0);
}*/
