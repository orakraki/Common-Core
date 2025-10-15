#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	count;

	count = 0;
	if (s == NULL || f == NULL)
	{
		return ;
	}
	while (s[count] != '\0')
	{
		f(count, &s[count]);
		count++;
	}
}
