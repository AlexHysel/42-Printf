/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _putnum_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:48:58 by afomin            #+#    #+#             */
/*   Updated: 2025/11/01 12:51:06 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	_putnum_base(unsigned int num, char *base)
{
	size_t					base_size;
	int						len;
	unsigned long			div;

	base_size = 0;
	while (base[base_size])
		base_size++;
	len = 0;
	div = 1;
	while (num >= div)
		div *= base_size;
	if (div >= base_size)
		div /= base_size;
	while (div > 0)
	{
		len++;
		_putchar(base[num / div]);
		num %= div;
		div /= base_size;
	}
	return (len);
}
