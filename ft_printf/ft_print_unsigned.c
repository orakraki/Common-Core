/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omrakrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 18:57:02 by omrakrak          #+#    #+#             */
/*   Updated: 2025/10/26 18:57:04 by omrakrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
#include "libft"

*/
int	ft_print_unsigned(unsigned int n)
{
	int		count;
	char	*str;

	str = ft_utoa(n);
	if (str == NULL)
	{
		return (0);
	}
	ft_putstr_fd(str, 1);
	count = ft_strlen(str);
	free(str);
	return (count);
}
