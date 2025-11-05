/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _putnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 12:58:22 by afomin            #+#    #+#             */
/*   Updated: 2025/11/01 13:07:04 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	_putnum(int n)
{
	long	div;
	int		len;	

	div = 1;
	len = 0;
	if (n == -2147483648)
		return (_putstr("-2147483648"));
	if (n < 0)
	{
		n *= -1;
		len += _putchar('-');
	}
	while (div <= n)
		div *= 10;
	if (div > 1)
		div /= 10;
	while (div > 0)
	{
		len++;
		_putchar(n / div + '0');
		n %= div;
		div /= 10;
	}
	return (len);
}
