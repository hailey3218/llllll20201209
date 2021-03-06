/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:42:57 by hbang             #+#    #+#             */
/*   Updated: 2020/12/02 23:13:32 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int ch)
{
	char		*r;
	const char	*p;

	r = NULL;
	p = str;
	while (*p != '\0')
		++p;
	while (*p != (char)ch && p != str)
		--p;
	if (*p == (char)ch)
		r = (char*)p;
	if (ch == 0)
		return ((char *)p);
	if (p == '\0')
		return (0);
	return (r);
}
