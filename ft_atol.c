#include "push_swap.h"

long	ft_atol(const char *str)
{
	int		i;
	int		neg;
	long	out;

	i = 0;
	neg = 1;
	out = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		++i;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		out = (10 * out) + (str[i] - '0');
		i++;
	}

	return (out * neg);
}
