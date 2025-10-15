#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	count;
	size_t	count2;

	count = 0;
	if (little[count] == '\0')
		return ((char *)big);
	count = 0;
	while (big[count] != '\0' && count < len)
	{
		if (big[count] == little[0])
		{
			count2 = 0;
			while (little[count2] != '\0'
				&& big[count + count2] == little[count2]
				&& (count + count2) < len)
			{
				count2++;
			}
			if (little[count2] == '\0')
				return ((char *)(&big[count]));
		}
		count++;
	}
	return (NULL);
}
