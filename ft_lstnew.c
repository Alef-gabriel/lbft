#include "libft.h"

t_list  *ft_lstnew(void *content)
{
	t_list	*p;

	p = (t_list *)malloc(sizeof(t_list));
	p->content = content;
	p->next = NULL;
	return (p);
}
