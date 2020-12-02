/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 17:07:20 by hbang             #+#    #+#             */
/*   Updated: 2020/12/02 20:50:44 by hbang            ###   ########.fr       */
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
	if (!(s1) || !(s2))
		return (0);
	if (dst == '\0')
		return (0);
	else if (s1 != '\0' && s2 != '\0')
	{
		ft_memcpy(dst, s1, l1);
		ft_memcpy(dst + l1, s2, l1 + l2);
		dst[l1 + l2] = '\0';
	}
	return (dst);
}
