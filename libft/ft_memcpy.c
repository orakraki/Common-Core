#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	size_t				count;
	unsigned char		*d;

	count = 0;
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	while (count < n)
	{
		d[count] = s[count];
		count++;
	}
	return (dest);
}
