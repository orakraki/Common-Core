/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omrakrak <omrakrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:04:54 by omrakrak          #+#    #+#             */
/*   Updated: 2025/10/25 18:10:36 by omrakrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		count;
	int		len;
	char	*store;

	count = 0;
	if (s == NULL || f == NULL)
	{
		return (NULL);
	}
	len = ft_strlen((char *)s);
	store = malloc(len + 1);
	if (!store)
		return (NULL);
	while (count < len)
	{
		store[count] = f(count, s[count]);
		count++;
	}
	store[len] = '\0';
	return (store);
}
