/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:51:09 by hbang             #+#    #+#             */
/*   Updated: 2020/12/03 21:40:18 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static	int	count(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (s == '\0')
		return (0);
	while (s[i])
	{
		if(s[i] != c && s[i] != '\0')
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else if (s[i] == c)
			i++;
	}
	count += 1;
	return (count);
}

static int count_len(char const *s, char c, int i)
{
	int length;

	length = 0;
	while(s[i] != c && s[i] != '\0')
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

static char **my_split(char const *s, char c, char **new_s)
{
	size_t i;
	size_t j;
	size_t k;
	size_t len;

	i = 0;
	len = count_len(s, c, i);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		k = 0;
		while (s[i] == c)
			i++;
		new_s[j] = (char *)malloc(sizeof(char) * len + 1);
		if (!new_s[j])
			return(my_free(new_s));
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
	return(new_s);
}

char		**ft_split(char const *s, char c)
{
	size_t	cnt;
	char	**new_s;

	cnt = count(s, c);
	new_s = (char **)malloc(sizeof(char *) * (cnt));
	if (new_s == 0)
		return (0);
	my_split(s, c, new_s);
	return (new_s);
}

int		main(void)
{
	printf("ft_split\n\n");
	char c[] = "hbanginyang";
	char **rc = ft_split(c, '\n');

	printf("(%s)\n",rc[0]);
	printf("(%s)\n",rc[1]);
	free(rc);
}
