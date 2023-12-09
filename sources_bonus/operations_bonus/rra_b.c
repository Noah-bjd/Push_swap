/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:34:56 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/19 22:37:02 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap_b.h"

void	rra(t_node **stack)
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
}
