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
void 	swap(t_node **head);
void 	double_swap(t_node **head_a, t_node **head_b);
void	insert_beggining(t_node **head, t_node *new);
void 	push(t_node **receiver, t_node **giver);
void	rotate(t_node **head);
void 	reverse(t_node **head);
void 	double_rotate(t_node **head_a, t_node **head_b);
void 	double_reverse(t_node **head_a, t_node **head_b);
void 	free_list(t_node **head);



#endif