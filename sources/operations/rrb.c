/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:37:07 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/22 21:19:03 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_node **stack)
{
	t_node	*n1;
	t_node	*n2;
	t_node	*n3;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	n1 = *stack;
	n2 = befor_last(*stack);
	n3 = last_node(*stack);
	n2->next = NULL;
	*stack = n3;
	n3->next = n1;
	write(1, "rrb\n", 4);
}
