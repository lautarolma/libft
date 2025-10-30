#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*root_nl;
	t_list	*newlst;

	if (!lst || !*f)
		return (NULL);
	current = lst;
	newlst = ft_lstnew("X");
	root_nl = newlst;
	if (!newlst)
		return (NULL);
	while (current)
	{
		newlst->content = f(current->content);
			if (!newlst)
				ft_lstclear(&newlst, del); 
		current = current->next;
	}
	return (root_nl);
}

void	del(void *i)
{
	free(i);
}

int	ft_n_toupper(void *p)
{
	char	*c;

	c = (char *)p;
	if (*c >= 'a' && *c <= 'z')
	{
		*c -= 32;
		return (*c);
	}
	else
		return (*c);
}

int	main()
{
	t_list	*new_node;
	t_list	*current;
	t_list	*node0;
	t_list	*node1;
	t_list	*node2;
	int		val0	= 'a';
	int		val1	= 'b';
	int		val2	= 'c';
	void	*f		= &ft_n_toupper;

	node0 = ft_lstnew(&val0);
	if (!node0)
		return (ft_putstr_fd("Alocating error", 2), 1);
	node1 = ft_lstnew(&val1);
	if (!node1)
		return (ft_putstr_fd("Alocating error", 2), 1);
	node0->next = node1;
	node2 = ft_lstnew(&val2);
	if (!node2)
		return (ft_putstr_fd("Alocating error", 2), 1);
	node1->next = node2;
	node2->next = NULL;
	new_node = ft_lstmap(node0, f, del);
	current = node0;
	while (current)
	{
		printf("Nodo Original: %c\n", *((char *)node0->content));
		printf("Nodo new: %c\n", *((char *)new_node->content));
		current = node0->next;
		free(node0);
		node0 = current;
	}
	return (0);
}
