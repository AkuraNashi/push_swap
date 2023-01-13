/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:59:43 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/12/29 13:59:44 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_stack_b(t_ps *env)
{
	int	idx;

	while (lst_len(env->b) != 0)
	{
		idx = found_highest(env);
		if (idx == 1)
			pa(env);
		else if (idx == 2)
		{
			sb(env);
			pa(env);
		}
		else
		{
			while (found_highest(env) != 1)
			{
				if (lst_len(env->b) / 2 > idx)
					rb(env);
				else
					rrb(env);
			}
		}
	}
}

void	solve_stack(t_ps *env, int stack)
{
	int	i;

	push_75(env, stack);
//	printf("action 75 : [%d]\n", env->action); //174
	push_25(env);
//	printf("action 25 : [%d]\n", env->action); //278
	i = 1;
	while (i != env->len / stack)
	{
		pa(env);
		i++;
	}
	sort_stack_b(env);
}

void	solver(t_ps *env)
{
	int	len;

	len = lst_len(env->a);
	if (len <= 10)
		solve(env);
	else if (len > 10 && len <= 100)
		solve_stack(env, 4);
	else if (len > 100 && len <= 500)
		solve_stack(env, 8);
}
