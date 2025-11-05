/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 12:30:14 by afomin            #+#    #+#             */
/*   Updated: 2025/11/01 15:54:54 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# define HEX_UPPER "0123456789ABCDEF"
# define HEX_LOWER "0123456789abcdef"
# define FLAGS ". #-+0"

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printf(const char *str, ...);
int		_putnum(int num);
int		_putnum_base(unsigned int num, char *base);
int		_putchar(char symbol);
int		_putstr(char *str);
int		_putpointer(uintptr_t ptr);
int		_putunsigned(unsigned int num);

#endif
