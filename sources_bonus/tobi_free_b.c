/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tobi_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:48:33 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/19 22:49:46 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap_b.h"

void	tobi_free(t_node **stack)
{
	t_node	*niddle_1;
	t_node	*niddle_2;

	niddle_1 = *stack;
	while (niddle_1)
	{
		niddle_2 = niddle_1->next;
		free(niddle_1);
		niddle_1 = niddle_2;
	}
}
