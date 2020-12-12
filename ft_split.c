/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:51:09 by hbang             #+#    #+#             */
/*   Updated: 2020/12/12 22:32:40 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		**my_free(char **target)
{
	size_t	i;

	i = 0;
	while (target[i])
	{
		free(target[i]);
		target[i] = NULL;
		i++;
	}
	free(target);
	target = NULL;
	return (NULL);
}

int			count(char const *s, char c)
{
	int		count;
	size_t	i;
	int		have;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		have = 0;
		while (s[i] != '\0' && s[i] == c)
			i++;
		while (s[i] != '\0' && s[i] != c)
		{
			have = 1;
			i++;
		}
		if (have == 1)
			count++;
	}
	return (count);
}

int			len_check(char const *s, char c)
{
	int		len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

char		**ft_split(char const *s, char c)
{
	char	**new_s;
	size_t	i;
	size_t	j;
	size_t	length;

	if (!s)
		return (NULL);
	if (!(new_s = (char **)malloc(sizeof(char *) * (count(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (!(length = len_check(s + i, c)))
			break ;
		if (!(new_s[j] = (char *)malloc(sizeof(char) * (length + 1))))
			return ((char **)my_free(new_s));
		ft_strlcpy(new_s[j++], s + i, length + 1);
		i = i + length;
	}
	new_s[j] = NULL;
	return (new_s);
}
