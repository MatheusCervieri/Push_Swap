#include "push_swap.h"

void    sort_array(int *array, int len)
{
    int tmp;
	int		i;

	tmp = 0;
	i = 0;
	while (i < len - 1)
	{
		if (array[i] <= array[i + 1])
			i++;
		else
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
			i = 0;
		}
	}
}

int    find_mid(t_node *stack_a)
{
    int *array_values;
    int stack_len;
    int i;
    
    stack_len = list_size(stack_a);
    array_values = malloc(stack_len * sizeof(int*));
    if(!array_values)
        ft_printf("COLOCAR UM ERRO AQUI");
    i = 0;
    while (i < stack_len)
    {
        array_values[i] = stack_a->value;
        stack_a = stack_a->next;
        i++;
    }
    sort_array(array_values, stack_len);
    return(array_values[stack_len / 2]);
}
