/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afomin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 12:41:44 by afomin            #+#    #+#             */
/*   Updated: 2025/11/09 12:07:23 by afomin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
//#include <stdio.h>
//#include <limits.h>

static int	handle(char str, va_list *args)
{
	if (str == 'c')
		return (_putchar((char) va_arg(*args, int)));
	else if (str == 's')
		return (_putstr(va_arg(*args, char *)));
	else if (str == 'd')
		return (_putnum(va_arg(*args, int)));
	else if (str == 'i')
		return (_putnum(va_arg(*args, int)));
	else if (str == 'u')
		return (_putunsigned(va_arg(*args, unsigned int)));
	else if (str == 'x')
		return (_putnum_base(va_arg(*args, unsigned int), HEX_LOWER));
	else if (str == 'X')
		return (_putnum_base(va_arg(*args, unsigned int), HEX_UPPER));
	else if (str == 'p')
		return (_putpointer((uintptr_t)va_arg(*args, void *)));
	else if (str == '%')
		return (_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	if (!*str)
		return (0);
	va_start(args, str);
	len = 0;
	while (*str)
	{
		if (*str != '%')
			len += _putchar(*str);
		else if (*(str + 1))
		{
			str++;
			len += handle(*str, &args);
		}
		str++;
	}
	va_end(args);
	return (len);
}
/*
int main(void)
{
    char *str = "Hello";
    char c = 'A';
    int len_custom, len_std;

    printf("=== BASIC TESTS ===\n");
    len_std = printf("STD: %c %s %d %i %u %x %X %p %%\n",
c, str, 42, -42, 42, 42, 42, str);
    len_custom = ft_printf("FT : %c %s %d %i %u %x %X %p %%\n",
c, str, 42, -42, 42, 42, 42, str);
    printf("STD len: %d | FT len: %d\n\n", len_std, len_custom);

    printf("=== EDGE CASES ===\n");
    len_std = printf("STD: %d %d %u %x\n", INT_MIN, INT_MAX, UINT_MAX, 0);
    len_custom = ft_printf("FT : %d %d %u %x\n", INT_MIN, INT_MAX, UINT_MAX, 0);
    printf("STD len: %d | FT len: %d\n\n", len_std, len_custom);

    printf("=== STRING TESTS ===\n");
    len_std = printf("STD: '%s'\n", "");
    len_custom = ft_printf("FT : '%s'\n", "");
    printf("STD len: %d | FT len: %d\n\n", len_std, len_custom);

    printf("=== CHARACTER TESTS ===\n");
    len_std = printf("STD: %c%c%c%c\n", 'A', 'B', 'C', '\n');
    len_custom = ft_printf("FT : %c%c%c%c\n", 'A', 'B', 'C', '\n');
    printf("STD len: %d | FT len: %d\n\n", len_std, len_custom);

    printf("=== MIXED FORMATS ===\n");
    len_std = printf("STD: %d-%s-%x-%p-%c\n", 123, "Mix", 255, str, 'Z');
    len_custom = ft_printf("FT : %d-%s-%x-%p-%c\n", 123, "Mix", 255, str, 'Z');
    printf("STD len: %d | FT len: %d\n\n", len_std, len_custom);

    return (0);
}
*/
