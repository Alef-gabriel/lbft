/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algabrie <alefgabrielr@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:06:58 by algabrie          #+#    #+#             */
/*   Updated: 2021/09/14 18:06:59 by algabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
