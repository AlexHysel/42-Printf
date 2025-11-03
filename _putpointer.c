/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _putpointer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:48:58 by afomin            #+#    #+#             */
/*   Updated: 2025/11/01 12:51:06 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	_putpointer(uintptr_t ptr)
{
	int						len;
	unsigned long			div;

	len = 0;
	div = 1;
	while (ptr / 16 > div)
		div *= 16;
	len += _putstr("0x");
	while (div > 0)
	{
		len++;
		_putchar(HEX_LOWER[ptr / div]);
		ptr %= div;
		div /= 16;
	}
	return (len);
}
