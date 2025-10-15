#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = ft_strlen(s);
	while (count >= 0)
	{
		if (s[count] == (char)c)
		{
			return ((char *)s + count);
		}
		count--;
	}
	if (s[0] == (char)c)
	{
		return ((char *)s);
	}
	return (NULL);
}
