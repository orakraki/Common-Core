#include "libft.h"
#include <stdlib.h>

int	ft_numlen(long nb)
{
	int	count;

	count = 0;
	if (nb == 0)
	{
		return (1);
	}
	else
	{
		while (nb != 0)
		{
			nb /= 10;
			count++;
		}
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*str;
	long	nb;
	int		is_negative;

	if (n == 0)
		return (ft_strdup("0"));
	nb = n;
	is_negative = 0;
	if (nb < 0)
	{
		is_negative = 1;
		nb = -nb;
	}
	count = ft_numlen(nb) + is_negative;
	str = ft_calloc(count + 1, sizeof(char));
	while (nb > 0)
	{
		str[count - 1] = (nb % 10) + '0';
		nb = nb / 10;
		count--;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}
