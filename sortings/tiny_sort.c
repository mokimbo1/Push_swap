/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-25 21:49:30 by minokim           #+#    #+#             */
/*   Updated: 2026-03-25 21:49:30 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_list *stack_a)
{
	int	a;
	int	b;
	int	c;

	a = stack_a->head->index;
	b = stack_a->head->next->index;
	c = stack_a->head->next->next->index;
	if (a > b && b < c && a < c)
		sa(stack_a);
	else if (a > b && b > c)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (a > b && b < c && a > c)
		ra(stack_a);
	else if (a < b && b > c && a < c)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (a < b && b > c && a > c)
		rra(stack_a);
}

int	get_position(t_node *head, int target_index)
{
	int	pos;

	pos = 0;
	while (head)
	{
		if (head->index == target_index)
			return (pos);
		head = head->next;
		pos++;
	}
	return (-1);
}

void	sort_four(t_list *stack_a, t_list *stack_b)
{
	int	pos;

	pos = get_position(stack_a->head, 0);
	while (stack_a->head->index != 0)
	{
		if (pos <= stack_a->size / 2)
			ra(stack_a);
		else
			rra(stack_a);
	}
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}

void	sort_five(t_list *stack_a, t_list *stack_b)
{
	while (stack_a->head->index != 0)
	{
		if (get_position(stack_a->head, 0) <= stack_a->size / 2)
			ra(stack_a);
		else
			rra(stack_a);
	}
	pb(stack_a, stack_b);
	while (stack_a->head->index != 1)
	{
		if (get_position(stack_a->head, 1) <= stack_a->size / 2)
			ra(stack_a);
		else
			rra(stack_a);
	}
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	tiny_sort(t_list *stack_a, t_list *stack_b)
{
	if (stack_a->size == 2)
		sa(stack_a);
	else if (stack_a->size == 3)
		sort_three(stack_a);
	else if (stack_a->size == 4)
		sort_four(stack_a, stack_b);
	else if (stack_a->size == 5)
		sort_five(stack_a, stack_b);
}
