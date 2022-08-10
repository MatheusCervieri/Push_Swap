/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:47:33 by mvieira-          #+#    #+#             */
/*   Updated: 2022/08/09 23:29:33 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	input_validation(char *argv[], t_node **node)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (!just_numbers(argv[i]))
			exit_program(node);
		if (atoi_long(argv[i]) > 2147483647)
			exit_program(node);
		append_node(node, new_node(ft_atoi(argv[i])));
		i++;
	}
	if (!are_duplicates(node))
		exit_program(node);
}

int	main(int argc, char *argv[])
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	input_validation(argv, &stack_a);
	if (!is_sorted(&stack_a))
		sort(&stack_a, &stack_b);
	free_list(&stack_a);
	free_list(&stack_b);
	return (0);
}
