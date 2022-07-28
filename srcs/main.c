#include "push_swap.h"

/*
Step 2 : Check if the numbers in A are all sorted. If so, end the program without printing anything. It’d be preferable to write a function A_is_sorted()

Step 3 : If the size of A ≤ 5, call function sort_small_stack(). Else, call function sort_big_stack()

1- editar as funções de ações para elas já escreverem suas ações correspondentes. 
1.1- Entender a ordem certinha das stacks.
2- Sort com 3 números. 
3- Sort com 5 números. 
//We need to find the medium. 

4- Sort com 100 números.
5- Sort com 500 numeros. 

*/


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
			//if(ft_atoi(argv[i]) > 2147483647)
				//ft_printf("There is a big number in the arguments");
			if (!just_numbers(argv[i]))
				exit_program(node);
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
	if(!is_sorted(&stack_a))
		ft_printf("Não está em ordem :( \n");
	ft_printf("First chunk %i\n", find_chunk(stack_a, 5, 1));
	ft_printf("First chunk %i\n", find_chunk(stack_a, 5, 2));
	ft_printf("Position of the first apperence of the chunk beggining in the head %i\n", get_rand_chunk_position_head(stack_a,  find_chunk(stack_a, 5, 1), 1));
	ft_printf("Position of the first apperence of the chunk beggining in the top %i\n", get_rand_chunk_position_top(stack_a,  find_chunk(stack_a, 5, 1), 1));

	sort(&stack_a, &stack_b);
	 
	printn(stack_a);
	printn(stack_b);
	free_list(&stack_a);
	free_list(&stack_b);
	return (0);
}
