/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lecamilo <lecamilo@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:59:43 by lcamilo-          #+#    #+#             */
/*   Updated: 2026/01/14 13:07:48 by lecamilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	val_aprox(float m)
{
	int	k;

	k = (int) m;
	if ((m - k) >= 0.5)
		return ((int) m + 1);
	else
		return ((int) m);
}

void	push_75(t_ps *env, int stack)
{
	t_list_number	*tmp;
	int				i;
	int				len_stack;

	len_stack = val_aprox((float)env->len / stack * 2);
	while (len_stack <= env->len - val_aprox((float)env->len / stack * 2))
	{
		tmp = env->a;
		i = 1;
		while (tmp)
		{
			if (tmp->r_index <= len_stack)
			{
				push_b(env, i, len_stack);
				tmp = env->a;
				i = 0;
			}
			else
				tmp = tmp->next;
			i++;
		}
		len_stack += val_aprox((float)env->len / stack);
	}
}

void	push_25(t_ps *env)
{
	int	idx;

	while (lst_len(env->a) > 3)
	{
		idx = found_lowest(env);
		if (idx == 1)
			pb(env);
		else
		{
			while (found_lowest(env) != 1)
			{
				if (lst_len(env->a) / 2 > idx)
					ra(env);
				else
					rra(env);
			}
		}
	}
	sort_three(env);
}

void	push_b(t_ps *env, int idx, int stack)
{
	int	i;

	i = 1;
	while (i < idx)
	{
		if (idx < lst_len(env->a) / 2)
			ra(env);
		else
			rra(env);
		i++;
	}
	pb(env);
	if (env->b->r_index <= stack / 2 && lst_len(env->b) > 1)
		rb(env);
}
