/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:50:30 by mvieira-          #+#    #+#             */
/*   Updated: 2022/08/09 17:13:28 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//push(stack_a, stack_b, 'a');

void	push(t_node **receiver, t_node **giver, char c)
{
	t_node	*aux_insert;
	
	if (!*giver)
		return ;
	aux_insert = *giver;
	
	*giver = (*giver)->next;
	if (*giver)
		(*giver)->prev = NULL;
	ft_printf("The value of receiver %p\n", (*receiver));	
	printn(*receiver);
	ft_printf("The value of aux insert %i\n", aux_insert->value);
	insert_beggining(receiver, aux_insert);
	ft_printf("p%c\n", c);
}
