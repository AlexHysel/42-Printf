/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _putunsigned.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:52:37 by afomin            #+#    #+#             */
/*   Updated: 2025/11/01 13:14:33 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	_putunsigned(unsigned int num)
{
	long	div;
	int		len;

	div = 1;
	len = 0;
	while (div <= num)
		div *= 10;
	if (div > 9)
		div /= 10;
	while (div > 0)
	{
		len++;
		_putchar(num / div + '0');
		num %= div;
		div /= 10;
	}
	return (len);
}
