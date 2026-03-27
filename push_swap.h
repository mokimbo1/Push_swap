/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-03-09 08:29:26 by minokim           #+#    #+#             */
/*   Updated: 2026-03-09 08:29:26 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "libft/libft.h"
# include "libft.h"

typedef struct s_node
{
    int             value;
    int             index;
    struct s_node   *prev;
    struct s_node   *next;
}   t_node;

typedef struct s_list
{
    t_node  *head;
    int     size;
}   t_list;

void setting_to_NULL(t_list *stack_a, t_list *stack_b);
int	Int_Max_Min(char *str);

#endif