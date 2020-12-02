/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 16:26:14 by hbang             #+#    #+#             */
/*   Updated: 2020/12/02 23:05:52 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (s[i])
	{
		while (s[i] != '\0')
		{
			if (s[i] == (char)c)
			{
				return ((char *)s + i);
			}
			i++;
		}
	}
	if (c == 0)
		return ((char *)s + i);
	return (0);
}
