/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lecamilo <lecamilo@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:59:43 by lcamilo-          #+#    #+#             */
/*   Updated: 2026/01/14 13:15:12 by lecamilo         ###   ########.fr       */
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
	push_75(env, stack);
	push_25(env);
	sort_stack_b(env);
}

void	solver(t_ps *env)
{
	int	len;

	len = lst_len(env->a);
	if (len == 2)
		sa(env);
	else if (len <= 10)
		solve(env);
	else if (len > 10 && len <= 100)
		solve_stack(env, 6);
	else if (len > 100 && len <= 500)
		solve_stack(env, 20);
}
