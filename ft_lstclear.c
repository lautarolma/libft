/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laviles <laviles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 01:27:39 by laviles           #+#    #+#             */
/*   Updated: 2025/10/29 02:17:38 by laviles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
}
/*
void	del(void *i)
{
	free(i);
}

int	main()
{
	int			i;
	t_list		*current;
	t_list		*new1;
	t_list		*new2;
	t_list		*new3;
	const char	*val1;
	const char	*val2;
	const char	*val3;

	val1 = ft_strdup("aa");
	if (!val1)
		return (ft_putstr_fd("Alocation error" ,2), 1);
	val2 = ft_strdup("bb");
	if (!val2)
		return (ft_putstr_fd("Alocation error" ,2), 1);
	val3 = ft_strdup("cc");
	if (!val3)
		return (ft_putstr_fd("Alocation error" ,2), 1);
	new1 = ft_lstnew((void *)val1);
	if (!new1)
		return (ft_putstr_fd("Error: alocation", 2), 1);
	new2 = ft_lstnew((void *)val2);
	if (!new2)
		return (ft_putstr_fd("Error: alocation", 2), 1);
	new3 = ft_lstnew((void *)val3);
	if (!new3)
		return (ft_putstr_fd("Error: alocation", 2), 1);
	new1->next = new2;
	new2->next = new3;
	new3->next = NULL;
	current = new1;
	i = 1;
	printf("\n=====Contenido de la lista original=====\n");
	while (current)
	{
		printf("El nodo new%d contiene: %s\n", i, (char *)current->content);
		current = current->next;
		i++;
	}
	ft_lstclear(&new1, del);
	current = new1;
	i = 1;
	printf("\n=====Contenido de la lista despues de ft_lstclear=====\n");
	while (current)
	{
		printf("El nodo new%d contiene: %s\n", i, (char *)current->content);
		current = current->next;
		i++;
	}
	//
	while (new1)
	{
		current = new1->next;
		free(new1->content);
		free(new1);
		new1 = current;
	}
	return (0);
}*/
