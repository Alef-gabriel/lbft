/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algabrie <alefgabrielr@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:07:37 by algabrie          #+#    #+#             */
/*   Updated: 2021/09/14 18:07:38 by algabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cont(char const *s)
{
	int	cont;

	cont = 0;
	while (s[cont])
		cont++;
	return (cont);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*p;
	int		j;

	i = 0;
	j = 0;
	p = (char *)malloc(cont(s1) + cont(s2) + 1);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = 0;
	return (p);
}
