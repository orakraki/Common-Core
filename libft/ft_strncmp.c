#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	if (n == 0)
	{
		return (0);
	}
	while (count < n - 1 && s1[count] != '\0' && s2[count] != '\0')
	{
		if (s1[count] == s2[count])
		{
			count++;
		}
		else
		{
			break ;
		}
	}
	return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}
