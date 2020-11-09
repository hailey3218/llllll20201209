/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang </var/mail/hbang@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 18:22:49 by hbang             #+#    #+#             */
/*   Updated: 2020/11/09 18:23:28 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t size)
{
	unsigned char *buff;
	size_t i;

	i = 0;
	*buff = malloc(size);
	while (i < size)
	{
		buff[i] = ((unsigned char*)src)[i];
		++i;
	}
	i = 0;
	while (i < size)
	{
		((unsigned char*)dest)[i] = ((unsigned char*)buff)[i];
		++i;
	}
	free(buff);
	buff = NULL;
	return (dst);
}
