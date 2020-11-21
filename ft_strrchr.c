/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang </var/mail/hbang>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 21:34:13 by hbang             #+#    #+#             */
/*   Updated: 2020/11/21 21:39:32 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int ch)
{
	char *r;
	const char *p;

	*r = NULL;
	*p = str;
	while (*p != '\0')
		++p;
	while (*p != (char)ch && p != str)
		--p;
	if (*p == (char)ch)
		r = (char*)p;
	return (p);
}
