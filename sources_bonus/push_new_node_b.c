/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_new_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:30:12 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/19 22:31:17 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap_b.h"

void	push_first_node(t_node **stack, t_node *stack_b)
{
	stack_b->next = *stack;
	*stack = stack_b;
}
