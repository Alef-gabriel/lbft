#include "libft.h"

static int	ft_size(const char *s)
{
	int	cont;

	cont = 0;
	while (s[cont])
		cont++;
	return (cont);
}

char	*ft_strdup(const char *s)
{
	char	*p;
	int		size;
	int		i;

	i = 0;
	size = ft_size(s);
	p = (char *)malloc(size + 1);
	while (size - i)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = 0;
	return (p);
}
