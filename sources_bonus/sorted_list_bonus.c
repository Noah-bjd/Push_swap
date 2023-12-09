/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_list_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 00:32:16 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/23 00:32:19 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_b.h"

int	sorted_list(t_node *stack_a, t_node *stack_b)
{
	t_node	*node1;
	t_node	*node2;
	int		flag;

	flag = 0;
	if (stack_a == NULL || (stack_a)->next == NULL || stack_b != NULL)
		return (0);
	node1 = stack_a;
	while (node1)
	{
		node2 = node1->next;
		while (node2)
		{
			if (node1->data > node2->data)
				flag++;
			node2 = node2->next;
		}
		node1 = node1->next;
	}
	if (flag == 0 && stack_b == NULL)
		return (1);
	return (0);
}
