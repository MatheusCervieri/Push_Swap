/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 12:28:35 by mvieira-          #+#    #+#             */
/*   Updated: 2022/08/09 23:26:23 by mvieira-         ###   ########.fr       */
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

int	is_there_chunk(t_node *head, int value_last, int value_first)
{
	int		len;
	t_node	*last_node;

	last_node = get_last_node(head);
	if (head == NULL)
		return (0);
	len = 1;
	while (last_node->prev != NULL)
	{
		if (last_node->value < value_last && last_node->value >= value_first)
			return (1);
		last_node = last_node->prev;
		len++;
	}
	return (0);
}

t_node	*clone_list(t_node *head)
{
	t_node	*cloned;
	t_node	*cloned_head;

	cloned = malloc(list_size(head) * sizeof(t_node *));
	cloned_head = cloned;
	cloned->value = head->value;
	cloned->next = NULL;
	cloned->prev = NULL;
	head = head->next;
	while (head != NULL)
	{
		append_node(&cloned, new_node(head->value));
		head = head->next;
	}
	return (cloned_head);
}
