/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hundreaded_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 23:02:55 by mvieira-          #+#    #+#             */
/*   Updated: 2022/08/10 00:17:00 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_bigger_a(t_node **stack_b)
{
	int	size;
	int	middle;
	int	big_position;
	int	i;

	size = list_size(*stack_b);
	middle = size / 2;
	big_position = get_node_position(*stack_b, get_max_node(*stack_b));
	if (big_position > middle)
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
			rotate(stack_b, 'b');
			i++;
		}
	}
}

void	put_smaller(t_node **head)
{
	int	size;
	int	middle;
	int	small_position;
	int	i;

	size = list_size(*head);
	middle = size / 2;
	small_position = get_node_position(*head, get_min_node(*head));
	if (small_position > middle)
	{
		i = size;
		while (i + 1 > small_position)
		{
			reverse(head, 'a');
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < small_position - 1)
		{
			rotate(head, 'a');
			i++;
		}
	}
}

void	insertion_sort(t_node **stack_a, t_node **stack_b)
{
	int	i;
	int	size;

	i = 0;
	size = list_size(*stack_b);
	while (i < size)
	{
		put_bigger_a(stack_b);
		push(stack_a, stack_b, 'a');
		i++;
	}
}

void	push_chunk_to_b(t_node **stack_a, t_node **stack_b, int big, int small)
{
	int	i;
	int	hold_first;
	int	hold_second;

	i = 0;
	while (get_rand_chunk_position_head(*stack_a, big, small) != -10
		|| get_rand_chunk_position_top(*stack_a, big, small) != -10)
	{
		hold_first = get_rand_chunk_position_head(*stack_a, big, small);
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
		}
		push(stack_b, stack_a, 'b');
	}
}

void	sort_five_test(t_node **stack_a, t_node **stack_b)
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
	t_node	*clone_stack = clone_list(*stack_a);

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
	push_chunks_to_b(clone_stack, stack_a , stack_b);
	push_chunk_to_b(stack_a, stack_b, get_max_node(clone_stack) + 1,
		find_chunk(clone_stack, 11, 10));
	insertion_sort(stack_a, stack_b);
	free_list(&clone_stack);
}
