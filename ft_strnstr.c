/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algabrie <alefgabrielr@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:08:48 by algabrie          #+#    #+#             */
/*   Updated: 2021/09/14 18:08:49 by algabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	if (!s1 || !s2)
		return (NULL);
	if (!s2 || !s2[0])
		return ((char *)s1);
	i = 0;
	while (n - i && s1[i])
	{
		j = 0;
		while (s1[j + i] == s2[j] && i + j < n)
		{
			if (s2[j + 1] == 0)
				return ((char *)(s1 + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
