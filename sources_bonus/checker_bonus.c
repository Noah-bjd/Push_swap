/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:28:28 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/23 00:35:28 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_b.h"

int	input_check(char *op, t_node **stack_a, t_node **stack_b)
{
	if (ft_strcmp(op, "pa\n") == 0)
		return (pa(stack_a, stack_b), 1);
	else if (ft_strcmp(op, "pb\n") == 0)
		return (pb(stack_a, stack_b), 1);
	else if (ft_strcmp(op, "rrr\n") == 0)
		return (rrr(stack_a, stack_b), 1);
	else if (ft_strcmp(op, "rra\n") == 0)
		return (rra(stack_a), 1);
	else if (ft_strcmp(op, "rrb\n") == 0)
		return (rrb(stack_b), 1);
	else if (ft_strcmp(op, "rr\n") == 0)
		return (rr(stack_a, stack_b), 1);
	else if (ft_strcmp(op, "ra\n") == 0)
		return (ra(stack_a), 1);
	else if (ft_strcmp(op, "rb\n") == 0)
		return (rb(stack_b), 1);
	else if (ft_strcmp(op, "ss\n") == 0)
		return (ss(stack_a, stack_b), 1);
	else if (ft_strcmp(op, "sa\n") == 0)
		return (sa(stack_a), 1);
	else if (ft_strcmp(op, "sb\n") == 0)
		return (sb(stack_b), 1);
	else
		return (write(1, "ERROR\n", 6), 0);
}

void	checker(t_node **stack_a, t_node **stack_b)
{
	char	*input;

	while (1)
	{
		input = get_next_line(0);
		if (input == NULL)
			break ;
		if (input_check(input, stack_a, stack_b) == 0)
			free(input);
		free(input);
	}
}

void	check_time(t_node **stack_a, t_node **stack_b)
{
	checker(stack_a, stack_b);
	if (sorted(*stack_a, *stack_b) == 0)
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
}
