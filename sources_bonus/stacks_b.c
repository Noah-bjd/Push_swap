/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:42:46 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/19 22:44:41 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap_b.h"

void	num_indice(t_node *stack_a, t_node *node)
{
	node->indice = 0;
	if (stack_a == NULL)
		return ;
	while (stack_a)
	{
		if (stack_a->data > node->data)
			stack_a->indice += 1;
		else
			node->indice += 1;
		stack_a = stack_a->next;
	}
}

void	ft_append(t_node **list, t_node *new_node)
{
	t_node	*node;

	node = *list;
	if (*list == NULL)
		*list = new_node;
	else
	{
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
}
