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
	if (len <= 10)
		solve(env);
}

void	solve(t_ps *env)
{
	int	idx;
	int	i;

	while (lst_len(env->a) != 3)
	{
		idx = found_lowest(env);
		if (idx == 1)
			pb(env);
		else
		{
			i = 1;
			while (i < idx && found_lowest(env) != 1)
			{
				if (lst_len(env->a) / 2 > idx)
					ra(env);
				else
					rra(env);
				i++;
			}
		}
	}
	sort_three(env);
	while (lst_len(env->b) != 0)
		pa(env);
}

int	found_lowest(t_ps *env)
{
	t_list_number	*head;
	t_list_number	*tmp;
	int				i;

	i = 0;
	head = env->a;
	tmp = env->a;
	while (env->a)
	{
		if (tmp->value > env->a->value)
			tmp = env->a;
		i++;
		env->a->index = i;
		env->a = env->a->next;
	}
	env->a = head;
	return (tmp->index);
}
