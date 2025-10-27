/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omrakrak <omrakrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 17:49:39 by omrakrak          #+#    #+#             */
/*   Updated: 2025/10/26 18:52:05 by omrakrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long n, char specifier)
{
	int		count;
	char	*base_upper;
	char	*base_lower;

	count = 0;
	base_upper = "0123456789ABCDEF";
	base_lower = "0123456789abcdef";
	if (n >= 16)
	{
		count += ft_puthex(n / 16, specifier);
	}
	if (specifier == 'X')
	{
		ft_putchar_fd(base_upper[n % 16], 1);
		count++;
	}
	else if (specifier == 'x')
	{
		ft_putchar_fd(base_lower[n % 16], 1);
		count++;
	}
	return (count);
}
