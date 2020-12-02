/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:34:29 by hbang             #+#    #+#             */
/*   Updated: 2020/12/02 23:47:52 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_atoi(const char *str)
{
	int			minus;
	int			i;
	long long	num;

	i = 0;
	minus = 1;
	num = 0;
	while (str[i] && ((str[i] >= 8 && str[i] <= 13) || str[i] == ' '))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if (num < 0)
		return ((minus > 0) ? -1 : 0);
	return (minus * num);
}
