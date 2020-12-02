/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:45:04 by hbang             #+#    #+#             */
/*   Updated: 2020/12/02 22:37:47 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t size)
{
	unsigned char	*dest;
	size_t			i;

	i = 0;
	if (dst == src || size == 0)
		return (dst);
	dest = (unsigned char *)dst;
	if (dest < (unsigned char *)src)
	{
		while (i < size)
		{
			dest[i] = ((unsigned char*)src)[i];
			i++;
		}
	}
	else if ((dest > (unsigned char *)src))
	{
		while (i < size)
		{
			dest[size - i - 1] = ((unsigned char*)src)[size - i - 1];
			i++;
		}
	}
	return (dst);
}
