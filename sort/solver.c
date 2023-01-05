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

void	solve_stack(t_ps *env)
{
	(void) env;
}

void	solver(t_ps *env)
{
	int	len;

	len = lst_len(env->a);
	if (len <= 5)
		solve_small_lst(env, len);
//	else
//		solve_stack();
}

void	solve(t_ps *env);

void	solve_small_lst(t_ps *env, int len)
{
	if (len == 2)
		sa(env);
	else if (len == 3)
		sort_three(env);
	else
		sort_five(env);
}
