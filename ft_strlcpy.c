/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:22:03 by hbang             #+#    #+#             */
/*   Updated: 2020/12/12 22:26:46 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int i;
	unsigned int source_len;

	i = 0;
	source_len = 0;
	while (src[source_len] != '\0')
	{
		source_len++;
	}
	if (size == 0)
	{
		return (source_len);
	}
	while (src[i] != '\0' && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (source_len);
}
