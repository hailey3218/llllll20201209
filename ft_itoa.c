/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 23:10:05 by hbang             #+#    #+#             */
/*   Updated: 2020/12/07 00:59:38 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	check_len(long int n)
{
	int		i;

	i = 0;
	if (n == 0)
		i = 1;
	if (n < 0)
		i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

long int	check_minus(long int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		minus;

	if (n < 0)
		minus = -1;
	n = check_minus(n);
	len = check_len(n);
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
	if (minus == -1)
		str[0] = '-';
	return (str);
}
