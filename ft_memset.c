/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:01:57 by hbang             #+#    #+#             */
/*   Updated: 2020/11/27 14:42:22 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int val, size_t size)
{
	size_t i;

	unsigned char *tmp;

	tmp = (unsigned char *)ptr;
	i = 0;

	while (i < size)
	{
		*((unsigned char*)tmp[i] = (unsigned char) value;
		++i;
	}

	return (ptr);
}
