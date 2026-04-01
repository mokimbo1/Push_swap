/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-25 02:33:27 by minokim           #+#    #+#             */
/*   Updated: 2026-03-25 02:33:27 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_index(t_list *stack_a)
{
	t_node	*current;
	t_node	*compare;
	int		index;

	current = stack_a->head;
	while (current)
	{
		index = 0;
		compare = stack_a->head;
		while (compare)
		{
			if (compare->value < current->value)
				index++;
			compare = compare->next;
		}
		current->index = index;
		current = current->next;
	}
}
