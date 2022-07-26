#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft.h"

typedef struct	s_node
{
	int	value;
	struct s_stack *prev;
	struct s_stack *next;
}	t_node;

typedef struct s_stacks
{
	s_stack	*stack_a;
	s_stack *stack_b; 
}	t_stacks;

#endif