/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algabrie <alefgabrielr@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:07:25 by algabrie          #+#    #+#             */
/*   Updated: 2021/09/14 18:07:26 by algabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
