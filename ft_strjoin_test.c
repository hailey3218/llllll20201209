/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 17:07:20 by hbang             #+#    #+#             */
/*   Updated: 2020/12/03 19:53:12 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	}
	return (dst);
}

int		main(void)
{
	char *s1 = "my favorite animal is";
	char *s2 = " ";
	char *s3 = "the nyancat";
	char *res = ft_strjoin(ft_strjoin(s1, s2), s3);

	printf("%s", res);
	if (!strcmp(res, "my favorite animal is the nyancat"))
		printf("sucess");
	else
		printf("fail");
	return (0);
}
