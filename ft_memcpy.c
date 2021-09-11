#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	while (n - i)
	{
		*(char *) dest = *(char *) src;
		dest++;
		src++;
		i++;
	}
	return ((void *) dest - i);
}
