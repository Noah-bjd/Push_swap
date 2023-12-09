/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 00:31:13 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/23 00:37:07 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_b.h"

int	if_sorted(t_node *stack_a, t_node *stack_b)
{
	if (!stack_a || stack_a->next == NULL || stack_b != NULL)
		return (0);
	while (stack_a->next != NULL)
	{
		if (stack_a->indice < (stack_a->next)->indice)
			return (1);
		stack_a = stack_a->next;
	}
	return (0);
}

int	sorted(t_node *stack_a, t_node *stack_b)
{
	t_node	*p1;
	t_node	*p2;
	int		flag;

	flag = 0;
	if (stack_a == NULL || (stack_a)->next == NULL || stack_b != NULL)
		return (1);
	p1 = stack_a;
	while (p1)
	{
		p2 = p1->next;
		while (p2)
		{
			if (p1->data > p2->data)
				flag++;
			p2 = p2->next;
		}
		p1 = p1->next;
	}
	if (flag == 0)
		return (1);
	return (0);
}
