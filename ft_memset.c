/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algabrie <alefgabrielr@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:06:37 by algabrie          #+#    #+#             */
/*   Updated: 2021/09/14 18:06:38 by algabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *arr, int c, size_t size)
{
	int	cont;

	cont = 0;
	while (size - cont)
	{
		*(char *) arr = c;
		arr++;
		cont++;
	}
	return ((void *) arr - cont);
}
