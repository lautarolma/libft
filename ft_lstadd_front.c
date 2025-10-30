/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:40:29 by laviles           #+#    #+#             */
/*   Updated: 2025/10/28 20:35:28 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*tmp_node;

	if (!lst || !*lst || !new)
		return ;
	tmp_node = *lst;
	*lst = new;
	new->next = tmp_node;
}
/*
int	main()
{
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
	i = 0;
	current = root;
	printf("\n=====Contenido de la lista original=====\n");
	while (current)
	{
		printf("El nodo%d contiene: %d\n", i, *(int *)current->content);
		current = current->next;
		i++;
	}
	new_front = ft_lstnew(&val4);
	ft_lstadd_front(&root, new_front);
	printf("\n=====Contenido de la lista afther swap=====\n");
	current = root;
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
