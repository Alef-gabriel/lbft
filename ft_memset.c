#include "libft.h"

void	*ft_memset(void *arr, int c, size_t size)
{
	int	cont;

	cont = 0;
	while (size - cont)
	{
		*(char *) arr = c;
		arr++;
		cont++;
	}
	return ((void *) arr - cont);
}
