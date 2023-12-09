/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_new_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:25:21 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/22 21:21:13 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_first_node(t_node **stack, t_node *stack_b)
{
	stack_b->next = *stack;
	*stack = stack_b;
}
