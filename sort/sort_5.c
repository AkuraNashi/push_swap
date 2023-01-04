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

int found_lowest(t_ps *env)
{
	t_list_number *head;
	t_list_number *tmp;

	head = env->a;
	tmp = env->a;
	while (env->a)
	{
		if (tmp->value > env->a->value)
			tmp = env->a;
		env->a = env->a->next;
	}
	env->a = head;
	return (tmp->index);
}

int found_highest(t_ps *env)
{
	t_list_number *head;
	t_list_number *tmp;

	head = env->a;
	tmp = env->a;
	while (env->a)
	{
		if (tmp->value < env->a->value)
			tmp = env->a;
		env->a = env->a->next;
	}
	env->a = head;
	return (tmp->index - 1);
}

void	place_lowest(t_ps *env)
{
	int i;

	i = found_lowest(env);
	if(i <= 3)
	{
		while (i != 1)
		{
			ra(env);
			i--;
		}
	}
	else
	{
		while (i != 6)
		{
			rra(env);
			i++;
		}
	}
}

void	place_highest(t_ps *env)
{
	int i;

	i = found_highest(env);
	if(i <= 2)
	{
		while (i != 1)
		{
			ra(env);
			i--;
		}
	}
	else
	{
		while (i != 5)
		{
			rra(env);
			i++;
		}
	}
}

void	sort_five(t_ps *env)
{
	t_list_number *b;

	place_lowest(env);
	pb(env);
	place_highest(env);
	pb(env);
	b = env->b;
	sort_three(env);
	if (b->value < b->next->value)
		sb(env);
	pa(env);
	ra(env);
	pa(env);
}
