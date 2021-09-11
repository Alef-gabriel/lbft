#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*p;
	int		i;

	i = 0;
	p = ft_itoa(n);
	while (p[i])
	{
		write(fd, p + i, 1);
		i++;
	}
	free (p);
}
