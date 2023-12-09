/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:33:01 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/22 21:19:16 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	write(1, "rb\n", 3);
}
