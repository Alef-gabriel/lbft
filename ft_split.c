#include "libft.h"

static int	ft_trima(char const *s, char c, int i)
{
	while (s[i] == c)
		i++;
	return (i);
}

static int	ft_cphrase(char const *s, char c)
{
	int		cont;
	int		i;

	i = ft_trima(s, c, 0);
	if (s[i] != c && s[i] != 0)
		cont = 1;
	else
		cont = 0;
	while (s[i])
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != 0))
			cont++;
		i++;
	}
	return (cont);
}

static char	*ft_append(char const *s, int size, int pos)
{
	char	*p;
	int		i;

	i = 0;
	p = (char *)malloc(size + 1);
	if (!p)
		return (0);
	p[size] = 0;
	while (size)
	{
		p[i] = s[pos - size];
		i++;
		size--;
	}
	return (p);
}

static void	ft_engine(char const *s, char c, char **split)
{
	int		pos;
	int		size;
	int		i;

	i = 0;
	size = 0;
	pos = ft_trima(s, c, 0);
	while (s[pos])
	{
		if (s[pos] == c || pos + 1 == (int)ft_strlen(s))
		{
			if (pos + 1 == (int)ft_strlen(s) && !(ft_trima(s, c, pos) > pos))
			{
				size++;
				pos++;
			}
			split[i++] = ft_append(s, size, pos);
			pos = ft_trima(s, c, pos);
			size = 0;
		}
		if (s[pos] != c)
			size++;
		pos++;
	}
	split[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	split = (char **)malloc(sizeof(char *) * (ft_cphrase(s, c) + 1));
	ft_engine(s, c, split);
	return (split);
}
