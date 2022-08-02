/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:38:47 by mvieira-          #+#    #+#             */
/*   Updated: 2022/08/01 22:39:47 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_node **head)
{
	t_node	*aux;
	t_node	*head_clone;

	head_clone = *head;
	if (!head_clone)
		return (0);
	aux = head_clone;
	while (aux->next != NULL)
	{
		if (aux->value > aux->next->value)
			return (0);
		aux = aux->next;
	}
	return (1);
}
