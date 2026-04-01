/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-24 00:08:34 by minokim           #+#    #+#             */
/*   Updated: 2026-03-24 00:08:34 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*ft_new_node(int value)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = 0;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

void	add_node(t_list *stack, t_node *new_node)
{
	t_node	*temp;

	if (!stack->head)
	{
		stack->head = new_node;
		return ;
	}
	temp = stack->head;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
}

void	fill_stack(t_list *stack, char **args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		add_node(stack, ft_new_node((int)ft_atol(args[i])));
		stack->size++;
		i++;
	}
}
