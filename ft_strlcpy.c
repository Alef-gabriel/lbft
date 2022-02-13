/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algabrie <alefgabrielr@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:07:52 by algabrie          #+#    #+#             */
/*   Updated: 2021/09/14 18:07:54 by algabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	cont;

	cont = 0;
	if (size > 0)
	{
		while ((size - 1) - cont && src[cont])
		{
			dst[cont] = src[cont];
			cont++;
		}
		dst[cont] = 0;
	}
	while (src[cont])
		cont++;
	return (cont);
}
