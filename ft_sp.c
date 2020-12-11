/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:51:09 by hbang             #+#    #+#             */
/*   Updated: 2020/12/12 03:39:01 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	int		k;
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		k = 0;
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			if (!(new_s[j] = (char *)malloc(sizeof(char) *
							((count_len(s, c, i)) + 1))))
			{
				my_free(new_s, cnt);
				return (NULL);
			}
			while (s[i] != '\0' && s[i] != c)
				new_s[j][k++] = s[i++];
			new_s[j++][k] = '\0';
		}
	}
	new_s[j] = NULL;
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

int		main(void)
{
	char *str = " a   b   c   d e ";
	char **result;

	result = ft_split(str,' ');
	printf("%s\n", result[0]);
	printf("%s\n", result[1]);
	printf("%s\n", result[2]);
	printf("%s\n", result[3]);
	printf("%s\n", result[4]);
	printf("%s\n", result[5]);
	system("leaks a.out");
	return (1);
}
