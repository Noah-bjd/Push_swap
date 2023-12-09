/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_b.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouljih <nbouljih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 00:23:27 by nbouljih          #+#    #+#             */
/*   Updated: 2022/09/23 00:37:25 by nbouljih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_B_H
# define PUSH_SWAP_B_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <unistd.h>

# define BUFFER_SIZE 1500

typedef struct node
{
	int			data;
	struct node	*next;
	int			indice;
}t_node;

t_node	*befor_last(t_node *stack);
t_node	*new_node(int data);
t_node	*last_node(t_node *list);
void	check_dup(char **av, int ac);
void	tobi_free(t_node **stack);
int		sorted(t_node *stack_a, t_node *stack_b);
int		ft_atoi2(char *str, int *num);
void	checker(t_node **stack_a, t_node **stack_b);
void	pa(t_node **stack_a, t_node **stack_b);
void	push_first_node(t_node **stack, t_node *stack_b);
void	num_indice(t_node *stack_a, t_node *node);
char	*ft_strchr(char *s, int c);
void	ft_append(t_node **list, t_node *new_node);
void	get_init(int ac, char **av, t_node **stack_a, int *num);
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	rr(t_node **a, t_node **b);
void	rra(t_node **stack);
void	rrb(t_node **stack);
void	rrr(t_node **a, t_node **b);
void	ss(t_node **a, t_node **s);
void	sa(t_node **stack_a);
void	sb(t_node **stack_a);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);
int		input_compar(char *input, t_node **stack_a, t_node **stack_b);
int		compare(char *input, char *str);
int		final_part(t_node **stack_a, t_node **stack_b);
int		if_sorted(t_node *stack_a, t_node *stack_b);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *s1);
size_t	ft_strlcpy(char *dest, char *src, size_t destsize);
char	*ft_strchr(char *str, int c);
void	end_of_push_swap(t_node **stack_a, t_node **stack_b);
char	*get_next_line(int fd);
char	*ft_read(int fd, char *left_str);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_get_line(char *left_str);
char	*ft_get_new_line(char *left_str);
void	check_time(t_node **stack_a, t_node **stack_b);
#endif