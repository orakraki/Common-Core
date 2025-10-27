/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omrakrak <omrakrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:04:54 by omrakrak          #+#    #+#             */
/*   Updated: 2025/10/17 20:33:37 by omrakrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_count;
	size_t	src_count;
	size_t	temp_count;
	size_t	result;

	dest_count = 0;
	src_count = 0;
	temp_count = 0;
	while (dest[dest_count] != '\0')
		dest_count++;
	while (src[src_count] != '\0')
		src_count++;
	if (dest_count >= size)
		return (size + src_count);
	while (dest_count + temp_count < size - 1 && src[temp_count] != '\0')
	{
		dest[dest_count + temp_count] = src[temp_count];
		temp_count++;
	}
	dest[dest_count + temp_count] = '\0';
	result = dest_count + src_count;
	return (result);
}
