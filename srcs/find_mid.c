/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_mid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:35:02 by mvieira-          #+#    #+#             */
/*   Updated: 2022/08/09 23:15:39 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_array(int *array, int len)
{
	int	tmp;
	int	i;

	tmp = 0;
	i = 0;
	while (i < len - 1)
	{
		if (array[i] <= array[i + 1])
			i++;
		else
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
			i = 0;
		}
	}
}

int	find_chunk(t_node *stack_a, int chunks_amount, int chunk)
{
	int	*array_values;
	int	stack_len;
	int	i;
	int	return_value;

	stack_len = list_size(stack_a);
	array_values = malloc(stack_len * sizeof(int *));
	if (!array_values)
		ft_printf("COLOCAR UM ERRO AQUI");
	i = 0;
	while (i < stack_len)
	{
		array_values[i] = stack_a->value;
		stack_a = stack_a->next;
		i++;
	}
	sort_array(array_values, stack_len);
	return_value = array_values[((stack_len / chunks_amount)) * chunk];
	free(array_values);
	return (return_value);
}
