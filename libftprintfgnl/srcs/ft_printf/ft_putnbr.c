/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lecamilo <lecamilo@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 23:37:34 by lcamilo-          #+#    #+#             */
/*   Updated: 2025/09/30 16:59:25 by lecamilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	putnbr(unsigned int n, int i)
{
	unsigned int	nb;

	nb = n;
	if (n > 9)
		i = putnbr(n / 10, i);
	i += ft_putchar(nb % 10 + '0');
	return (i);
}

int	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		return (putnbr(n * -1, 1));
	}
	return (putnbr(n, 0));
}
