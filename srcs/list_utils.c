/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:40:17 by mvieira-          #+#    #+#             */
/*   Updated: 2022/08/09 23:18:45 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*new_node(int value)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	new->value = value;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

t_node	*get_last_node(t_node *first)
{
	t_node	*temp;

	if (first == NULL)
		return (NULL);
	temp = first;
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}

void	append_node(t_node **first, t_node *new)
{
	t_node	*last;

	if (*first == NULL)
	{
		*first = new;
		new->prev = NULL;
		new->next = NULL;
		return ;
	}
	else
	{
		last = get_last_node(*first);
		last->next = new;
		new->prev = last;
		new->next = NULL;
	}
}

t_node	*get_first_node(t_node *head)
{
	return (head);
}

void	insert_beggining(t_node **head, t_node *new)
{
	t_node	*first;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
		return ;
	}
	else
	{
		first = get_first_node(*head);
		first->prev = new;
		new->prev = NULL;
		new->next = first;
		*head = new;
	}
}

