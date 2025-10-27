/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omrakrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:38:22 by omrakrak          #+#    #+#             */
/*   Updated: 2025/10/15 20:38:26 by omrakrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*sr;
	size_t				count;

	count = 0;
	sr = (const unsigned char *)s;
	while (count < n)
	{
		if (sr[count] == (unsigned char)c)
		{
			return ((void *)(sr + count));
		}
		count++;
	}
	return (NULL);
}
