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
