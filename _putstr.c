/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _putstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin <alexhysel@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 12:46:23 by afomin            #+#    #+#             */
/*   Updated: 2025/11/01 12:48:38 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	_putstr(char *str)
{
	int	count;

	if (!str)
		return (_putstr("(null)"));
	count = -1;
	while (str[++count])
		write(1, str + count, 1);
	return (count);
}
