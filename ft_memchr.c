/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:33:41 by hbang             #+#    #+#             */
/*   Updated: 2020/12/02 22:57:18 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memchr(const void *ptr, int value, size_t num)
{
	const char	*p;
	void		*r;

	r = NULL;
	p = (const char*)ptr;
	while (p < (const char*)ptr + num && *p != value)
	{
		++p;
	}
	if (p < (const char*)ptr + num)
	{
		r = (void*)p;
		return (r);
	}
	return (r);
}
