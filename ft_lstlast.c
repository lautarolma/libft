/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 23:42:01 by laviles           #+#    #+#             */
/*   Updated: 2025/10/28 23:50:42 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int	main()
{
	t_list	*end;
	t_list	*current;
	t_list	*root;
	t_list	*new1;
	t_list	*new2;
	t_list	*new_front;
	int		i;
	int		val1;
	int		val2;
	int		val3;
	int		val4;

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
	end = ft_lstlast(current);
	printf("El ultimo nodo de la lista contiene %d\n", *(int *)end->content);
	while (root)
	{
		current = root->next;
		free(root);
		root = current;
	}
	free(root);
	return (0);
}*/
