/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:25:42 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/12/29 13:25:43 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_ps *env)
{
	int				one;
	int				two;
	int				three;

	one = env->a->value;
	two = env->a->next->value;
	three = env->a->next->next->value;
	if (one > two && three > one && one < three)
		sa(env);
	else if (one < two && three < one && one > three)
		rra(env);
	else if (one < two && three < two)
	{
		sa(env);
		ra(env);
	}
	else if (one < two && three < two)
		ra(env);
	else if (three > two)
		ra(env);
	else
	{
		sa(env);
		rra(env);
	}
}
