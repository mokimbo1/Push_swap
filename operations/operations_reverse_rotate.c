/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_reverse_rotate.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-24 23:28:51 by minokim           #+#    #+#             */
/*   Updated: 2026-03-24 23:28:51 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_list *stack)
{
	t_node	*before_last;
	t_node	*last;

	if (!stack->head || !stack->head->next)
		return;
	
	before_last = NULL;
	last = stack->head;

	while(last->next != NULL)
	{
		before_last = last;
		last = last->next;
	}
	before_last->next = NULL;

	last->next = stack->head;
	stack->head = last;
}

void	rra(t_list *stack_a)
{
	reverse_rotate (stack_a);
	write (1, "rra\n", 4);
}

void	rrb(t_list *stack_b)
{
	reverse_rotate (stack_b);
	write (1, "rrb\n", 4);
}

void	rrr(t_list *stack_a, t_list *stack_b)
{
	reverse_rotate (stack_a);
	reverse_rotate (stack_b);
	write (1, "rrr\n", 4);
}