/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:09:48 by mvieira-          #+#    #+#             */
/*   Updated: 2022/08/09 12:20:12 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_node **head)
{
	t_node	*aux;
	t_node	*head_clone;

	head_clone = *head;
	if (head_clone == NULL)
		return ;
	while (head_clone->next)
	{
		aux = head_clone->next;
		free(head_clone);
		head_clone = aux;
	}
	free(head_clone);
}

void	exit_program(t_node **head)
{
	if (head != NULL)
		free_list(head);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}
