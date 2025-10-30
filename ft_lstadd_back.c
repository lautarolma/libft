/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 23:51:05 by laviles           #+#    #+#             */
/*   Updated: 2025/10/29 00:26:51 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !*lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
}
/*
int	main()
{
	t_list	*current;
	t_list	*root;
	t_list	*new1;
	t_list	*new2;
	t_list	*new_back;
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
	i = 0;
	current = root;
	printf("\n=====Contenido de la lista original=====\n");
	while (current)
	{
		printf("El nodo%d contiene: %d\n", i, *(int *)current->content);
		current = current->next;
		i++;
	}
	new_back = ft_lstnew(&val4);
	current = root;
	ft_lstadd_back(&root, new_back);
	current = root;
	printf("\n=====Contenido de la lista afther swap=====\n");
	i = 0;
	while (current)
	{
		printf("El nodo%d contiene: %d\n", i, *(int *)current->content);
		current = current->next;
		i++;
	}
	while (root)
	{
		current = root->next;
		free(root);
		root = current;
	}
	return (0);
}*/
