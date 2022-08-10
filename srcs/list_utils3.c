/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:28:35 by mvieira-          #+#    #+#             */
/*   Updated: 2022/08/09 23:18:47 by mvieira-         ###   ########.fr       */
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

int	list_size(t_node *head)
{
	int	len;

	if (head == NULL)
		return (0);
	len = 1;
	while (head->next != NULL)
	{
		head = head->next;
		len++;
	}
	return (len);
}

void	printn(t_node *first)
{
	t_node	*temp;

	temp = first;
	while (temp != NULL)
	{
		ft_printf("%i ,", temp->value);
		temp = temp->next;
	}
	ft_printf("\n");
}
