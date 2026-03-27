/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-24 22:58:54 by minokim           #+#    #+#             */
/*   Updated: 2026-03-24 22:58:54 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.c"

void	rotate(t_list *stack)
{
	t_node	*first;
	t_node	*last;

	if (!stack->head || !stack->head->next)
		return;
	first = stack->head;
	stack->head = first->next;

	last = stack->head;
	while(last->next != NULL)
	{
		last = last->next;
	}
	last->next = first;
	first->next = NULL;
}

void	ra(t_list *stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_list *stack_b)
{
	rotate(stack_b);
	write (1, "rb\n", 3);
}

void	rr(t_list *stack_a, t_list *stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write (1, "rr\n", 3);
}