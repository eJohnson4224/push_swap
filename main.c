#include "push_swap.h"
#include <stdio.h>

int	main(int ac, char *av[])
{
	int *stack;

	stack = get_input(ac, av);
	while (*stack++)
		printf("|| %i ||\n", *stack);
	return (0);
}