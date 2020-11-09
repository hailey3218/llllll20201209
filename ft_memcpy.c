/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:33:57 by hbang             #+#    #+#             */
/*   Updated: 2020/11/09 17:37:53 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_ t i;
	
	i = 0;

	while (i < size)
	{
		((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
		++i;
	}
	return (dest);
}
