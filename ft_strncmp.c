#include "libft.h"

static int	t_char(char c1, char c2)
{
	if ((unsigned char)c1 != (unsigned char)c2)
		return ((unsigned char)c1 - (unsigned char)c2);
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	cont;

	cont = 0;
	while (n - cont && (s1[cont] && s2[cont]))
	{
		if (t_char(s1[cont], s2[cont]))
			return (s1[cont] - s2[cont]);
		cont++;
	}
	if (cont < n)
		return (t_char(s1[cont], s2[cont]));
	return (0);
}
