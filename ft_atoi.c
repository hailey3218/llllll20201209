/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang <hbang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:34:29 by hbang             #+#    #+#             */
/*   Updated: 2020/11/27 14:35:34 by hbang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int sign;
	int value;

	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	value = 0;
	while (*str)
	{
		if ((*str >= '0') && (*str <= '9'))
		{
			value = value * 10 + *str - '0';
		}
		else
		{
			break ;
		}
	}
	return (value * sign);
}
