/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minokim <minokim@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-10 19:37:32 by minokim           #+#    #+#             */
/*   Updated: 2026-02-10 19:37:32 by minokim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_num(char **args)
{
	int	i;
	int	j;

	j = 0;
	while (args[j])
	{
		if (Int_Max_Min (args[j]) == 0)
		{
			write (2, "Error\n", 6);
			exit (-1);
		}
		i = 0;
		if ((args[j][i] == '-' || args[j][i] == '+') && args[j][i + 1])
			i++;
		while (args[j][i])
		{
			if (ft_isdigit(args[j][i]) == 0)
			{
				write (2, "Error\n", 6);
				exit (-1);
			}
			i++;
		}
		j++;
	}
}

void	check_double(char **av)
{
	int	i;
	int	j;
	int	dif;

	i = 0;
	while (av[i])
	{
		j = 0;
		while (j < i)
		{
			dif = ft_strncmp (av[i], av[j], 11);
			if (dif == 0)
			{
				write (1, "Error\n", 6);
				exit (-1);
			}
			j++;
		}
		i++;
	}
}

void	init_and_parse(t_list *stack_a, t_list *stack_b, char **args)
{
	check_num (args);
	check_double (args);
	setting_to_NULL(&stack_a, &stack_b);
	fill_stack(&stack_a, args);
	assign_index(&stack_a);
}

int is_sorted(t_list *stack)
{
    t_node *tmp;

    if (!stack->head)
        return (1);
    tmp = stack->head;
    while (tmp->next)
    {
        if (tmp->value > tmp->next->value)
            return (0);
        tmp = tmp->next;
    }
    return (1);
}

int main(int ac, char **av)
{
    t_list  stack_a;
    t_list  stack_b;
    char    **args;

    if (ac < 2)
        return (0);
    if (ac == 2)
        args = ft_split(av[1], ' ');
    else
        args = &av[1];
    if (!args || !args[0])
        return (write(2, "Error\n", 6), 1);
    init_and_parse(&stack_a, &stack_b, args);
    if (!is_sorted(&stack_a))
    {
        if (stack_a.size <= 5)
            tiny_sort(&stack_a, &stack_b);
        else
            radix_sort(&stack_a, &stack_b);
    }
    if (ac == 2)
        free_double_pointer(args);
    free_stack(&stack_a);
    return (0);
}
