/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omrakrak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:09:05 by omrakrak          #+#    #+#             */
/*   Updated: 2025/10/17 20:09:07 by omrakrak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_countwords(char const *s, char c)
{
	int	count;
	int	wordcount;

	count = 0;
	wordcount = 0;
	while (s[count] != '\0')
	{
		if (s[count] != c)
		{
			if (count == 0)
			{
				wordcount++;
			}
			else if (s[count - 1] == c)
			{
				wordcount++;
			}
		}
		count++;
	}
	return (wordcount);
}

char	**ft_free(char **result, int word_index)
{
	int	count;

	count = 0;
	while (count < word_index)
	{
		if (result[count] != NULL)
		{
			free(result[count]);
		}
		count++;
	}
	free(result);
	return (NULL);
}

static int	fill_words(char const *s, char c, char **result)
{
	int	count;
	int	start;
	int	word_index;

	count = 0;
	word_index = 0;
	while (s[count])
	{
		while (s[count] == c)
			count++;
		if (s[count] != '\0' && s[count] != c)
		{
			start = count;
			while (s[count] && s[count] != c)
				count++;
			result[word_index++] = ft_substr(s, start, count - start);
			if (!result[word_index - 1])
			{
				ft_free(result, word_index);
				return (1);
			}
		}
	}
	result[word_index] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		wordcount;
	char	**result;

	wordcount = ft_countwords(s, c);
	result = malloc((wordcount + 1) * sizeof(char *));
	if (!result)
	{
		return (NULL);
	}
	if (fill_words(s, c, result))
	{
		return (NULL);
	}
	return (result);
}
