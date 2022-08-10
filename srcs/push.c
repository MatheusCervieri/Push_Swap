/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:50:30 by mvieira-          #+#    #+#             */
/*   Updated: 2022/08/09 23:30:52 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_node **receiver, t_node **giver, char c)
{
	t_node	*aux_insert;

	if (!*giver)
		return ;
	aux_insert = *giver;
	*giver = (*giver)->next;
	if (*giver)
		(*giver)->prev = NULL;
	insert_beggining(receiver, aux_insert);
	ft_printf("p%c\n", c);
}
