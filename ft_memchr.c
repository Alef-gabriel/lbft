#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (NULL);
	while (n - i)
	{
		if (*(char *)(s + i) == (char) c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
