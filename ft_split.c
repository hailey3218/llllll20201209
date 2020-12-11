/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:51:09 by hbang             #+#    #+#             */
/*   Updated: 2020/12/11 20:05:15 by hbang            ###   ########.fr       */
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
		if (s[i] && s[i] != c)
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

static void	**my_free(char **new_s, int j)
{
	int		i;

	i = 0;
	while (i < j)
	{
		free(new_s[i]);
		j++;
	}
	free(new_s);
	return (NULL);
}

static char	**my_split(char const *s, char c, char **new_s, int j)
{
	int		k;
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		k = 0;
		while (s[i] == c)
			i++;
		new_s[j] = (char *)malloc(sizeof(char) * ((count_len(s, c, i)) + 1));
		if (!new_s[j])
		{
			my_free(new_s, j);
			return (NULL);
		}
		while (s[i] != '\0' && s[i] != c)
			new_s[j][k++] = s[i++];
		if (k > 0)
		{
			new_s[j][k] = '\0';
			j++;
		}
	}
	new_s[j] = 0;
	return (new_s);
}

char		**ft_split(char const *s, char c)
{
	size_t	cnt;
	char	**new_s;
	int		j;

	j = 0;
	if (!s)
		return (0);
	cnt = count(s, c);
	new_s = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (!new_s)
		return (0);
	return (my_split(s, c, new_s, j));
}
