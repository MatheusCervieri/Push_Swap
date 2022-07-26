/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 23:09:47 by mvieira-          #+#    #+#             */
/*   Updated: 2022/08/10 00:36:32 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

typedef struct s_node
{
	int				value;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

void		append_node(t_node **first, t_node *new);
t_node		*get_last_node(t_node *first);
t_node		*new_node(int value);
void		printn(t_node *first);
int			only_numbers(char *str);
void		swap(t_node **head, char c);
void		double_swap(t_node **head_a, t_node **head_b);
void		insert_beggining(t_node **head, t_node *new);
void		push(t_node **receiver, t_node **giver, char c);
void		rotate(t_node **head, char c);
void		reverse(t_node **head, char c);
void		double_rotate(t_node **head_a, t_node **head_b);
void		double_reverse(t_node **head_a, t_node **head_b);
void		free_list(t_node **head);
int			just_numbers(char *str);
void		exit_program(t_node **head);
int			is_sorted(t_node **head);
int			list_size(t_node *head);
void		sort(t_node **stack_a, t_node **stack_b);
int			find_mid(t_node *stack_a);
void		hundread_sort(t_node **stack_a, t_node **stack_b);
int			get_node_position(t_node *head, int value);
int			get_max_node(t_node *head);
int			find_chunk(t_node *stack_a, int chunks_amount, int chunk);
int			get_rand_chunk_position_head(t_node *head, int value_last,
				int value_first);
int			get_rand_chunk_position_top(t_node *head, int value_last,
				int value_first);
int			is_there_chunk(t_node *head, int value_last, int value_first);
int			get_min_node(t_node *head);
t_node		*clone_list(t_node *head);
void		super_sort(t_node **stack_a, t_node **stack_b);
void		sort_five(t_node **stack_a, t_node **stack_b);
void		simple_sort(t_node **stack_a);
int			are_duplicates(t_node **stack_a);
long int	atoi_long(const char *nptr);
void		sort_four(t_node **stack_a, t_node **stack_b);
void		put_smaller(t_node **head);
void		put_bigger_a(t_node **stack_b);
void		insertion_sort(t_node **stack_a, t_node **stack_b);
void		push_chunk_to_b(t_node **stack_a, t_node **stack_b,
				int big, int small);

#endif