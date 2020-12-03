/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 18:53:12 by hbang             #+#    #+#             */
/*   Updated: 2020/12/03 21:54:20 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		check_end(const char *s1, char const *c)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(c, s1[len - i - 1]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*dst;

	if (!s1)
		return (0);
	if (set == NULL)
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = check_end(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	dst = (char *)malloc(sizeof(char) * (end - start) + 1);
	if (dst == NULL)
		return (0);
	ft_strlcpy(dst, s1 + start, end - start + 1);
	return (dst);
}
