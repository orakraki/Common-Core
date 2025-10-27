/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omrakrak <omrakrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:37:23 by omrakrak          #+#    #+#             */
/*   Updated: 2025/10/25 18:09:43 by omrakrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_numlen(long nb)
{
	int	count;

	count = 0;
	if (nb == 0)
	{
		return (1);
	}
	else
	{
		while (nb != 0)
		{
			nb /= 10;
			count++;
		}
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*str;
	long	nb;
	int		is_negative;

	if (n == 0)
		return (ft_strdup("0"));
	nb = n;
	is_negative = (nb < 0);
	if (is_negative)
	{
		nb = -nb;
	}
	count = ft_numlen(nb) + is_negative;
	str = ft_calloc(count + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (nb > 0)
	{
		str[--count] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}
