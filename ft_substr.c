#include "libft.h"

static char	*ft_pnull(void)
{
	char	*np;

	np = (char *)malloc(1);
	np[0] = 0;
	return (np);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	int		i;
	size_t	max;

	i = 0;
	max = ft_strlen(s);
	if (start > max)
		return (ft_pnull());
	if (len >= max)
		len = max + 1;
	p = (char *)malloc(len);
	while (len - i && s[start])
	{
		p[i] = s[start];
		i++;
		start++;
	}
	p[i] = 0;
	return (p);
}
