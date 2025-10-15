#include "libft.h"

int	ft_atoi(const char *str)
{
	int	box;
	int	holder;
	int	count;

	count = 0;
	box = 1;	
	holder = 0;
	while ((str[count] >= 9 && str[count] <= 13) || str[count] == ' ')
	{
		count++;
	}
	if (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
		{
			box *= -1;
		}
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		holder = (holder * 10) + (str[count] - '0');
		count++;
	}
	return (holder * box);
}
