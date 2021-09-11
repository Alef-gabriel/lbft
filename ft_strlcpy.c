#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	cont;

	cont = 0;
	if (size > 0)
	{
		while ((size - 1) - cont && src[cont])
		{
			dst[cont] = src[cont];
			cont++;
		}
		dst[cont] = 0;
	}
	while (src[cont])
		cont++;
	return (cont);
}
