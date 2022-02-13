/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algabrie <alefgabrielr@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:09:10 by algabrie          #+#    #+#             */
/*   Updated: 2021/09/14 18:09:11 by algabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		len = max - start;
	p = (char *)malloc(len + 1);
	while (len - i && s[start])
	{
		p[i] = s[start];
		i++;
		start++;
	}
	p[i] = 0;
	return (p);
}
