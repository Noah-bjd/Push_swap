/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:34:12 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/22 21:20:48 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted(t_node *stack_a)
{
	t_node	*p1;
	t_node	*p2;
	int		sign;

	if (stack_a == NULL || (stack_a)->next == NULL)
		exit (1);
	p1 = stack_a;
	sign = 0;
	while (p1)
	{
		p2 = p1->next;
		while (p2)
		{
			if (p1->data > p2->data)
				sign++;
			p2 = p2->next;
		}
		p1 = p1->next;
	}
	if (sign == 0)
		return (1);
	return (0);
}
