/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:29:51 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/23 02:53:25 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_b.h"

void	get_init(int ac, char **av, t_node **stack_a, int *num)
{
	int		i;
	t_node	*node;

	i = 1;
	while (i < ac)
	{
		if (ft_atoi2(av[i], num) == 1)
		{
			tobi_free(stack_a);
			write(1, "ERROR\n", 6);
			exit (1);
		}
		node = new_node(*num);
		num_indice(*stack_a, node);
		ft_append(stack_a, node);
		i++;
	}
}

int	main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		exit(1);
	get_init(ac, av, &stack_a, &i);
	check_dup(av + 1, ac - 1);
	check_time(&stack_a, &stack_b);
	end_of_push_swap(&stack_a, &stack_b);
}
