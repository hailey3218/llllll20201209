/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:33:41 by hbang             #+#    #+#             */
/*   Updated: 2020/11/05 18:09:48 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*memchr(const void *ptf, int value, size_t num)
{
	const unsigned char *p;

	*p = (const unsigned char*)ptr;
	while (p < (const unsigned char*)ptr + count && *p != ch)
	{
		++p;
	}
	if (p < (const unsigned char*)ptr + count)
		return (p);
	else
	{
		return (0);
	}
}
