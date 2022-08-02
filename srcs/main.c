/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:47:33 by mvieira-          #+#    #+#             */
/*   Updated: 2022/08/01 22:50:02 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	input_validation(int argc, char *argv[], t_node **node)
{
	int	i;

	if (argc < 2)
		ft_printf("Invalid number of arguments");
	else
	{
		i = 1;
		while (argv[i])
		{
			// if(ft_atoi(argv[i]) > 2147483647)
			// ft_printf("There is a big number in the arguments");
			if (!just_numbers(argv[i]))
				exit_program(node);
			append_node(node, new_node(ft_atoi(argv[i])));
			i++;
		}
	}
}

int	main(int argc, char *argv[])
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	input_validation(argc, argv, &stack_a);
	if (!is_sorted(&stack_a))
		ft_printf("Não está em ordem :( \n");
	sort(&stack_a, &stack_b);
	free_list(&stack_a);
	free_list(&stack_b);
	return (0);
}
