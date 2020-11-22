/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang </var/mail/hbang>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 19:57:59 by hbang             #+#    #+#             */
/*   Updated: 2020/11/22 20:03:03 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;
	unsigned char *new_d;
	unsigned char *new_s;

	i = 0;
	new_d = dst;
	new_s = (unsigned char *)src;
	while (i < n)
	{
		new_d[i] = new_s[i];
		if (new_s[i] == (unsigned char)c)
			return (dest + (i + 1));
		i++;
	}
	return (0);
}
