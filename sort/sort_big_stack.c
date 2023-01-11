/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:59:43 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/12/29 13:59:44 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_75(t_ps *env, int stack)
{
	t_list_number	*tmp;
	int				i;
	int				len_stack;

	len_stack = env->len / stack;
	while (len_stack != env->len) // lenstack < env->len marche pour 11 a 99 mais ne marche plus a 100+
	{
		tmp = env->a;
		i = 1;
		while (tmp)
		{
			if (tmp->r_index <= len_stack)
			{
				push_b(env, i);
				tmp = env->a;
				i = 0;
			}
			else
				tmp = tmp->next;
			i++;
		}
		len_stack += env->len / stack;
	}
}

void	push_25(t_ps *env)
{
	int	idx;
	int	i;

	while (lst_len(env->a))
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
}

void	push_b(t_ps *env, int idx)
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
}
