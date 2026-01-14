/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lecamilo <lecamilo@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 23:37:34 by lcamilo-          #+#    #+#             */
/*   Updated: 2025/09/30 17:41:23 by lecamilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	putunbr(unsigned int n, int i)
{
	unsigned int	nb;

	nb = n;
	if (n > 9)
		i = putunbr(n / 10, i);
	i += ft_putchar(nb % 10 + '0');
	return (i);
}

int	ft_putunbr(unsigned int n)
{
	return (putunbr(n, 0));
}
