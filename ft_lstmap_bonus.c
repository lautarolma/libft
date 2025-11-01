/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 22:50:23 by laviles           #+#    #+#             */
/*   Updated: 2025/11/01 06:34:02 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	void	*new_content;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
/*
void	del(void *i)
{
	free(i);
}

void	*ft_n_toupper(void *p)
{
	char	*result;

	result = ft_strdup((char *)p);
	if (!result)
		return (NULL);
	int i = 0;
	while (result[i])
	{
		result[i] = ft_toupper(result[i]);
		i++;
	}
	return ((void *)result);
}

int	main()
{
	t_list	*new_lst;
	t_list	*current;
	t_list	*node0;
	t_list	*node1;
	t_list	*node2;
	int		val0	= 'a';
	int		val1	= 'b';
	int		val2	= 'c';

	node0 = ft_lstnew(&val0);
	if (!node0)
		return (ft_putstr_fd("Alocating error", 2), 1);
	node1 = ft_lstnew(&val1);
	if (!node1)
		return (ft_putstr_fd("Alocating error", 2), 1);
	node2 = ft_lstnew(&val2);
	if (!node2)
		return (ft_putstr_fd("Alocating error", 2), 1);

	node0->next = node1;
	node1->next = node2;
	node2->next = NULL;

	new_lst = ft_lstmap(node0, ft_n_toupper, del);
	if (!new_lst)
		return (ft_lstclear(&new_lst, del), 1);
	current = node0;
	while (current)
	{
		printf("Nodo Original: %c\n", *((char *)current->content));
		current = current->next;
	}
	current = new_lst;
	while (current)
	{
		printf("Nodo modificado: %c\n", *((char *)current->content));
		current = current->next;
	}
	ft_lstclear(&new_lst, del);
	free (node0);
	free (node1);
	free (node2);
	return (0);
}*/
