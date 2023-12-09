/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operration.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:14:55 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/23 00:42:15 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	list_len(t_node *stack_x)
{
	int	i;

	i = 0;
	if (stack_x == NULL)
		return (0);
	while (stack_x)
	{
		i++;
		stack_x = stack_x->next;
	}
	return (i);
}

void	sort3(t_node **stack_a, int len)
{
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	if (((*stack_a)->indice == 0 + len)
		&& ((*stack_a)->next->next->indice == 1 + len))
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (((*stack_a)->indice == 1 + len)
		&& ((*stack_a)->next->next->indice == 2 + len))
		sa(stack_a);
	else if (((*stack_a)->indice == 1 + len)
		&& ((*stack_a)->next->next->indice == 0 + len))
		rra(stack_a);
	else if (((*stack_a)->indice == 2 + len)
		&& ((*stack_a)->next->next->indice == 1 + len))
		ra(stack_a);
	else if (((*stack_a)->indice == 2 + len)
		&& ((*stack_a)->next->next->indice == 0 + len))
	{
		sa(stack_a);
		rra(stack_a);
	}
}

void	sort5(t_node **stack_a, t_node **stack_b)
{
	int	len;

	len = list_len(*stack_a);
	while (list_len(*stack_a) > 3)
	{
		min_up(stack_a);
		pb(stack_a, stack_b);
	}
	sort3(stack_a, (len - 3));
	while ((*stack_b) != NULL)
		pa(stack_a, stack_b);
	return ;
}

void	operation1(t_node **stack_a, t_node **stack_b)
{
	int	len;

	len = list_len(*stack_a);
	if (len == 2)
	{
		if ((*stack_a)->indice > (*stack_a)->next->indice)
			sa(stack_a);
		return ;
	}
	if (len == 3)
	{
		sort3(stack_a, (len - 3));
		return ;
	}
	if (len < 6)
	{
		sort5(stack_a, stack_b);
		return ;
	}
}
