/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omrakrak <omrakrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:52:47 by omrakrak          #+#    #+#             */
/*   Updated: 2025/10/26 18:51:47 by omrakrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>

static int	ft_printf_format(char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		count = 1;
	}
	else if (specifier == '%')
	{
		ft_putchar_fd('%', 1);
		count = 1;
	}
	else if (specifier == 's')
		count = (ft_putstr_count(va_arg(args, char *)));
	else if (specifier == 'd' || specifier == 'i')
		count = ft_print_integer(va_arg(args, int));
	else if (specifier == 'u')
		count = ft_print_unsigned(va_arg(args, unsigned int));
	else if (specifier == 'x' || specifier == 'X')
		count = ft_puthex(va_arg(args, unsigned int), specifier);
	else if (specifier == 'p')
		count = ft_print_pointer(va_arg(args, void *));
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format != '\0')
			{
				count += ft_printf_format(*format, args);
			}
		}
		else
		{
			ft_putchar_fd(*format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
