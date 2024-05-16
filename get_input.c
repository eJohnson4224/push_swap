#include "push_swap.h"

/* evolution of the return variable
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



Each move will be printed directly on to the terminal */

if (ac == 2)

int	pkg_digit_bool(char	**package)
{
	int		i;
	int		stack_size;
	char	zero_nine;

	i = 0;
	stack_size = 0;
	zero_nine = '0';
	while (package[stack_size])
	{
		while (package[stack_size][i])
		{
			zero_nine = package[stack_size][i];
			if (!ft_is_digit(zero_nine))
				return (0);
			i++;
		}
		stack_size++;
	}
	return (stack_size);
}

t_list	*package_to_stack(char	**stack_package)
{
	long	temp;
	t_list	*head_temp;
	t_list	*node;
	t_list	*head;

	temp = 0;
	*head_temp = NULL;
	head = ft_lstnew(0);
	node = head;
	while (*stack_package)
	{
		temp = atol(*stack_package);
		if (!(temp > INT_MIN && temp < INT_MAX))
			return (NULL);
		node->content = temp;
		head_temp = ft_lstnew(0);
		ft_lstadd_back(&node, head_temp);
		head_temp = head;
		node = head->next;
		node->prev = head_temp;
		stack_package++;
	}
	return (head);
}

t_list	*get_input_quote(int ac, char *av[])
{
	int		i;
	int		*stack;
	char	**stack_package;
	char	zero_nine;
	t_list	*head_a;

	i = 0;
	*head_a = NULL;
	zero_nine = NULL;
	stack_package = ft_split(av[1], ' ');
	// validate node at i as >= "0" and <= "9"
	if (!(pkg_digit_bool(stack_package)))
		return (NULL);
	head_a = package_to_stack(stack_package);
	return (head_a);
}
