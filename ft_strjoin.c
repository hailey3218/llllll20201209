/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 23:46:05 by hbang             #+#    #+#             */
/*   Updated: 2020/12/04 23:46:33 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		l1;
	int		l2;
	int		i;
	int		j;
	char	*dst;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	if (!(s1) || !(s2))
		return (0);
	if ((dst = (char *)malloc(sizeof(char) * (l1 + l2 + 1))) == '\0')
		return (0);
	i = 0;
	j = 0;
	while (i < l1)
	{
		dst[i] = s1[i];
		i++;
	}
	while (j < l2)
		dst[i++] = s2[j++];
	dst[i] = 0;
	return (dst);
}
