/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 10:52:00 by mvieira-          #+#    #+#             */
/*   Updated: 2022/08/10 10:52:02 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
