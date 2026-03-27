/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setting_to_NULL.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-11 02:13:36 by minokim           #+#    #+#             */
/*   Updated: 2026-03-11 02:13:36 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void setting_to_NULL(t_list *stack_a, t_list *stack_b)
{
	stack_a->head = NULL;
	stack_a->size = 0;
	stack_b->head = NULL;
	stack_b->size = 0;
}
