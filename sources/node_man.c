/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_man.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 01:42:12 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/22 21:21:25 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*last_node(t_node *list)
{
	t_node	*last_node;

	while (list)
	{
	last_node = list;
		list = list->next;
	}
	return (last_node);
}

t_node	*new_node(int data)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

t_node	*befor_last(t_node *stack)
{
	t_node	*node;

	while (stack->next)
	{
		node = stack;
		stack = stack->next;
	}
	return (node);
}
