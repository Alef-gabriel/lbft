#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	*p;

	p = (int *)malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nmemb);
	return ((void *)p);
}
