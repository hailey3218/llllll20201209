/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:51:09 by hbang             #+#    #+#             */
/*   Updated: 2020/12/09 16:57:17 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else if (s[i] && s[i] == c)
			i++;
	}
	return (count);
}

static int	count_len(char const *s, char c, int i)
{
	int		length;

	length = 0;
	if (s[i] == c)
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}

static char	**my_free(char **new_s)
{
	size_t j;

	j = 0;
	while (new_s[j])
	{
		free(new_s[j]);
		j++;
	}
	free(new_s);
	return (0);
}

static char	**my_split(char const *s, char c, char **new_s)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		k = 0;
		while (s[i] == c)
			i++;
		new_s[j] = (char *)malloc(sizeof(char) * ((count_len(s, c, i)) + 1));
		if (!new_s[j])
			return (my_free(new_s));
		while (s[i] != '\0' && s[i] != c)
		{
			new_s[j][k] = s[i];
			k++;
			i++;
		}
		new_s[j][k] = '\0';
		j++;
	}
	new_s[j] = 0;
	return (new_s);
}

char		**ft_split(char const *s, char c)
{
	size_t	cnt;
	char	**new_s;

	if (!s)
		return (0);
	cnt = count(s, c);
	new_s = (char **)malloc(sizeof(char) * (cnt + 1));
	if (!new_s)
		return (0);
	my_split(s, c, new_s);
	return (new_s);
}
