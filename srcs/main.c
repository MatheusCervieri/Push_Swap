
#include "push_swap.h"

void input_validation(int argc, char *argv[], t_node *node)
{
	int	i;
	if(argc < 2)
		ft_printf("Invalid number of arguments");
	else
	{

		i = 1;
		// Lidar com exceções.
		while(argv[i])
		{ 
			append_node(&node, new_node(ft_atoi(argv[i])));
			i++;
		}
		printn(node);
	}
}

int main(int argc, char *argv[])
{
	//t_stacks stacks;
//	stacks.head_a = NULL;
	t_node	*stack_a;
	stack_a = NULL;
	input_validation(argc, argv, stack_a);
	return (0);
}