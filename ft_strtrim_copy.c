/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 18:53:12 by hbang             #+#    #+#             */
/*   Updated: 2020/11/29 21:37:05 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t 	start;
	size_t	end;
	char	*dst;

	if (!s1 || !set)
		return (0);
	start = 0;
	while (s1[start] && strchr(set, s1[start]))
		start++;
	end = strlen(s1) - 1;
	while (s1[end] && strchr(set, s1[end]))
		end--;
	if (start > end)
		return (strdup(""));
	dst = (char *)malloc(sizeof(char) * (end - start) + 1);
	strlcpy(dst, s1 + start, end - start + 2);
	return (dst);
}

int		main(void)
{
	char *r = "hello wolrd!";
	char *set = "hlde";
	char *c = ft_strtrim(r, set);
	printf ("%s", c);
}