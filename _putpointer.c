/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _putpointer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin <alexhysel@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:48:58 by afomin            #+#    #+#             */
/*   Updated: 2025/11/10 16:56:35 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	_putpointer(uintptr_t ptr)
{
	int						len;
	unsigned long			div;

	if (!ptr)
		return (_putstr("(nil)"));
	len = 0;
	div = 1;
	while (ptr / div >= 16)
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
