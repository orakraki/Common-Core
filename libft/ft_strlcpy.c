#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	realcount;

	count = 0;
	realcount = 0;
	while (src[count] != '\0' && size - 1 > count)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	while (src[realcount] != '\0')
	{
		realcount++;
	}
	return (realcount);
}
