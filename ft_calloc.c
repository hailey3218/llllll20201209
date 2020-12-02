/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:39:36 by hbang             #+#    #+#             */
/*   Updated: 2020/12/02 18:40:06 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t num, size_t size)
{
	char *p;

	p = malloc(size * num);
	if (p == 0)
		return (0);
	ft_memset(p, 0, size * num);
	return (p);
}
