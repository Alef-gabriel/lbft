#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list		*p;

	p = *lst;
	while (p != NULL)
	{
		del(p->content);
		p = p->next;
	}
	*lst = NULL;
}
