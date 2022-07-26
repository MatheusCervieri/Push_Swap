
#include "push_swap.h"

void input_validation(int argc, char *argv[], t_node *head_a)
{
	int	i;
	if(argc < 2)
		ft_printf("Invalid number of arguments");
	else
	{

		i = 0;
		// Lidar com exceções.
		while(argv[i++])
		{ 
			append_node(head_a, new_node(ft_atoi(argv[i])));
			printn(head_a);
		}
	}
}

int main(int argc, char *argv[])
{
	t_stacks stacks;
	stacks.head_a = NULL;

	input_validation(argc, argv, stacks.head_a);
	return (0);
}