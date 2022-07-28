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

void put_bigger_a(t_node **stack_b)
{
    int size; //tootal numbers in the list;
    int middle;
    int big_position; 
    int i;

    
    size = list_size(*stack_b);
    middle = size / 2;
    big_position = get_node_position(*stack_b, get_max_node(*stack_b));
    //ft_printf("max node %i\n", big_position);
    ft_printf("middle %i", middle);
    i = 0;
    while (i < big_position - 1)
    {
        rotate(stack_b, 'b'); //rb
        i++;
    }
       
    
}

void insertion_sort(t_node **stack_a, t_node **stack_b)
{   
    int i;
    int size;
    i = 0;

    size = list_size(*stack_b);
    while (i < size)
    {
        put_bigger_a(stack_b);
        push(stack_a, stack_b, 'a');
        printn(*stack_a);
        printn(*stack_b);
        i++;
    }
}

void hundread_sort(t_node **stack_a, t_node **stack_b)
{
    
    // I find the median and push everything below the median into stack b.
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
    i = 0;
    size = list_size(*stack_a);
    while (i < size)
    {
            push(stack_b, stack_a, 'b');
        i++;
    }
    printn(*stack_a);
    printn(*stack_b);
    insertion_sort(stack_a, stack_b);
    /*
    Then I identify each the largest and smallest integer in stack b, and determine which is most efficient to rotate up/down and push back to stack a (along with the specific moves to make that happen). 
    */


}
