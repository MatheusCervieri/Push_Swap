#include "push_swap.h"

void input_validation(int argc, char *argv[], t_node **node)
{
	int	i;
	if(argc < 2)
		ft_printf("Invalid number of arguments");
	else
	{

		i = 1;
		while(argv[i])
		{ 

			if (!just_numbers(argv[i]))
				ft_printf("It is not just numbers! \n");
			append_node(node, new_node(ft_atoi(argv[i])));
			i++;
		}

	}
}

int main(int argc, char *argv[])
{

	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL; 
	input_validation(argc, argv, &stack_a);
	input_validation(argc, argv, &stack_b);
	printn(stack_a);
	printn(stack_b);
	free_list(&stack_a);
	free_list(&stack_b);
	return (0);
}
