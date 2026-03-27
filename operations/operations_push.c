/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-24 22:58:24 by minokim           #+#    #+#             */
/*   Updated: 2026-03-24 22:58:24 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void pa(t_list *stack_a, t_list *stack_b)
{
    t_node *tmp;

    if (stack_b->size == 0)
        return ;
    tmp = stack_b->head;
    stack_b->head = stack_b->head->next;
    stack_b->size--;
    tmp->next = stack_a->head;
    stack_a->head = tmp;
    stack_a->size++;
    write(1, "pa\n", 3);
}

void pb(t_list *stack_a, t_list *stack_b)
{
    t_node *tmp;

    if (stack_a->size == 0)
        return ;
    tmp = stack_a->head;
    stack_a->head = stack_a->head->next;
    stack_a->size--;
    tmp->next = stack_b->head;
    stack_b->head = tmp;
    stack_b->size++;
    write(1, "pb\n", 3);
}

void	ra(t_list *stack_a)
{
	t_node	*first;
	t_node	*last;

	if (!stack_a->head || !stack_a->head->next)
		return;
	first = stack_a->head;
	last = stack_a->head;
}