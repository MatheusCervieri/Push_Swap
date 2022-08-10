/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 00:25:34 by mvieira-          #+#    #+#             */
/*   Updated: 2022/08/10 10:50:29 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_bigger_util(t_node **head, int position)
{
	int	i;

	i = 0;
	while (i < position - 1)
	{
		rotate(head, 'b');
		i++;
	}
}

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
		put_bigger_util(stack_b, big_position);
	}
}

void	put_smaller_util(t_node **head, int small_position)
{
	int	i;

	i = 0;
	while (i < small_position - 1)
	{
		rotate(head, 'a');
		i++;
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
		put_smaller_util(head, small_position);
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

void	reverse_loop(t_node **stack_a, int hold_second)
{
	int	i;

	i = 0;
	while ((i) < (hold_second))
	{
		reverse(stack_a, 'a');
		i++;
	}
}

void	rotate_loop(t_node **stack_a, int hold_first)
{
	int	i;

	i = 0;
	while (i < hold_first - 1)
	{
		rotate(stack_a, 'a');
		i++;
	}
}

void	push_chunk_to_b(t_node **stack_a, t_node **stack_b, int big, int small)
{
	int	hold_first;
	int	hold_second;

	while (get_rand_chunk_position_head(*stack_a, big,
			small) != -10 || get_rand_chunk_position_top(*stack_a,
			big, small) != -10)
	{
		hold_first = get_rand_chunk_position_head(*stack_a, big, small);
		hold_second = get_rand_chunk_position_top(*stack_a, big, small);
		if ((hold_first) >= (hold_second))
		{
			reverse_loop(stack_a, hold_second);
		}
		else
		{
			rotate_loop(stack_a, hold_first);
		}
		push(stack_b, stack_a, 'b');
	}
}
