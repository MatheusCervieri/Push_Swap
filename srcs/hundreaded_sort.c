#include "push_swap.h"

/*
    sa:
    swap(stack_a, 'a');
    rra:
    reverse(stack_a, 'a');
    ra:
    rotate(stack_a, 'a');
    pa:
    push(stack_a, stack_b, 'a');
    pb:
    push(stack_b, stack_a, 'b');
*/

// I find the median and push everything below the median into stack b.
void hundread_sort(t_node **stack_a, t_node **stack_b)
{
    int size;
    int mid;
    mid = find_mid(*stack_a);
    size = list_size(*stack_a);
    int i = 0;
    ft_printf("MIDDD: %i \n", mid);
    while (i < size)
    {
        if((*stack_a)->value < mid)
            push(stack_b, stack_a, 'b');
        else
        {
            rotate(stack_a, 'a');
        }
        i++;
    }
}
