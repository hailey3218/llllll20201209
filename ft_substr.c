/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 15:05:56 by hbang             #+#    #+#             */
/*   Updated: 2020/12/03 19:26:40 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	l;
	char			*d;

	if (s == '\0')
	{
		return (0);
	}
	d = (char *)malloc(sizeof(char) * len + 1);
	l = ft_strlen(s);
	if (d == NULL)
		return (0);
	if (l > start + len)
	{
		l = start + len;
	}
	i = start;
	while (i < l)
	{
		d[i - start] = s[i];
		i++;
	}
	d[i - start] = '\0';
	return (d);
}
