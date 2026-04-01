/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-25 23:21:25 by minokim           #+#    #+#             */
/*   Updated: 2026-03-25 23:21:25 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_double_pointer(char **str)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	free_stack(t_list *stack)
{
	t_node	*tmp;
	t_node	*next;

	tmp = stack->head;
	while (tmp)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	stack->head = NULL;
}
