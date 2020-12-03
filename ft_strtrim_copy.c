/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 18:53:12 by hbang             #+#    #+#             */
/*   Updated: 2020/12/03 21:18:37 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char		*ft_strtrim(const char *s1, char const *set)
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
	char *r = "	\t \t \n  \n\n\n\t";
	char *set = "";
	char *c = ft_strtrim(r, " \n\t");
	printf("%s", c);

	if (!strcmp(c, set))
		printf("sucess");
	else
		printf("fail");
}
