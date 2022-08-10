/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 00:25:34 by mvieira-          #+#    #+#             */
/*   Updated: 2022/08/10 10:51:46 by mvieira-         ###   ########.fr       */
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
