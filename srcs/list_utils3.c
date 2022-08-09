/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:28:35 by mvieira-          #+#    #+#             */
/*   Updated: 2022/08/09 12:41:14 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	are_duplicates(t_node **stack_a)
{
	t_node	*aux;
	t_node	*copy;

	aux = *stack_a;
	while (aux->next != NULL)
	{
		copy = aux->next;
		while (copy != NULL)
		{
			if (aux->value == copy->value)
				return (0);
			copy = copy->next;
		}
		aux = aux->next;
	}
	return (1);
}
