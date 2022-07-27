#include "push_swap.h"



/*
    sa:
    swap(stack_a, 'a');
    rra:
    reverse(stack_a, 'a');
    ra:
    rotate(stack_a, 'a');
*/

void simple_sort(t_node **stack_a)
{
    int nb1;
    int nb2;
    int nb3;
    nb1 = (*stack_a)->value;
    nb2 = (*stack_a)->next->value;
    nb3 = (*stack_a)->next->next->value;
    if(nb1 > nb2 && nb1 < nb3)
        swap(stack_a, 'a');
    if(nb1 > nb2 && nb1 > nb3 && nb2 > nb3)
    {
        swap(stack_a, 'a');
        reverse(stack_a, 'a');
    }
    if(nb1 > nb2 && nb1 > nb3 && nb2 < nb3)
        rotate(stack_a, 'a');
    if(nb1 < nb2 && nb1 < nb3 && nb2 > nb3)
    {
        swap(stack_a, 'a');
        rotate(stack_a, 'a');
    }
    if(nb1 < nb2 && nb1 > nb3 && nb2 > nb3)
        reverse(stack_a, 'a');
}

void sort(t_node **stack_a, t_node **stack_b)
{
    int size;

    size = list_size(*stack_a);
    if(size == 3)
        simple_sort(stack_a);
    printn(*stack_b);
}

