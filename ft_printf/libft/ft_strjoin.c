/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omrakrak <omrakrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:04:54 by omrakrak          #+#    #+#             */
/*   Updated: 2025/10/17 20:33:41 by omrakrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*joined;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	joined = malloc(len1 + len2 + 1);
	if (joined == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(joined, s1, len1 + 1);
	ft_strlcat(joined, s2, len1 + len2 + 1);
	return (joined);
}
