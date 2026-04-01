/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-09 08:29:26 by minokim           #+#    #+#             */
/*   Updated: 2026-03-09 08:29:26 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_list
{
	t_node	*head;
	int		size;
}	t_list;

int			is_sorted(t_list *stack);
void		init_and_parse(t_list *stack_a, t_list *stack_b, char **args);
void		check_double(char **av);
void		check_num(char **args);
void		free_stack(t_list *stack);
void		free_double_pointer(char **str);
void		assign_index(t_list *stack_a);
void		tiny_sort(t_list *stack_a, t_list *stack_b);
void		setting_to_null(t_list *stack_a, t_list *stack_b);
void		radix_sort(t_list *stack_a, t_list *stack_b);
void		fill_stack(t_list *stack, char **args);
void		add_node(t_list *stack, t_node *new_node);
t_node		*ft_new_node(int value);
int			int_max_min(char *str);
long		ft_atol(const char *nptr);
void		pa(t_list *stack_a, t_list *stack_b);
void		pb(t_list *stack_a, t_list *stack_b);
void		ra(t_list *stack_a);
void		reverse_rotate(t_list *stack);
void		rra(t_list *stack_a);
void		rrb(t_list *stack_b);
void		rrr(t_list *stack_a, t_list *stack_b);
void		rotate(t_list *stack);
void		ra(t_list *stack_a);
void		rb(t_list *stack_b);
void		rr(t_list *stack_a, t_list *stack_b);
void		swap(t_list *stack);
void		sa(t_list *stack_a);
void		sb(t_list *stack_b);
void		ss(t_list *stack_a, t_list *stack_b);

#endif