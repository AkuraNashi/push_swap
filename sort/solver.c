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

void	push_75(t_ps *env, int stack)
{
	t_list_number	*tmp;
	int				i;
	int				len_stack;

	len_stack = env->len / stack;
	i = 1;
	while (len_stack != env->len)
	{
		tmp = env->a;
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
	int idx;
	int i;

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

void	solve_stack(t_ps *env, int stack)
{
	push_75(env, stack);
	push_25(env);
	lst_show(env->b);
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
