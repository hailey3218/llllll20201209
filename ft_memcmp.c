/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:42:08 by hbang             #+#    #+#             */
/*   Updated: 2020/12/02 23:32:36 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *lhs, const void *rhs, size_t count)
{
	size_t			i;
	size_t			r;
	unsigned char	*ll;
	unsigned char	*rr;

	if (count == '\0')
		return (0);
	ll = (unsigned char *)lhs;
	rr = (unsigned char *)rhs;
	i = 0;
	while (i < count)
	{
		if (ll[i] != rr[i])
		{
			r = ll[i] - rr[i];
			return (r);
		}
		i++;
	}
	return (0);
}
