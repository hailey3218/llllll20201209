/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 23:10:05 by hbang             #+#    #+#             */
/*   Updated: 2020/12/07 01:12:03 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int		check_len(long int n)
{
	long int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	if (n < 0)
		n = n * -1;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

long int		check_minus(long int n)
{
	long int	new;

	if (n < 0)
	{	
		new = n * -1;
		return (new);
	}
	return (n);
}

char			*ft_itoa(int n)
{
	char		*str;
	int			len;
	int			sign;

	if (n < 0)
		sign = -1;
	len = check_len(n);
	n = check_minus(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (0);
	str[len] = '\0';
	len--;
	while (len >= 0)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
