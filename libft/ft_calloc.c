/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omrakrak <omrakrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:33:49 by omrakrak          #+#    #+#             */
/*   Updated: 2025/10/17 20:34:18 by omrakrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_bytes;
	void	*ptr;

	if (size != 0 && count > (size_t)-1 / size)
	{
		return (NULL);
	}
	total_bytes = count * size;
	ptr = malloc(total_bytes);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, total_bytes);
	return (ptr);
}
