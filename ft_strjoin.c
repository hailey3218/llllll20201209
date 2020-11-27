/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 17:07:20 by hbang             #+#    #+#             */
/*   Updated: 2020/11/27 18:15:25 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		l1;
	int		l2;
	char	*dst;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	dst = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	if (!(s1) && !(s2))
		return (0);
	else if (s1 != '\0' && s2 != '\0')
	{
		memcpy(dst, s1, l1);
		memcpy(dst + l1, s2, l1 + l2);
		dst[l1 + l2 + 1] = '\0';
	}
	return (dst);
}
