/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omrakrak <omrakrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:20:47 by omrakrak          #+#    #+#             */
/*   Updated: 2025/10/17 20:20:50 by omrakrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*store;
	int		len;

	len = ft_strlen(src);
	store = malloc(len + 1);
	if (store == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(store, src, len + 1);
	return (store);
}
