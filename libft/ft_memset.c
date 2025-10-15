#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *ptr, int value, size_t n)
{
	unsigned char	*p;
	size_t			count;
	unsigned char	v;

	count = 0;
	p = (unsigned char *)ptr;
	v = (unsigned char)value;
	while (count < n)
	{
		p[count] = v;
		count++;
	}
	return (ptr);
}
