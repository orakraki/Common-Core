/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omrakrak <omrakrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:04:54 by omrakrak          #+#    #+#             */
/*   Updated: 2025/10/25 18:06:48 by omrakrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*substring;
	size_t	real_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if ((size_t)start > s_len)
	{
		substring = malloc(1);
		if (substring == NULL)
			return (NULL);
		substring[0] = '\0';
		return (substring);
	}
	if (len < s_len - (size_t)start)
		real_len = len;
	else
		real_len = s_len - (size_t)start;
	substring = malloc(real_len + 1);
	if (substring == NULL)
		return (NULL);
	ft_strlcpy(substring, s + start, real_len + 1);
	return (substring);
}
/*
int	main(void)
  {
	char c[] = "common alez vous ?";
	unsigned int i;
	i = 2;
	pritnf("%s\n", ft_substr("hola", 0, 18446744073709551615));
  }
*/
