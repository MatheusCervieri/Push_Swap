#include "push_swap.h"



void simple_sort(t_node **stack_a, t_node **stack_b)
{

}

void sort(t_node **stack_a, t_node **stack_b)
{
    int size;

    size = list_size(*stack_a);
    if(size >= 3)
        simple_sort(stack_a, stack_b);

}

