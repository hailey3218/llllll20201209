/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:01:57 by hbang             #+#    #+#             */
/*   Updated: 2020/12/02 20:41:06 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *ptr, int val, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		((unsigned char*)ptr)[i] = (unsigned char) val;
		++i;
	}

	return (ptr);
}
