/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:52:27 by mvieira-          #+#    #+#             */
/*   Updated: 2022/08/01 22:53:12 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse(t_node **head, char c)
{
	t_node	*aux;
	t_node	*head_clone;

	head_clone = *head;
	if (head_clone == NULL || head_clone->next == NULL)
		return ;
	aux = get_last_node(*head);
	if (aux->prev)
		(aux->prev)->next = NULL;
	insert_beggining(head, aux);
	if (c != 0)
		ft_printf("rr%c\n", c);
}

void	double_reverse(t_node **head_a, t_node **head_b)
{
	reverse(head_a, 0);
	reverse(head_b, 0);
	ft_printf("rrr\n");
}
