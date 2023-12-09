/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 01:49:26 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/22 21:21:31 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_small(t_node *stack, int *indice)
{
	int	node;
	int	i;
	int	x;

	i = 0;
	x = 0;
	node = stack->indice;
	while (stack)
	{
		if (stack->indice < node)
		{
			node = stack->indice;
			i = x;
		}
		stack = stack->next;
		x++;
	}
	*indice = node;
	return (i);
}

void	min_up(t_node **t_stack)
{
	int	i;
	int	index;

	i = 0;
	if (*t_stack == NULL || (*t_stack)->next == NULL)
		exit(1);
	i = get_small(*t_stack, &index);
	if (i < 2)
	{
		while ((*t_stack)->indice != index)
			ra(t_stack);
	}
	else
	{
		while ((*t_stack)->indice != index)
			rra(t_stack);
	}
}
