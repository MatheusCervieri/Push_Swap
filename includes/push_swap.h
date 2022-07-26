#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft.h"

typedef struct	s_node
{
	int	value;
	struct s_node *prev;
	struct s_node *next;
}	t_node;

typedef struct	s_stacks
{
	t_node	*head_a;
}	t_stacks;


void	append_node(t_node **first, t_node *new);
t_node	*get_last_node(t_node *first);
t_node	*new_node(int value);
void 	printn(t_node *first);
int		only_numbers(char *str);
void 	swap(t_node *head);

#endif