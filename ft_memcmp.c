/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:42:08 by hbang             #+#    #+#             */
/*   Updated: 2020/11/27 14:42:12 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *lhs, const void *rhs, size_t count)
{
	int i;
	int r;

	i = 0;
	while (i != count && ((unsigned char*)lhs)[i] == ((unsigned char*)rhs)[i])
	{
		++i;
	}
	if (i == count)
		r = 0;
	else if ((unsigned char*)lhs[i] > ((unsigned char*)rhs)[i])
		r = 1;
	else
		r = -1;
	return (r);
}
