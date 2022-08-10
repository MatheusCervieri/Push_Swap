/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:56:29 by mvieira-          #+#    #+#             */
/*   Updated: 2022/08/10 00:22:07 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	simple_sort(t_node **stack_a)
{
	int	nb1;
	int	nb2;
	int	nb3;

	nb1 = (*stack_a)->value;
	nb2 = (*stack_a)->next->value;
	nb3 = (*stack_a)->next->next->value;
	if (nb1 > nb2 && nb1 < nb3)
		swap(stack_a, 'a');
	if (nb1 > nb2 && nb1 > nb3 && nb2 > nb3)
	{
		swap(stack_a, 'a');
		reverse(stack_a, 'a');
	}
	if (nb1 > nb2 && nb1 > nb3 && nb2 < nb3)
		rotate(stack_a, 'a');
	if (nb1 < nb2 && nb1 < nb3 && nb2 > nb3)
	{
		swap(stack_a, 'a');
		rotate(stack_a, 'a');
	}
	if (nb1 < nb2 && nb1 > nb3 && nb2 > nb3)
		reverse(stack_a, 'a');
}

void	sort(t_node **stack_a, t_node **stack_b)
{
	int	size;

	size = list_size(*stack_a);
	if (size == 2)
		swap(stack_a, 'a');
	else if (size == 3)
		simple_sort(stack_a);
	else if (size == 4)
		sort_four(stack_a, stack_b);
	else if (size == 5)
		sort_five(stack_a, stack_b);
	else if (size <= 100)
		hundread_sort(stack_a, stack_b);
	else if (size <= 500)
		super_sort(stack_a, stack_b);
}
