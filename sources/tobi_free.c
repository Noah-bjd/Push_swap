/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tobi_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:40:56 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/22 21:20:19 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
