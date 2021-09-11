#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	int				len;
	unsigned int	cont;

	len = ft_strlen(s);
	p = (char *)malloc(len + 1);
	cont = 0;
	while (s[cont])
	{
		p[cont] = f(cont, s[cont]);
		cont++;
	}
	p[cont] = 0;
	return (p);
}
