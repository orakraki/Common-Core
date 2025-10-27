/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omrakrak <omrakrak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:04:54 by omrakrak          #+#    #+#             */
/*   Updated: 2025/10/17 20:33:39 by omrakrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len;
	int	end;
	int	start;

	start = 0;
	if (s1 == NULL || set == NULL)
	{
		return (NULL);
	}
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	end = ft_strlen(s1) - 1;
	while (end >= start && ft_strchr(set, s1[end]))
	{
		end--;
	}
	len = (end - start + 1);
	if (end < start)
	{
		return (ft_strdup(""));
	}
	return (ft_substr(s1, start, len));
}
