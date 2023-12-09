/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:33:01 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/19 22:34:20 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap_b.h"

void	rb(t_node **stack_b)
{
	t_node	*n1;
	t_node	*n2;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	n1 = *stack_b;
	*stack_b = (*stack_b)->next;
	n1->next = NULL;
	n2 = last_node(*stack_b);
	n2->next = n1;
}
