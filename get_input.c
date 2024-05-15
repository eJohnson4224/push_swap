#include "push_swap.h"

int	*get_input(int ac, char *av[])
{
	int		stack_size;
	int		*stack;
	long	temp;

	//insert conditionals
	if (ac <= 2)
		return (NULL);
	//insert conditionals
	stack_size = ac - 1;
	stack = malloc(stack_size * sizeof(int));
	temp = 0;
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
evolution of the return variable
			_
			|av"12" "13" "4" || av"12 13 4"
			|  	|                  |
input		|  	|__________________|
			|			|
			|_	char **stack_package
			_	['12', '13', '4']
			|  	|
			| 	|atoi
swap prep	|	node_t stack_a; node_t stack_b;
			| 	|
			|_  |



Each move will be printed directly on to the terminal

if (ac == 2)

t_list	*get_input_quote(int ac, char *av[])
{
	int		i;
	int		stack_size;
	int		*stack;
	char	**stack_package;
	char	zero_nine;
	long	temp;
	t_list *head_a;

	i = 0;
	stack_size = 0;
	*head = NULL;
	zero_nine = NULL;
	stack_package = ft_split(av[1], ' ');
	//note: need to go through each char node and individual char
	//just need a function to simultaneously make stack_size and 
	// validate node at i as >= "0" and <= "9"
	ft_atol(stack_package[stack_size]);
	while (stack_package[stack_size])
	{
		while (stack_package[stack_size][i])
		{
			zero_nine = stack_package[stack_size][i];
			if (!ft_is_digit(zero_nine))
				return NULL;
			i++;
		}
		stack_size++;
	}


	stack = ft_lstnew(NULL);
	//Could instead just make stack a appropriatly and assign it
	//Consider the idea of working with just ascii values since 
	//the input will probably alwalys be taken as such
	i = 0;
	temp = 0;
	while (*stack_package)
	{
		temp = atol(*stack_package);
		if (!(temp > INT_MIN && temp < INT_MAX))
			return NULL;
			t_list = temp;
		stack_package++;
	}
	
}