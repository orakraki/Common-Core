/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omrakrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 18:56:40 by omrakrak          #+#    #+#             */
/*   Updated: 2025/10/26 18:56:44 by omrakrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_print_integer(int n)
{
	char	*num_str;
	int		count;

	num_str = ft_itoa(n);
	if (!num_str)
	{
		return (0);
	}
	ft_putstr_fd(num_str, 1);
	count = ft_strlen(num_str);
	free(num_str);
	return (count);
}
