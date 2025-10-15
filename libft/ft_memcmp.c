#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	const unsigned char	*s1;
	size_t				count;
	const unsigned char	*s2;

	count = 0;
	s1 = (const unsigned char *)ptr1;
	s2 = (const unsigned char *)ptr2;
	while (count < n)
	{
		if (s1[count] != s2[count])
		{
			return (s1[count] - s2[count]);
		}
		count++;
	}
	return (0);
}
