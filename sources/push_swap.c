/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:27:11 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/23 02:53:03 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_init(int ac, char **av, t_node **stack_a, int *num)
{
	int		i;
	t_node	*node;

	i = 1;
	while (i < ac)
	{
		if (ft_atoi2(av[i], num) == 1)
		{
			write(1, "ERROR\n", 6);
			return (1);
		}
		node = new_node(*num);
		num_indice(*stack_a, node);
		ft_append(stack_a, node);
		i++;
	}
	return (0);
}

void	sort_time(t_node **stack_a, t_node **stack_b)
{
	int	len;

	len = list_len(*stack_a);
	if (len < 6)
		operation1(stack_a, stack_b);
	else if (len <= 100)
		state_sort(stack_a, stack_b, 5);
	else if (len <= 500)
		state_sort(stack_a, stack_b, 10);
}

int	main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		exit (1);
	check_dup(av + 1, ac - 1);
	if (get_init(ac, av, &stack_a, &i) == 1)
		return (tobi_free(&stack_a), 1);
	if (sorted(stack_a) == 1)
		return (tobi_free(&stack_a), 0);
	sort_time(&stack_a, &stack_b);
	final_sort(&stack_a, &stack_b);
	end_of_push_swap(&stack_a, &stack_b);
}
