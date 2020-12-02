/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:41:45 by hbang             #+#    #+#             */
/*   Updated: 2020/12/02 18:42:12 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*new_d;
	unsigned char	*new_s;

	i = 0;
	new_d = dst;
	new_s = (unsigned char *)src;
	while (i < n)
	{
		new_d[i] = new_s[i];
		if (new_s[i] == (unsigned char)c)
			return (dst + (i + 1));
		i++;
	}
	return (0);
}
