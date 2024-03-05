#include "push_swap.h"

int	*get_input(int ac, char *av[])
{
	int		stack_size;
	int		*stack;
	long	temp;

	stack_size = ac - 1;
	stack = malloc(stack_size * sizeof(int));
	temp = 0;
	if (ac <= 2)
		return (NULL);
	if (!(ft_is_digit_digit(*++av)))
		return (NULL);
	while (*++av)
	{
		temp = ft_atol(*av);
		if (temp > 2147483647 || temp < -2147483648)
			return (NULL);
		*stack++ = ft_atoi(*av);
	}
	return (stack);
}
