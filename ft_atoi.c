/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbang </var/mail/hbang>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 21:10:08 by hbang             #+#    #+#             */
/*   Updated: 2020/11/10 21:14:04 by hbang            ###   ########.fr       */
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
