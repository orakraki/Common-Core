#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*sr;
	size_t				count;

	count = 0;
	sr = (const unsigned char *)s;
	while (count < n)
	{
		if (sr[count] == (unsigned char)c)
		{
			return ((void *)(sr + count));
		}
		count++;
	}
	return (NULL);
}
