/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omrakrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:06:50 by omrakrak          #+#    #+#             */
/*   Updated: 2025/10/17 20:06:53 by omrakrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *ptr, int value, size_t n)
{
	unsigned char	*p;
	size_t			count;
	unsigned char	v;

	count = 0;
	p = (unsigned char *)ptr;
	v = (unsigned char)value;
	while (count < n)
	{
		p[count] = v;
		count++;
	}
	return (ptr);
}
