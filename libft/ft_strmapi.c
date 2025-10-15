#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*store;
	int		count;

	count = 0;
	if (s == NULL || f == NULL)
	{
		return (NULL);
	}
	len = ft_strlen((char *)s);
	store = malloc(len + 1);
	while (count < len)
	{
		store[count] = f(count, s[count]);
		count++;
	}
	store[len] = '\0';
	return (store);
}
