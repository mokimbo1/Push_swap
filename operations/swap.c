/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-24 04:24:04 by minokim           #+#    #+#             */
/*   Updated: 2026-03-24 04:24:04 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list *stack)
{
	t_node	*first;
	t_node	*second;

	if (!stack->head || !stack->head->next)
		return ;
	first = stack->head;
	second = stack->head->next;
	first->next = second->next;
	second->next = first;
	stack->head = second;
}

void	sa(t_list *stack_a)
{
	swap (stack_a);
	write (1, "sa\n", 3);
}

void	sb(t_list *stack_b)
{
	swap (stack_b);
	write (1, "sb\n", 3);
}

void	ss(t_list *stack_a, t_list *stack_b)
{
	swap (stack_a);
	swap (stack_b);
	write (1, "ss\n", 3);
}
