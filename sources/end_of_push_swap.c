/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_of_push_swap.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 01:53:10 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/22 21:21:50 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	end_of_push_swap(t_node **stack_a, t_node **stack_b)
{
	tobi_free(stack_a);
	tobi_free(stack_b);
}
