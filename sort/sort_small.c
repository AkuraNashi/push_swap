/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:59:43 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/12/29 13:59:44 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
