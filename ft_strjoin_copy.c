/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 17:07:20 by hbang             #+#    #+#             */
/*   Updated: 2020/11/29 20:39:58 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		l1;
	int		l2;
	char	*dst;
	int		j;
	int		i;
	
	l1 = strlen(s1);
	l2 = strlen(s2);
	dst = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	i = 0;
	j = 0;
	if (!(s1) && !(s2))
		return (0);
	else if (s1 != '\0' && s2 != '\0')
	{
		memcpy(dst, s1, l1);
		memcpy(dst + l1, s2, l1 + l2);
		dst[l1 + l2 +1] = '\0';
	}
	return (dst);
}

int main(void)
{
	char *s1 = "Horld";
	char *s2 = "Wello";
	char *dst = ft_strjoin(s1, s2);
	printf("%s", dst);
	return (0);
}
