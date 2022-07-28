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

void sort_five(t_node **stack_a, t_node **stack_b)
{

    push(stack_b, stack_a, 'b');
    push(stack_b, stack_a, 'b');
    simple_sort(stack_a);
    //buguei.
}

void sort(t_node **stack_a, t_node **stack_b)
{
    int size;

    size = list_size(*stack_a);
    if(size == 2)
        swap(stack_a, 'a');
    if(size == 3)
        simple_sort(stack_a);
    if(size <= 100)
        hundread_sort(stack_a, stack_b);
}

