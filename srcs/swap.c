/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:58:56 by mvieira-          #+#    #+#             */
/*   Updated: 2022/08/01 22:59:10 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node **head, char c)
{
	int		aux;
	t_node	*aux_node;

	aux_node = *head;
	aux = aux_node->value;
	aux_node->value = aux_node->next->value;
	aux_node->next->value = aux;
	if (c != 0)
		ft_printf("s%c\n", c);
}

void	double_swap(t_node **head_a, t_node **head_b)
{
	swap(head_a, 0);
	swap(head_b, 0);
	ft_printf("ss\n");
}
