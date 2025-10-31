#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!lst || !f)
		return ;
	tmp = lst;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}
/*
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
	ft_lstiter(node0, f);
	current = node0;
	while (current)
	{
		printf("%c\n", *((char *)node0->content));
		current = node0->next;
		free(node0);
		node0 = current;
	}
	return (0);
}*/
