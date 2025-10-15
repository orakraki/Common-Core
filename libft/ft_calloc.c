#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_bytes;
	void	*ptr;

	if (size != 0 && count > (size_t) - 1 / size)
	{
		return (NULL);
	}
	total_bytes = count * size;
	ptr = malloc(total_bytes);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, total_bytes);
	return (ptr);
}
