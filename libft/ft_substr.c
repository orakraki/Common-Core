#include "libft.h"

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		s_len;
	char		*substring;
	size_t		real_len;

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
	substring = malloc (real_len + 1);
	if (substring == NULL)
		return (NULL);
	ft_strlcpy(substring, s + start, real_len + 1);
	return (substring);
}
