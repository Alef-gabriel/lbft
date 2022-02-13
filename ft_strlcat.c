/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algabrie <alefgabrielr@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:07:43 by algabrie          #+#    #+#             */
/*   Updated: 2021/09/14 18:07:45 by algabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlength;
	size_t	slength;

	slength = ft_strlen(src);
	dlength = ft_strlen(dst);
	j = dlength;
	i = 0;
	if (dlength < size - 1 && size > 0)
	{
		while (src[i] && dlength + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dlength >= size)
		dlength = size;
	return (dlength + slength);
}
