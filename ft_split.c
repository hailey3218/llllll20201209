/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:51:09 by hbang             #+#    #+#             */
/*   Updated: 2020/11/30 22:44:20 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

static	int	count(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (s == '\0')
		return (0);
	if (s[i])
	{
		while(s[i] != c && s[i + 1] == c && s[i] != '\0')
			count++;
		i++;
	}
	count += 1;
	return (count);
}

static int count_len(char const *s, char c)
{
	int length;
	int i;

	length = 0;
	i = 0;
	while(s[i] != c && s[i])
	{
		length++;
		i++;
	}
	return (length);
}

static int	my_free(char **new_s, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)new_s[j];
	}
	free(new_s);
	return (0);
}

static void	my_split(char const *s, char c, char **new_s)
{
	size_t i;
	size_t j;
	size_t len;

	len = count_len(s,c);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			new_s[j] = (char *)malloc(sizeof(char) * len + 1);
			if (!new_s[j])
				return (my_free((char onst **)new_s, j));
			ft_strlcpy(new_s[j], s, len + 1);
			j++;
		}
		i++;
	}
	new_s[i] = '\0';
	return(new_s);
}

char		*ft_split(char const *s, char c)
{
	size_t	cnt;
	char	**new_s;

	cnt = count(*s, c);
	new_s = (char **)malloc(sizeof(char *) * (cnt));
	if (new_s == 0)
		return (0);
	my_split(*s, c, new_s);

}
		
