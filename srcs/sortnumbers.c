/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortnumbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 23:02:55 by mvieira-          #+#    #+#             */
/*   Updated: 2022/08/10 00:31:57 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four(t_node **stack_a, t_node **stack_b)
{
	put_smaller(stack_a);
	push(stack_b, stack_a, 'b');
	simple_sort(stack_a);
	push(stack_a, stack_b, 'a');
}

void	sort_five(t_node **stack_a, t_node **stack_b)
{
	put_smaller(stack_a);
	push(stack_b, stack_a, 'b');
	put_smaller(stack_a);
	push(stack_b, stack_a, 'b');
	simple_sort(stack_a);
	insertion_sort(stack_a, stack_b);
}

void	hundread_sort(t_node **stack_a, t_node **stack_b)
{
	t_node	*clone_stack;

	clone_stack = clone_list(*stack_a);
	push_chunk_to_b(stack_a, stack_b, find_chunk(clone_stack, 5, 1),
		get_min_node(clone_stack));
	push_chunk_to_b(stack_a, stack_b, find_chunk(clone_stack, 5, 2),
		find_chunk(clone_stack, 5, 1));
	push_chunk_to_b(stack_a, stack_b, find_chunk(clone_stack, 5, 3),
		find_chunk(clone_stack, 5, 2));
	push_chunk_to_b(stack_a, stack_b, find_chunk(clone_stack, 5, 4),
		find_chunk(clone_stack, 5, 3));
	push_chunk_to_b(stack_a, stack_b, get_max_node(clone_stack) + 1,
		find_chunk(clone_stack, 5, 4));
	insertion_sort(stack_a, stack_b);
	free_list(&clone_stack);
}

void	push_chunks_to_b(t_node *clone_stack, t_node **stack_a,
	t_node **stack_b)
{
	push_chunk_to_b(stack_a, stack_b, find_chunk(clone_stack, 11, 2),
		find_chunk(clone_stack, 11, 1));
	push_chunk_to_b(stack_a, stack_b, find_chunk(clone_stack, 11, 3),
		find_chunk(clone_stack, 11, 2));
	push_chunk_to_b(stack_a, stack_b, find_chunk(clone_stack, 11, 4),
		find_chunk(clone_stack, 11, 3));
	push_chunk_to_b(stack_a, stack_b, find_chunk(clone_stack, 11, 5),
		find_chunk(clone_stack, 11, 4));
	push_chunk_to_b(stack_a, stack_b, find_chunk(clone_stack, 11, 6),
		find_chunk(clone_stack, 11, 5));
	push_chunk_to_b(stack_a, stack_b, find_chunk(clone_stack, 11, 7),
		find_chunk(clone_stack, 11, 6));
	push_chunk_to_b(stack_a, stack_b, find_chunk(clone_stack, 11, 8),
		find_chunk(clone_stack, 11, 7));
	push_chunk_to_b(stack_a, stack_b, find_chunk(clone_stack, 11, 9),
		find_chunk(clone_stack, 11, 8));
	push_chunk_to_b(stack_a, stack_b, find_chunk(clone_stack, 11, 10),
		find_chunk(clone_stack, 11, 9));
}

void	super_sort(t_node **stack_a, t_node **stack_b)
{
	t_node	*clone_stack;

	clone_stack = clone_list(*stack_a);
	push_chunk_to_b(stack_a, stack_b, find_chunk(clone_stack, 11, 1),
		get_min_node(clone_stack));
	push_chunks_to_b(clone_stack, stack_a, stack_b);
	push_chunk_to_b(stack_a, stack_b, get_max_node(clone_stack) + 1,
		find_chunk(clone_stack, 11, 10));
	insertion_sort(stack_a, stack_b);
	free_list(&clone_stack);
}
