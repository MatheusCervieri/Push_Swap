#include "push_swap.h"

/* 
void	sort_three_elements_a_asc(t_stacks *stacks)
{
	int	first;
	int	second;
	int	third;

	first = stacks->stack_a->content;
	second = stacks->stack_a->next->content;
	third = stacks->stack_a->next->next->content;
	if (first > second && first > third && second > third)
	{
		swap_a(stacks);
		reverse_rotate_a(stacks);
	}
	else if (first < second && first < third && second > third)
	{
		swap_a(stacks);
		rotate_a(stacks);
	}
	else if (first > second && first < third && second < third)
		swap_a(stacks);
	else if (first < second && first > third && second > third)
		reverse_rotate_a(stacks);
	else if (first > second && first > third && second < third)
		rotate_a(stacks);
	return ;
}
*/

/*
    sa
    swap(stack_a, 'a');
*/

void simple_sort(t_node **stack_a, t_node **stack_b)
{
    int nb1;
    int nb2;
    int nb3;
    nb1 = (*stack_a)->value;
    nb2 = (*stack_a)->next->value;
    nb3 = (*stack_a)->next->next->value;
    if(nb1 > nb2 && nb1 < nb3)
        swap(stack_a, 'a');
    swap(stack_b, 'i');
}

void sort(t_node **stack_a, t_node **stack_b)
{
    int size;

    size = list_size(*stack_a);
    if(size >= 3)
        simple_sort(stack_a, stack_b);

}

