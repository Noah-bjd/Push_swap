/* ************************************************************************** */
/*	                                                                          */
/*                                                        :::      ::::::::   */
/*   push_sawp.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 23:05:30 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/22 20:53:58 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct node
{
	int			data;
	struct node	*next;
	int			indice;
}t_node;

void	check_dup(char **av, int ac);
void	ft_append(t_node **list, t_node *new_node);
void	num_indice(t_node *stack_a, t_node *node);
t_node	*new_node(int data);
int		num_sign_check(char *str, int *sign);
int		ft_atoi2(char *str, int *num);
int		get_init(int ac, char **av, t_node **stack_a, int *num);
int		sorted(t_node *stack_a);
void	tobi_free(t_node **stack);
void	sa(t_node **stack_a);
int		list_len(t_node *stack_x);
t_node	*last_node(t_node *list);
t_node	*befor_last(t_node *stack);
void	rra(t_node **stack);
void	pb(t_node **stack_a, t_node **stack_b);
void	ra(t_node **stack_a);
void	min_up(t_node **t_stack);
void	push_first_node(t_node **stack, t_node *stack_b);
void	pa(t_node **stack_a, t_node **stack_b);
void	operation1(t_node **stack_a, t_node **stack_b);
void	operation2(t_node **stack_a, t_node **stack_b, int len);
void	rb(t_node **stack_b);
void	rrb(t_node **stack);
void	sort_table(t_node **stack_a, \
		t_node **stack_b, int table, int indice_table);
void	final_sort(t_node **stack_a, t_node **stack_b);
void	who_s_first(t_node **stack_b, int indice, int i_0, int i_1);
void	state_sort(t_node **stack_a, t_node **stack_b, int dev);
int		search_table(t_node *stack_b, int index);
void	order_table(t_node **stack_b, int index_1, int i);
void	sort_time(t_node **stack_a, t_node **stack_b);
void	end_of_push_swap(t_node **stack_a, t_node **stack_b);
void	sb(t_node **stack_a);
void	rr(t_node **a, t_node **b);
void	ss(t_node **a, t_node **s);
#endif