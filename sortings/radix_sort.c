/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-26 06:08:51 by minokim           #+#    #+#             */
/*   Updated: 2026-03-26 06:08:51 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	radix_sort(t_list *stack_a, t_list *stack_b)
{
	int	i;
	int	j;
	int	size;
	int	max_bits;

	i = 0;
	size = stack_a->size;
	max_bits = 0;
	while (((size - 1) >> max_bits) != 0)
		max_bits++;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if (((stack_a->head->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (stack_b->size > 0)
			pa(stack_a, stack_b);
		i++;
	}
}
