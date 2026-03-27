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
// int main(void)
// {
// 	t_list	*stack_a;
// 	t_node	*first_node;
// 	t_node	*second_node;
// 	t_node	*third_node;

// 	stack_a = malloc(sizeof(t_list));
// 	first_node = malloc(sizeof(t_node));
// 	second_node = malloc(sizeof(t_node));
// 	third_node = malloc(sizeof(t_node));

// 	stack_a->head = first_node;
// 	stack_a->size = 3;

// 	first_node->next = second_node;
// 	first_node->prev = NULL;
// 	first_node->index = 1;
// 	first_node->value = 1;
	
// 	second_node->next = third_node;
// 	second_node->prev = first_node;
// 	second_node->index = 2;
// 	second_node->value = 2;

// 	third_node->next = NULL;
// 	third_node->prev = second_node;
// 	third_node->index = 3;
// 	third_node->value = 3;

// 	#include <stdio.h>

// 	sa(stack_a);
	
// 	printf("%d", stack_a->head->value);
// 	printf("%d", stack_a->head->next->value);
// 	printf("%d", stack_a->head->next->next->value);
// }
