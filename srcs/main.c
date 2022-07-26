
#include "push_swap.h"

void input_validation(int argc, char *argv[], t_stacks *stacks)
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
			append_node(&stacks->head_a, new_node(ft_atoi(argv[i])));
			i++;
		}
		printn(stacks->head_a);
	}
}

int main(int argc, char *argv[])
{
	t_stacks stacks;
	stacks.head_a = NULL;

	input_validation(argc, argv, &stacks);
	return (0);
}