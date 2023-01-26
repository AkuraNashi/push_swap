/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:02:43 by lcamilo-          #+#    #+#             */
/*   Updated: 2023/01/26 18:02:44 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi_limit(char *str)
{
	int		i;
	long	v;
	int		sign;

	i = 0;
	v = 0;
	sign = 1;
	while ((str[i] >= 8 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		v += str[i] - 48;
		v *= 10;
		i++;
	}
	v = (v * sign) / 10;
	if (v > INT_MAX || v < INT_MIN)
		error();
	return (v);
}

void	check_string(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			error();
	}
}

int	check_number(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (ft_strlen(str) > 1)
	{
		while (str[i])
		{
			if (str[i] == '-')
				count++;
			i++;
		}
	}
	if (count > 1)
		return (0);
	return (1);
}
