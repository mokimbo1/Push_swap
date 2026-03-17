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

void	check_num(char **av)
{
	int i;
	int j;
	int d;
	int l;

	j = 1;
	while(av[j])
	{
		i = 0;
		if ((av[j][i] == '-' || av[j][i] == '+') && av[j][i + 1])
            i++;
		while(av[j][i])
		{
			d = ft_isdigit(av[j][i]);
			l = Int_Max_Min(av[j]);
			if (d == 0 || l == 0)
			{
				write(1, "Error\n", 6);
				exit (-1);
			}
			i++;
		}
		j++;
	}
}

//checks if there is same args multiple times
void	check_double(char **av)
{
	int i;
	int j;
	int dif;

	i = 0;
	while(av[i])
	{
		j = 0;
		while (j < i)
		{
			dif = ft_strncmp(av[i], av[j], 11);
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

int main(int ac, char **av)
{
	t_list stack_a;
	t_list stack_b;
	char **args;

	int i;
	i = 0;
	if (ac < 2)
		return (0);
	setting_to_NULL(&stack_a, &stack_b);
	if (ac == 2)
	{
		if (ac == 2)
			args = ft_split(av[1], ' ');
		else
   	 		args = &av[1];
	}
	else
		args = av;
	check_num(args);
	check_double(args);
	//fill_list();
}
