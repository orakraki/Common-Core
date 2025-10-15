#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_count;
	size_t	src_count;
	size_t	temp_count;
	size_t	result;

	dest_count = 0;
	src_count = 0;
	temp_count = 0;
	while (dest[dest_count] != '\0')
		dest_count++;
	while (src[src_count] != '\0')
		src_count++;
	if (dest_count >= size)
		return (size + src_count);
	while (dest_count + temp_count < size - 1 && src[temp_count] != '\0')
	{
		dest[dest_count + temp_count] = src[temp_count];
		temp_count++;
	}
	dest[dest_count + temp_count] = '\0';
	result = dest_count + src_count;
	return (result);
}
