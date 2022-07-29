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

void hundread_sort(t_node **stack_a, t_node **stack_b)
{
    

    int i;
    int j;
    i = 0;
    //
    int hold_first;
    int hold_second; 
    int big = find_chunk(*stack_a, 3, 2);
    int small = get_min_node(*stack_a);
    ft_printf("Small: %i\n", small);
    ft_printf("Big: %i \n", big);
    j = 0;
    while (get_rand_chunk_position_head(*stack_a, big , small) != -10 || get_rand_chunk_position_top(*stack_a, big, small) != -10)
    {
    hold_first = get_rand_chunk_position_head(*stack_a, big , small);
    hold_second = get_rand_chunk_position_top(*stack_a, big, small);
    ft_printf("Hold firsxt%i\n",  hold_first);
    ft_printf("Hold sec%i\n",  hold_second);
   
  
    
    if ((hold_first) >= (hold_second))
    {
        i = 0;
        while ((i) < (hold_second))
        {
            reverse(stack_a, 'a');
            printn(*stack_a);
            i++;
        }
    }
    else
    {
        i = 0;
        while (i < hold_first - 1)
        {
        rotate(stack_a, 'a');
        printn(*stack_a);
        i++;
        }
       // girar para cima fazendo hold first chegar primeiro - rotate
    }
    printn(*stack_a);
    printn(*stack_b);
    push(stack_b, stack_a, 'b');
    
    }
    hold_first = get_rand_chunk_position_head(*stack_a,  4, 2);
    hold_second = get_rand_chunk_position_top(*stack_a, 4, 2);
    ft_printf("Hold firsxt%i\n",  hold_first);
    ft_printf("Hold sec%i\n",  hold_second);

    printn(*stack_a);
    printn(*stack_b);
    j++;
    
  
    
    /*
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
    */
    /*
    Then I identify each the largest and smallest integer in stack b, and determine which is most efficient to rotate up/down and push back to stack a (along with the specific moves to make that happen). 
    */
}
