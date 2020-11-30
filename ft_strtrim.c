/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 18:53:12 by hbang             #+#    #+#             */
/*   Updated: 2020/11/29 21:30:30 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*dst;

	if (!s1 || !set)
		return (0);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	if (start > end)
		return (strdup(""));
	dst = (char *)malloc(sizeof(char) * (end - start) + 1);
	ft_strlcpy(dst, s1 + start, end - start + 2);
	return (dst);
}
