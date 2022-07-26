#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft.h"

typedef struct	s_stack
{
	int	value;
	struct s_stack *prev;
	struct s_stack *next;
}	t_stack;

typedef struct s_structs
{
	s_stack	*stack_a;
	s_stack *stack_b; 
}

#endif