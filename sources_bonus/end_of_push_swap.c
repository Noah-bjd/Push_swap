/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_of_push_swap.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:28:53 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/23 01:03:26 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_b.h"

void	end_of_push_swap(t_node **stack_a, t_node **stack_b)
{
	tobi_free(stack_a);
	tobi_free(stack_b);
}
