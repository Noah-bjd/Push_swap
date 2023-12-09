/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_man.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:00:34 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/19 22:05:41 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap_b.h"

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

	if (!stack)
		return (NULL);
	while (stack->next)
	{
		node = stack;
		stack = stack->next;
	}
	return (node);
}
