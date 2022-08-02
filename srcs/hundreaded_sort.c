
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
    if(big_position > middle)
    {
        i = size;
        while (i + 1 > big_position)
        {
            reverse(stack_b, 'b');
            i--;
        }
    }
    else 
    {
        i = 0;
        while (i < big_position - 1)
        {
            rotate(stack_b, 'b'); //rb
            i++;
        }
    }
    /*
  
    */ 
    
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
/*
    Chunks:
    Last:
    int big = get_max_node(*stack_a) + 1;
    int small = find_chunk(*stack_a, 5, 4);

    Second: 
    int big = find_chunk(*stack_a, 5, 2);
    int small = find_chunk(*stack_a, 5, 1);
    First:
    int big = find_chunk(*stack_a, 5, 1);
    int small = get_min_node(*stack_a);
*/
void push_chunk_to_b(t_node **stack_a, t_node **stack_b, int big, int small)
{
    int i;
    i = 0;
    //
    int hold_first;
    int hold_second; 

    while (get_rand_chunk_position_head(*stack_a, big , small) != -10 || get_rand_chunk_position_top(*stack_a, big, small) != -10)
    {
    hold_first = get_rand_chunk_position_head(*stack_a, big , small);
    hold_second = get_rand_chunk_position_top(*stack_a, big, small);
  
    if ((hold_first) >= (hold_second))
    {
        i = 0;
        while ((i) < (hold_second))
        {
            reverse(stack_a, 'a');
            i++;
        }
    }
    else
    {
        i = 0;
        while (i < hold_first - 1)
        {
        rotate(stack_a, 'a');
        i++;
        }
       // girar para cima fazendo hold first chegar primeiro - rotate
    }
    push(stack_b, stack_a, 'b');
    
    }

}

void hundread_sort(t_node **stack_a, t_node **stack_b)
{
    t_node *clone_stack = clone_list(*stack_a);

    push_chunk_to_b(stack_a, stack_b, find_chunk(clone_stack, 5, 1), get_min_node(clone_stack));
    push_chunk_to_b(stack_a, stack_b, find_chunk(clone_stack, 5, 2), find_chunk(clone_stack, 5, 1));
    push_chunk_to_b(stack_a, stack_b, find_chunk(clone_stack, 5, 3), find_chunk(clone_stack, 5, 2));
    push_chunk_to_b(stack_a, stack_b, find_chunk(clone_stack, 5, 4), find_chunk(clone_stack, 5, 3));
    
    printn(*stack_a);
    printn(*stack_b);
    free_list(&clone_stack);
}
