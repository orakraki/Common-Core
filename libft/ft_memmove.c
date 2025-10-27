/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omrakrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:04:36 by omrakrak          #+#    #+#             */
/*   Updated: 2025/10/17 20:04:38 by omrakrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	size_t				count;
	unsigned char		*d;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == s)
		return (dest);
	if (d < s)
	{
		count = 0;
		while (count < n)
		{
			d[count] = s[count];
			count++;
		}
	}
	else if (d > s)
	{
		count = n;
		while (count-- > 0)
			d[count] = s[count];
	}
	return (dest);
}
