/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:51:09 by hbang             #+#    #+#             */
/*   Updated: 2020/12/12 03:42:38 by hbang            ###   ########.fr       */
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

static void	**my_free(char **new_s, int cnt)
{
	int		i;

	i = 0;
	while (i < cnt)
	{
		if (new_s[i])
		{
			free(new_s[i]);
			new_s[i] = NULL;
		}
		i++;
	}
	free(new_s);
	new_s = NULL;
	return (NULL);
}

static char	**my_split(char const *s, char c, char **new_s, int cnt)
{
	int		i[3];

	i[0] = 0;
	i[1] = 0;
	while (s[i[1]] != '\0')
	{
		i[2] = 0;
		while (s[i[1]] != '\0' && s[i[1]] == c)
			i[1]++;
		if (s[i[1]] != '\0' && s[i[1]] != c)
		{
			if (!(new_s[i[0]] = (char *)malloc(sizeof(char) *
							((count_len(s, c, i[1])) + 1))))
			{
				my_free(new_s, cnt);
				return (NULL);
			}
			while (s[i[1]] != '\0' && s[i[1]] != c)
				new_s[i[0]][i[2]++] = s[i[1]++];
			new_s[i[0]++][i[2]] = '\0';
		}
	}
	new_s[i[0]] = NULL;
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
	return (my_split(s, c, new_s, cnt));
}
